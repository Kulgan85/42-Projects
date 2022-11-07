/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:51:17 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/17 12:13:16 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    span small(10);
    std::cout << "Testing short span on empty vector" << std::endl;
    try
    {
        std::cout << small.shortspan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    small.addNumber(0);
    std::cout << "Testing large span on vector that has one number" << std::endl;
    try
    {
        std::cout << small.longspan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 1; i < 10; i++)
    {
        small.addNumber(i);
    }
    std::cout << "Testing the short span" << std::endl;
    std::cout << small.shortspan() << std::endl;
    std::cout << "Testing long span" << std::endl;
    std::cout << small.longspan() << std::endl;
    std::cout << "Testing for full span" << std::endl;
    try
    {
        small.addNumber(10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    span big(10000);
    std::cout << "Testing multi add with alot of values" << std::endl;
    try
    {
        big.addRandom(10001);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Testing large span input with rand vals" << std::endl;
    big.addRandom(10000);
    std::cout << "Testing short span" << std::endl;
    std::cout << big.shortspan() << std::endl;
    std::cout << "Testing long span" << std::endl;
    std::cout << big.longspan() << std::endl;
}