/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:22:21 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/17 16:06:34 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	std::cout << "\e[1;94m" << "Making Mutant stack with int type" << "\e[0m" << std::endl;
	std::cout << "\e[1;94m" << "Mutant stack: green" << "\e[0m" << std::endl;
    std::cout << "\e[1;94m" << "Mimic stack: red" << "\e[0m" << std::endl; 
	MutantStack<int>	mstack;
	std::list<int>		reglist;

	std::cout << "\e[1;94m" << "add '5' to stack" << "\e[0m" << std::endl;
	mstack.push(5);
	reglist.push_front(5);
	std::cout << "\e[1;94m" << "add '17' to stack" << "\e[0m" << std::endl;
	mstack.push(17);
	reglist.push_front(17);

	std::cout << "\e[1;94m" << "Get value from top of stack" << "\e[0m" << std::endl;
	std::cout << "\e[0;32m" << mstack.top() << "\e[0m" << std::endl;
	std::cout << "\e[0;31m" << reglist.front() << "\e[0m" << std::endl;

	std::cout << "\e[1;94m" << "Remove a value from stack" << "\e[0m" << std::endl;
	mstack.pop();
	reglist.pop_front();

	std::cout << "\e[1;94m" << "Get value at top of stack" << "\e[0m" << std::endl;
	std::cout << "\e[0;32m" << mstack.top() << "\e[0m" << std::endl;
	std::cout << "\e[0;31m" << reglist.front() << "\e[0m" << std::endl;

	std::cout << "\e[1;94m" << "Get size of stack" << "\e[0m" << std::endl;
	std::cout << "\e[0;32m" << mstack.size() << "\e[0m" << std::endl;
	std::cout << "\e[0;31m" << reglist.size() << "\e[0m" << std::endl;

	std::cout << "\e[1;94m" << "Add more stack vals" << "\e[0m" << std::endl;
	mstack.push(3);
	reglist.push_back(3);
	mstack.push(5);
	reglist.push_back(5);
	mstack.push(737);
	reglist.push_back(737);
	mstack.push(0);
	reglist.push_back(0);

	std::cout << "\e[1;94m" << "Make the stack iterators" << "\e[0m" << std::endl;
	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();
	std::list<int>::iterator	itl = reglist.begin();
	std::list<int>::iterator	itle = reglist.end();

	std::cout << "\e[1;94m" << "Test the increment and decrement" << "\e[0m" << std::endl;
	++it;
	--it;
	std::cout << "\e[1;94m" << "Read top value and increment without the pop()" << "\e[0m" << std::endl;
	while (it != ite)
	{
		std::cout << "\e[0;32m" << *it << "\e[0m" << std::endl;
		++it;
	}
	while (itl != itle)
	{
		std::cout << "\e[0;31m" << *itl << "\e[0m" << std::endl;
		++itl;
	}
	std::cout << "\e[1;94m" << "Make regular stack using copy constructor with radioactive stack" << "\e[0m" << std::endl;
	std::stack<int> s(mstack);
    std::cout << "\e[1;94m" << "no error" << "\e[0m" << std::endl;
	return (0);
}