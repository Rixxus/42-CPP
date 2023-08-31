/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:12:26 by rmount            #+#    #+#             */
/*   Updated: 2023/08/31 17:54:00 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << b << endl;

    cout << Fixed::max(a, b) << endl;
}
