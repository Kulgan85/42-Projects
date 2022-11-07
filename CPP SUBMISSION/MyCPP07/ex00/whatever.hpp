/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:57:14 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/13 14:13:16 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &x, T &y)
{
    T a;
    a = x;
    x = y;
    y = a;
}

template <typename T>
T min(T &a, T &b)
{
    return (a < b) ? a : b;
}

template <typename T>
T max(T &a, T &b)
{
    return (a > b) ? a : b;
}

#endif