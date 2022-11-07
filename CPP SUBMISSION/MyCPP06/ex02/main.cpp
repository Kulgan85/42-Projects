/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:57:54 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/13 12:43:03 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>

Base * generate(void)
{
    int v1;

    srand((unsigned int)time(NULL));
    v1 = rand() % 3;
    switch(v1)
    {
        case 0:
            return(dynamic_cast<Base*>(new A));
            break;
        case 1:
            return(dynamic_cast<Base*>(new B));
            break;
        case 2:
            return(dynamic_cast<Base*>(new C));
            break;
        default:
            return(NULL);
    }
}

void identify (Base *p)
{
    A *a_ptr = dynamic_cast<A *>(p);
    B *b_ptr = dynamic_cast<B *>(p);
    C *c_ptr = dynamic_cast<C *>(p);

    if (a_ptr != NULL)
	std::cout << "A" << std::endl;
    else if (b_ptr != NULL)
	std::cout << "B" << std::endl;
    else if (c_ptr != NULL)
	std::cout << "C" << std::endl;
}

void identify (Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception e) {}
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(std::exception& e) {}
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e) {}
}

int main()
{
    Base* base;

    base = generate();

    identify(base);
    identify(&(*base));
    return(0);
}