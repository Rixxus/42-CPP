/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:12:26 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 16:37:15 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;
 
    cout << a.getRawBits() << endl;
    cout << b.getRawBits() << endl;
    cout << c.getRawBits() << endl;
}