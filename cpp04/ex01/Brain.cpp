#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor\n";
    for (int i = 0; i < 100; i++)
        ideas[i] = "...";

}

Brain::~Brain()
{
    std::cout << "Brain destructor\n";
}

Brain& Brain::operator=(const Brain& assign) {
    std::copy(assign.ideas, assign.ideas + 100, this->ideas);
    return *this;
}

Brain::Brain(const Brain& copy) {
    *this = copy;
}

void Brain::addIdea(std::string const& clue) {
    int i;
    for (i = 0; i < 100 && ideas[i] != "..."; i++) {}
    if (i < 99)
        ideas[i] = clue;
    // ideas->pop_back(clue);
}

std::string Brain::getAnIdea(int ideaIndex) {
    if (ideaIndex > 0 && ideaIndex < 99)
        return ideas[ideaIndex];
    return "no idea";
}

