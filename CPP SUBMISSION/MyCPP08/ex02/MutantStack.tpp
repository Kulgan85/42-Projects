/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:53:28 by tbertozz          #+#    #+#             */
/*   Updated: 2022/10/17 14:53:29 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ): std::stack<T>() {

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy): std::stack<T>() {
	this->c = copy.c;
}

template <typename T>
MutantStack<T>::~MutantStack( void ) {

}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &assign) {
	this->c = assign.c;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::begin(void) {
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::end(void) {
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::rbegin(void) {
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::rend(void) {
	return (this->c.rend());
}