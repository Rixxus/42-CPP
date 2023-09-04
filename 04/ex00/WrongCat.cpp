/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:54:27 by rmount            #+#    #+#             */
/*   Updated: 2023/09/04 16:04:59 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal(){
    cout << "WrongCat default constructor called." << endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat(){
    cout << "WrongCat has been destroyed." << endl;
}

WrongCat::WrongCat(const WrongCat &copy):WrongAnimal(copy.type){
    cout << "WrongCat copy constructor called." << endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
    cout << "WrongCat copy assignment operator called." << endl;
    this->type = copy.type;
    return (*this);
}

void WrongCat::makeSound() const{
    cout << this->type << " says meooooooww." << endl;
}