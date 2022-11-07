/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:46:42 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/13 16:18:02 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
    public:
        Array(void);
        Array(unsigned int n);
        Array(const Array &copy);
        ~Array(void);

        Array<T> &operator=(const Array &assign);
        T &operator[](unsigned int idx);

        unsigned int size(void);

    private:
        T *array;
        unsigned int len;
        void copyArray(T *src);
};

//Needs to be included at the bottom for it to work
#include "Template.tpp"

#endif