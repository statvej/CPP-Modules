
#ifndef ITER_HPP
# define ITER_HPP

template <class T>
void Iter(T arr[], int len, void(*func)(T))
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
}

#endif