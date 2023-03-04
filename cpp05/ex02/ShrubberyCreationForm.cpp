
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137), Target("default target")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target_)
    :Form("ShrubberyCreationForm", 145, 137), Target(_target_)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other)
    : Target(other.getTarget())
{
    *this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& other) {
    this->Target = other.getTarget();
    return *this;
}

std::string ShrubberyCreationForm::getTarget()const { return Target; }

void ShrubberyCreationForm::executeSafe() const {
    std::ofstream outfile(this->Target + "_shrubbery");
    outfile <<
        "            # #### ####\n"
        "        ### \\/#|### |/####\n"
        "        ##\\/#/ \\||/##/_/##/_#\n"
        "       ###  \\/###|/ \\/ # ###\n"
        "    ##_\\_#\\_\\## | #/###_/_####\n"
        "    ## #### # \\ #| /  #### ##/##\n"
        "    __#_--###`  |{,###---###-~\n"
        "                \\ }{\n"
        "                }}{\n"
        "                }}{\n"
        "       		 {{}\n"
        "        , -=-~{ .-^- _\n"
        "                `}\n"
        "                 {"
        << std::endl;

}





