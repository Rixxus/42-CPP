/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:41:49 by rmount            #+#    #+#             */
/*   Updated: 2023/09/08 10:48:22 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    cout << "Default Brain constructor called." << endl;
}

Brain::Brain(const Brain &copy){
    cout << "Brain copy constructor called." << endl;
    *this = copy;
}

Brain::~Brain(){
    cout << "Brain destructor called." << endl;
}

Brain &Brain::operator=(const Brain &copy){
    cout << "Brain copy assignment operator called." << endl;
    for (int i = 0; i < 100; i++){
        this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}

void Brain::setIdeas(const string &idea){
    for (int i = 0; i < 100; i++){
        ideas[i] = idea;
    }
}

string Brain::getIdeas(int index) const {
    if (index >= 0 && index < 100){
        return (ideas[index]);
    }
    cout << "Index must be between 0 and 99 inclusive." << endl;
    return (0);
}