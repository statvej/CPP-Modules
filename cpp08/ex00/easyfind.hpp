
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdlib.h>
# include <stdexcept>
# include <iostream>
# include <algorithm>
# include <vector>
# define COLOR_RED "\033[31;1m"
# define COLOR_GREEN "\033[32;1m"

template <typename T>
typename T::iterator easyfind(T &container, int num){
    typename T::iterator iter;
	iter = std::find(container.begin(), container.end(), num);
	if (iter == container.end())
		throw std::invalid_argument("Easyfinder: no such element");
	return (iter);
}


#endif