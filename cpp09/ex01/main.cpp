#include <string>
#include <iostream>
#include <stack>

bool checkArgument(std::string argument) {
    for (size_t i = 0; i < argument.length(); i++)
    {
        if (!(argument[i] >= '0' && argument[i] <= '9') && argument[i] != '-' && argument[i] != '+' && argument[i] != '*' && argument[i] != '/' && argument[i] != ' ')
            return false;
    }
    return true;

}

void rpn(std::string arguments)
{
    std::stack<int> reversePolishStack;
    for (size_t i = 0; i < arguments.length(); i++)
    {
        if (arguments[i] == ' ') {
            if (arguments[i + 1] == ' ')
                throw std::out_of_range("Wrong number of spaces");
        }
        else if (isdigit(arguments[i]))
        {
            if (arguments[i + 1] != ' ')
                throw std::out_of_range("Wrong format");
            reversePolishStack.push(stoi(arguments.substr(i, arguments.length())));
        }
        else if (arguments[i] == '-' || arguments[i] == '+' || arguments[i] == '*' || arguments[i] == '/')
        {
            if (reversePolishStack.size() < 2)
                throw std::out_of_range("Invalid operation");
            int a, b;
            b = reversePolishStack.top();
            reversePolishStack.pop();
            a = reversePolishStack.top();
            reversePolishStack.pop();
            if (arguments[i] == '-')
                reversePolishStack.push(a - b);
            if (arguments[i] == '+')
                reversePolishStack.push(a + b);
            if (arguments[i] == '*')
                reversePolishStack.push(a * b);
            if (arguments[i] == '/')
                reversePolishStack.push(a / b);
        }
    }
    if(reversePolishStack.size() == 1)
        std::cout << reversePolishStack.top() << std::endl;
    else
        throw std::out_of_range("Invalid amount of operations");
}

int main(int ac, char** av) {
    if (ac == 2) {
        std::string argument(av[1]);
        if (!checkArgument(argument))
        {
            std::cout << "Unsupported format of argument" << std::endl;
            return -1;
        }
        try
        {
            rpn(argument);
        }
        catch (const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
        std::cout << "Wrong number of arguments!" << std::endl;
}