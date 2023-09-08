/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <rmount@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:51:27 by rmount            #+#    #+#             */
/*   Updated: 2023/09/08 11:09:52 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat:public Animal{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        Cat &operator=(const Cat &copy);
        virtual void makeSound() const;
        Brain *getBrain() const;
};

#endif