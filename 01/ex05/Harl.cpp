/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:05:09 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 15:05:07 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(){
    cout << "DEBUG LEVEL" << endl;
    cout << "Where dem bugs at?" << endl;
}

void Harl::info(){
    cout << "INFO LEVEL" << endl;
    cout << "I have information." << endl;
}

void Harl::warning(){
    cout << "WARNING LEVEL" << endl;
    cout << "This is not a drill." << endl;
}

void Harl::error(){
    cout << "ERROR LEVEL" << endl;
    cout << "Everything is ruined forever." << endl;
}

void Harl::complain(string level){
    void    (Harl:: *functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    string  levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++){
        if (levels[i] == level)
        {
            (this->*functions[i])();
        }
    }
}