
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
private:
    
public:
    MutantStack(){}
    virtual ~MutantStack(){}
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator end(){
        return std::stack<T>::c.end();
    }
    iterator begin(){
        return std::stack<T>::c.begin();
    }
};


#endif