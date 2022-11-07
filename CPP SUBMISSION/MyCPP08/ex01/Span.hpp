/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:51:05 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/17 12:13:22 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <ctime>

class span
{
    public:
        span(int n);
        span(const span &copy);
        ~span(void);

        span &operator=(const span &assign);

        void addNumber(int number);
        void addRandom(int nums);
        int shortspan(void);
        int longspan(void);

        class fullSpan: public std::exception {
            const char *what() const throw();
        };

        class emptySpan: public std::exception {
            const char *what() const throw();
        };

    private:
        std::vector<int> spam;
        int min;
        int max;
        int varShort;
        unsigned int current;
        unsigned int total;

        span(void);
};

#endif