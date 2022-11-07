/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:23:55 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/05 17:03:48 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// YELLOW		- "\033[33m" 
// GREEN		- "\033[32m"
// RESET		- "\033[0m"
// UNDERLINE	- "\033[4m"

int main( void ) 
{
	Fixed a;
	Fixed c( a );
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const d(a + b);
	std::cout << std::endl;
    std::cout << "\033[32m" << "------- RUNNING TESTS -------" <<std::endl;
    std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Output" << std::endl;
	std::cout << "\033[0m" << d << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Incrementing" << std::endl;
	std::cout << "\033[0m" << a << std::endl;
	std::cout << "Increment (Float output):   " << ++a << std::endl;
	std::cout << "Check Value (Float output): " << a << std::endl;
	std::cout << "Increment (Int output):     " << a++ << std::endl;
	std::cout << "Check Value (Float output): " << a << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Decrementing" << std::endl;
	std::cout << "\033[0m" << c << std::endl;
	std::cout << "Decrement (Float output):   " << --c << std::endl;
	std::cout << "Check Value (Float output): " << c << std::endl;
	std::cout << "Decrement (Int output):     " << c-- << std::endl;
	std::cout << "Check Value (Float output): " << c << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Max" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << b << std::endl;
	std::cout << "Test:     " << Fixed::max( a, b ) << std::endl;
	std::cout << "Solution: " << b << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Min" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << b << std::endl;
	std::cout << "Test:     " << Fixed::min( a, b ) << std::endl;
	std::cout << "Solution: " << a << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Less Than" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << c << std::endl;
	std::cout << "Test:     " << (a < c) << std::endl;
	std::cout << "Solution: " << "0" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Less Than or Equal" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << c << std::endl;
	std::cout << "Test:     " << (a <= c) << std::endl;
	std::cout << "Solution: " << "0" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Greater Than" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << c << std::endl;
	std::cout << "Test:     " << (a > c) << std::endl;
	std::cout << "Solution: " << "1" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Greater Than or Equal" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << c << std::endl;
	std::cout << "Test:     " << (a >= c) << std::endl;
	std::cout << "Solution: " << "1" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Equal" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << c << std::endl;
	std::cout << "Test:     " << (a == c) << std::endl;
	std::cout << "Solution: " << "0" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Not Eqaul" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << c << std::endl;
	std::cout << "Test:     " << (a != c) << std::endl;
	std::cout << "Solution: " << "1" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Addition" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << b << std::endl;
	std::cout << "Test:     " << a + b << std::endl;
	std::cout << "Solution: " << "10.1094" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Subtraction" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << b << std::endl;
	std::cout << "Test:     " << a - b << std::endl;
	std::cout << "Solution: " << "-10.0938" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Multiplication" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << b << std::endl;
	std::cout << "Test:     " << a * b << std::endl;
	std::cout << "Solution: " << "0.0789185" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m" << "\033[4m" << "Testing Division" << std::endl;
	std::cout << "\033[0m" << "Number 1: " << a << std::endl;
	std::cout << "Number 2: " << b << std::endl;
	std::cout << "Test:     " << a / b << std::endl;
	std::cout << "Solution: " << "0.000773395" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[32m" << "------- TESTS COMPLETE! -------" <<std::endl;
	std::cout << "\033[0m" << std::endl;

	return 0;
}