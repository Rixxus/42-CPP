/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:44:37 by rmount            #+#    #+#             */
/*   Updated: 2023/08/07 15:01:05 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::string;
using std::cout;
using std:: endl;

int main(){
    string speak = "HI THIS IS BRAIN";
    string *stringPTR = &speak;
    string &stringREF = speak;

    cout << "The address of the string is: " << &speak << endl;
    cout << "The address of the pointer is: " << stringPTR << endl;
    cout << "The address of the reference is: " << stringREF << endl;
    cout << endl;
    cout << "The value of the string is: " << speak << endl;
    cout << "The value of the pointer is: " << *stringPTR << endl;
    cout << "The value of the reference is: " << stringREF << endl;

}