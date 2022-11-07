#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"
#include <exception>

template <typename T>
Array<T>::Array(void)
{
    array = new T[0];
    len = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    array = new T[n];
    len = n;
        
}

template <typename T>
Array<T>::Array(const Array &copy)
{
    array = new T[copy.len];
    len = copy.len;
    this->copyArray(copy.array);
}

template <typename T>
Array<T>::~Array()
{
    delete array;
}

template <typename T>
Array<T>	&Array<T>:: operator = (const Array &assign)
{
    array = new T[assign.len];
    len = assign.len;
    this->copyArray(assign.array);
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int idx)
{
    if (idx < this->len)
    {
        return (this->array[idx]);
    }
    else
    {
        throw(std::exception());
    }
}

template <typename T>
unsigned int Array<T>::size(void)
{
    return (len);
}

template <typename T>
void Array<T>::copyArray(T *src)
{
    for (unsigned int i = 0; i < len; i++)
    {
        array[i] = src[i];
    }
}


#endif