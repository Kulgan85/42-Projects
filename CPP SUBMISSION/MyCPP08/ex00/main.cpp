/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:38:01 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/17 10:16:14 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int>            numbers;
    std::list<int>              otherNumbers;
    std::vector<char>           character;
    std::vector<std::string>    word;
    for (int i = 0; i < 5; i++)
    {
        numbers.push_back(1);
    }
    for (int i = 0; i < 5; i++)
    {
        character.push_back('h');
    }
    for (int i = 0; i < 10; i+=2)
    {
        otherNumbers.push_back(i);
    }
    for (int i = 0; i < 5; i++)
    {
        word.push_back("Random String");
    }
    std::cout << "\e[1;94m" << "TESTING VALID INDEX USING VECTOR" << "\e[0m" << std::endl;
    easyfind(numbers, 1);
    std::cout << "\e[1;94m" << "TESTING VALID INDEX USING LIST" << "\e[0m" << std::endl;
    easyfind(otherNumbers, 6);
    std::cout << "\e[1;94m" << "TESTING DATA TYPES" << "\e[0m" << std::endl;
    easyfind(character, 'h');
    std::cout << "\e[1;94m" << "COMPLEX DATA TYPE GIVES COMPILE ERROR" << "\e[0m" << std::endl;
    //easyfind(word, 2); //Comment this to test
    std::cout << "\e[1;94m" << "TESTING INVALID INDEX" << "\e[0m" << std::endl;
    try
    {
        easyfind(numbers, 7);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\e[1;94m" << "TESTING VALID INDEX, INVALID VALUE" << "\e[0m" << std::endl;
    try
    {
        easyfind(numbers, 4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);
}