/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertozz <tbertozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:27:34 by tbertozz          #+#    #+#             */
/*   Updated: 2022/09/15 15:28:17 by tbertozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

void	copy_ideas( std::string *ideas_dst, const std::string *ideas_src ) {
	
	for (int i = 0; i < 100; i++)
	{
		ideas_dst[i] = ideas_src[i];
	}

}

void	set_ideas( std::string *ideas ) {

	std::string pool[100] = 
	{
		"eight","same","possible","weak","law","colony","citizen","even","kitten","definition",
		"be","chapter","dot","about","lady","naturally","view","animal","loss","cent",
		"finger","suppose","great","partly","again","rush","remove","principal","tribe","nearby",
		"father","factory","major","gate","discovery","hospital","storm","separate","paragraph","cup",
		"kept","tetrafluoride","fine","wood","although","nature","hurt","health","master","experience",
		"population","impossible","shaking","tip","out","high","support","hardly","active","drew",
		"courage","hour","ball","machinery","control","pass","hung","exercise","fallen","sap",
		"heavy","remain","coal","division","present","claws","still","fed","why","shelter",
		"baseball","earth","tank","put","thing","silver","imagine","tin","merely","picture",
		"bark","teacher","strike","fifth","football","rear","sky","wonderful","longer","butter"
	};

	copy_ideas(ideas, pool);
}

Brain::Brain( void ) {
	std::cout << "A brain was formed" << std::endl;
	set_ideas(ideas);
}

Brain::Brain( const Brain &copy ) {
	copy_ideas(this->ideas, copy.ideas);
	std::cout << "The brain has been copied" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "The brain got smooshed" << std::endl;
}

Brain	&Brain::operator=( const Brain &copy ) {
	copy_ideas(this->ideas, copy.ideas);
	std::cout << "A brain has been copied" << std::endl;
	return (*this);
}

void	Brain::randomThought( int index ) const {
	std::cout << ideas[index];
}