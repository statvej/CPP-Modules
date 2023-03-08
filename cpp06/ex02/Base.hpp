
#ifndef BASE_HPP
# define BASE_HPP

#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <time.h>
class Base
{
private:
    /* data */
public:
    virtual ~Base();
};

class A : public Base
{
private:
public:
    A(/* args */);
};



class B : public Base
{
private:
public:
    B(/* args */);
};


class C : public Base
{
private:
public:
    C(/* args */);
};




#endif