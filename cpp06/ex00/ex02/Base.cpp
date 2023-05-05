#include "Base.hpp"





void identify(Base* ptr) {
    if (dynamic_cast<A*>(ptr) != nullptr)
        std::cout << "Type is A" << std::endl;
    else if (dynamic_cast<B*>(ptr) != nullptr)
        std::cout << "Type is B" << std::endl;
    else if (dynamic_cast<C*>(ptr) != nullptr)
        std::cout << "Type is C" << std::endl;
}

void identify(Base& ref) {
    if (dynamic_cast<A*>(&ref) != nullptr)
        std::cout << "Type is A" << std::endl;
    else if (dynamic_cast<B*>(&ref) != nullptr)
        std::cout << "Type is B" << std::endl;
    else if (dynamic_cast<C*>(&ref) != nullptr)
        std::cout << "Type is C" << std::endl;
}

Base* generate() {
    std::srand(std::time(NULL));
    int i = std::rand() % 3;
    switch (i)
    {
    case 0:
        std::cout << "im creating A" << std::endl;
        return new A();
    case 1:
        std::cout << "im creating B" << std::endl;
        return new B();
    case 2:
        std::cout << "im creating C" << std::endl;
        return new C();
    default:
        return nullptr;
    }
}


Base::~Base()
{
}




A::A(/* args */)
{
}


B::B(/* args */)
{
}



C::C(/* args */)
{
}

