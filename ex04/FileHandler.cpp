/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:22:23 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/19 12:01:58 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"


FileHandler::FileHandler(const std::string &filename, const std::string &s1, const std::string &s2)
    : filename(filename), s1(s1), s2(s2)
	{}

void FileHandler::replaceAndSave()
{
    std::ifstream inputFile(filename.c_str());
	std::string outputFilename = filename + ".replace";
    if (!inputFile.is_open())
	{
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    std::ofstream outputFile(outputFilename.c_str()); 
    if (!outputFile.is_open())
	{
        std::cerr << "Error creating file: " << outputFilename << std::endl;
        inputFile.close();
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
	{
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
		{
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();
}
