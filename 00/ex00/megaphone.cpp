/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmount <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 21:00:39 by rmount            #+#    #+#             */
/*   Updated: 2023/07/26 18:40:16 by rmount           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

int	main(int ac, char **av)
{
	string	arg;

	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			arg = av[i];
			int	length = arg.length();
			for (int j = 0; j < length; j++)
			{
				cout << (char)(toupper(arg[j]));
			}
		}
		cout << endl;
	}
	return (0);
}