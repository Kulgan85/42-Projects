/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:38:04 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/14 15:30:01 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>

class notFound: public std::exception
{
    public:
        const char *what(void) const throw();
};

template<typename T>
void easyfind(T a, int b);

#include "easyfind.tpp"

#endif