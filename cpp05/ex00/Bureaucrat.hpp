
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    const std::string name;
    int score;
public:
    Bureaucrat(std::string _name, int score);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat &operator=(const Bureaucrat& other);
    
    Bureaucrat();
    ~Bureaucrat();

    int getScore() const;
    std::string getName() const;

    void increaseScoreBy(int amount);
    void decreaseScoreBy(int amount);

    void incrementScore();
    void decrementScore();

    class GradeTooHighException : public std::exception
    {
        public :
            const char * what() const throw ()
            {
                return "Grade is too high, please lower it";
            }
    };

    class GradeTooLowException : public std::exception
    {
        public :
            const char * what() const throw ()
            {
                return "Grade is too low, please highten it it";
            }
    };

};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b);



#endif