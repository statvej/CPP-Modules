#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main (void)
{
	std::string partition(70, '-');

	{
		std::cout << partition << std::endl;
		std::cout << "Scope 0: Subject test" << std::endl;
		std::cout << partition << std::endl;
		
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl<< std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl<< std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int> s(mstack);
		MutantStack<int>::iterator it = s.begin();
		MutantStack<int>::iterator ite = s.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
        
	}

	{
		std::cout << partition << std::endl;
		std::cout << "Scope 1: Subject test but with list-functions to show comparable output and functionality" << std::endl;
		std::cout << partition << std::endl;
		
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}

	std::cout << partition << std::endl;
	std::cout << "Scope 3: Own tests" << std::endl;
	std::cout << partition << std::endl;
	
	MutantStack<int> k;
	std::stack<int> j;
	
	std::cout << "MutantStack size: " << k.size() << std::endl;
	std::cout << "Stack size: " << j.size() << std::endl;
	k.push(19);
	k.push(8);
	k.push(9);
	k.push(10);
	k.push(32);
	k.push(99);
	std::cout << "MutantStack size after adding elements: ";
	std::cout << k.size() << std::endl;	
	std::cout << "First element: ";
	std::cout << *(k.begin()) << std::endl;
	std::cout << "Last element: ";
	std::cout << *(k.end() - 1)<< std::endl;

	return 0;
}