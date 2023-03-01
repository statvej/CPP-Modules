
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
class Brain
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    Brain(const Brain& copy);
    ~Brain();
    Brain& operator=(const Brain& assign);
    void addIdea(std::string const &clue);
    std::string getAnIdea(int ideaIndex);
};


#endif