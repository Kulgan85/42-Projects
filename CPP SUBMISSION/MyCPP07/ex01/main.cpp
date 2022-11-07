/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:21:53 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/17 13:49:41 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    std::cout << "Making Int Array" << std::endl;
    int     intArr[] = {1, 2, 3};
    std::cout << "All G" << std::endl;
    std::cout << "Print all the elements" << std::endl;
    iter(intArr, 3, print);
    std::cout << std::endl;
    std::cout << "Add function per element" << std::endl;
    iter(intArr, 3, addsome);
    std::cout << "All G" << std::endl;
    std::cout << "Print all the elements" << std::endl;
    iter(intArr, 3, print);
    std::cout << std::endl;
    
    std::cout << "Making Char Array" << std::endl;
    char    string[] = "Hello";
    std::cout << "All G" << std::endl;
    std::cout << "Print all the chars" << std::endl;
    iter(string, 5, print);
    std::cout << std::endl;
    std::cout << "Add more chars" << std::endl;
    iter(string, 5, addsome);
    std::cout << "All G" << std::endl;
    std::cout << "Print all the chars" << std::endl;
    iter(string, 5, print);
    std::cout << std::endl;
    return (0);
}