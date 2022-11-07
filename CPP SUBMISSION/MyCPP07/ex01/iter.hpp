/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:21:50 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/17 13:01:10 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, size_t len, void f(T &))
{
    for(size_t i = 0; i < len; i++)
    {
        f(arr[i]);
    }
}

template <typename T>
void print(T &c)
{
    std::cout << c;
}

template <typename T>
void addsome(T &a)
{
    a = a + 2;
}

#endif