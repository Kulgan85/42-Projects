/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:38:06 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/14 15:30:35 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

const char *notFound::what(void) const throw()
{
    return("Invalid Index");
}

template<typename T>
void easyfind(T a, int b)
{
    typename T::iterator i = std::find(a.begin(), a.end(), b);
    if (i == a.end())
    {
        throw notFound();
        return ;
    }
    std::cout << *i << std::endl;
}