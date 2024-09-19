/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 06:53:13 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/19 07:01:10 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "Address of string:\t\t" << &string << std::endl;
	std::cout << "Address of stringPTR:\t\t" << stringPTR << std::endl;
	std::cout << "Address of stringREF:\t\t" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of string:\t\t" << string <<std::endl;
	std::cout << "Value pointed to by stringPTR:\t" << *stringPTR <<std::endl;
	std::cout << "Value of stringREF:\t\t" << stringREF <<std::endl;

	return (0);
}