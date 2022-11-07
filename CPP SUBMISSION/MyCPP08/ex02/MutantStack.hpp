/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:29:46 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/17 14:52:50 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <list>

//made a new class inhereting from stack
template <typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack( void );
		MutantStack( const MutantStack &copy );
		~MutantStack( void );

		MutantStack	&operator=( const MutantStack &assign );

		//added iterator to stack using lower level container dequeue
		typedef typename std::deque<T>::iterator iterator;

		//added iterator functions which already exist in dequeue
		iterator    begin( void );
		iterator    end( void );
		
		iterator	rbegin( void );
		iterator	rend( void );
};

#include "MutantStack.tpp"

#endif