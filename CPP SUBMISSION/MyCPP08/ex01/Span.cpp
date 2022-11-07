/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:50:52 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/17 12:13:20 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

span::span(int n)
{
    total = n;
    varShort = 0;
    current = 0;
}

span::span(const span &copy)
{
    spam = copy.spam;
    total = copy.total;
    varShort = copy.varShort;
    current = copy.current;
    max = copy.max;
    min = copy.min;
}

span::~span()
{
    std::cout << "No more spam :(" << std::endl;
}

span &span::operator=(const span &assign)
{
    spam = assign.spam;
    total = assign.total;
    varShort = assign.varShort;
    current = assign.current;
    max = assign.max;
    min = assign.min;
    return(*this);
}

void span::addNumber(int number)
{
    if(total == current)
        throw fullSpan();
    spam.push_back(number);
    if (!current)
    {
        max = number;
        
        min = number;
    }
    current++;
    if(number > max)
        max = number;
    if(number < min)
        min = number;
}

//random
void span::addRandom(int nums)
{
    if(nums + current > total)
    {
        throw fullSpan();
    }
    srand((unsigned)time(0));
    for (int i = 0; i < nums; i++)
    {
        int random = rand() % 10000000000;
        this->addNumber(random);
    }
}

int span::shortspan(void)
{
    if (current < 2)
    {
        throw emptySpan();
    }
    sort(spam.begin(), spam.end());
    std::vector<int>::iterator current = spam.begin();
    std::vector<int>::iterator next = current;
    next++;
    varShort = *next - *current;
    while (next != spam.end())
    {
        if (*next - *current < varShort)
            varShort = *next - *current;
        current++;
        next++;
    }
    return (varShort);
}

int span::longspan(void)
{
    if(current < 2)
    {
        throw emptySpan();
    }
    return (max - min);
}

const char *span::fullSpan::what() const throw()
{
    return ("The  S  P  A  N  is full");
}

const char *span::emptySpan::what() const throw()
{
    return("Can't determine  S  P  A  N  ");
}