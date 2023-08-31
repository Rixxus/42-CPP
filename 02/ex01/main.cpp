/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:12:26 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 20:32:16 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
    Fixed   a;
    Fixed   const b(10);
    Fixed   const c(42.42f);
    Fixed   const d(b);

    a = Fixed(1234.4321f);

    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "c is " << c << endl;
    cout << "d is " << d << endl;

    cout << "a is " << a.toInt() << " as integer" << endl;
    cout << "b is " << b.toInt() << " as integer" << endl;
    cout << "c is " << c.toInt() << " as integer" << endl;
    cout << "d is " << d.toInt() << " as integer" << endl;
}
