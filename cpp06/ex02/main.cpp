#include "Base.hpp"

Base *generate();
void identify(Base *ref);
void identify(Base &ref);

int main(){
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
}