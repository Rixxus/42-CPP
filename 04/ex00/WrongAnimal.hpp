/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:27:32 by rmount            #+#    #+#             */
/*   Updated: 2023/09/04 15:38:17 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class   WrongAnimal{
    protected:
        string type;
    public:
        WrongAnimal();
        WrongAnimal(string type);
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &copy);
        virtual void makeSound() const;
        string getType() const;
};

#endif