/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moharras <moharras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 07:40:13 by moharras          #+#    #+#             */
/*   Updated: 2021/07/07 14:41:22 by moharras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <strstream>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */

void lineReplace(std::string s1, std::string s2, size_t found, std::string &line)
{
	line =  line.substr(0, found) + s2 + &line[s1.length() + found];
	return ;
}


std::string uppercase(std::string str)
{
	for (int i= 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}
int main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;
	if (ac != 4)
	{
		std::cout << RED << "Error Argumanets" << RESET << std::endl;
		return (0);
	}
	filename = av[1]; s1 = av[2]; s2 = av[3];
	std::ifstream inFile(filename);
	if (!inFile.is_open())
	{
		std::cout << "File: " << filename << "not exist!" << std::endl;
		return (0);
	}
	std::ofstream outFile(uppercase(filename) + ".replace");
	if (!outFile.is_open())
		outFile.open(uppercase(filename) + ".replace");
	std::string line;
	size_t found;
	int i;
	while(getline(inFile, line))
	{
		i = 0;
		while (line[i])
		{
			found = line.find(s1, i);
			if (found != std::string::npos)
			{
				lineReplace(s1, s2, found, line);
				i = found + s2.length();
			}
			else
				i++;
		}
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
	outFile.close();
	return (0);
}
