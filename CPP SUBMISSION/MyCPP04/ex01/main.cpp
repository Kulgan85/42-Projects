/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:24:06 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/06 10:44:29 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	
	Animal	*squad[10];

	std::cout << "\033[36m" << "Making the squad with half cats and half dogs" << "\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			squad[i] = new Dog();
		else
			squad[i] = new Cat();
	}
	std::cout << "\033[36m" << "Animals must make noises" << "\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		squad[i]->makeSound();
	}
	std::cout << "\033[36m" << "Delete everything in the array" << "\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete squad[i];
	}

	std::cout << "\033[36m" << "Multiple copying" << "\033[0m" << std::endl;
	Cat	*cat_one = new Cat();
	Cat	cat_two(*cat_one);
	Cat	cat_three;
	cat_three = *cat_one;

	cat_one->printThought();
	delete cat_one;
	std::cout << "\033[36m" << "The copied cats must think still once OG cat is deleted" << "\033[0m" << std::endl;
	cat_two.printThought();
	cat_three.printThought();

	Cat cata;
	std::cout << "cat 1 brain: " << cata.getBrain() << std::endl;
	{
	Cat catb = cata; 
	std::cout << "cat 2 brain: " << catb.getBrain() << std::endl;
	}
	return 0;

}
