/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:21:53 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/19 11:56:19 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class FileHandler {
public:
    FileHandler(const std::string& filename, const std::string& s1, const std::string& s2);
    void replaceAndSave();

private:
    std::string filename;
    std::string s1;
    std::string s2;
};


#endif
