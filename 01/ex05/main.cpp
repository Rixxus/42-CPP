/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:05:52 by rmount            #+#    #+#             */
/*   Updated: 2023/08/28 15:10:14 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
    Harl grumpyHarl;

    grumpyHarl.complain("DEBUG");
    grumpyHarl.complain("INFO");
    grumpyHarl.complain("WARNING");
    grumpyHarl.complain("ERROR");
}