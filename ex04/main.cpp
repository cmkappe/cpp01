/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chiarakappe <chiarakappe@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:26:11 by chiarakappe       #+#    #+#             */
/*   Updated: 2026/02/23 02:06:29 by chiarakappe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

static std::string	replaceAll(const std::string &content,
	const std::string &s1, const std::string &s2)
{
	std::string		result;
	std::size_t		start;
	std::size_t		pos;

	start = 0;
	pos = content.find(s1, start);
	while (pos != std::string::npos)
	{
		result.append(content, start, pos - start);
		result += s2;
		start = pos + s1.length();
		pos = content.find(s1, start);
	}
	result.append(content, start, content.length() - start);
	return (result);
}

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::string	content;
	std::ifstream	inputFile;
	std::ofstream	outputFile;

	if (argc != 4)
		return (std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>"
			<< std::endl, 1);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
		return (std::cerr << "Error: s1 cannot be empty." << std::endl, 1);
	inputFile.open(filename.c_str());
	if (!inputFile.is_open())
		return (std::cerr << "Error: cannot open input file." << std::endl, 1);
	std::getline(inputFile, content, '\0');
	inputFile.close();
	outputFile.open((filename + ".replace").c_str());
	if (!outputFile.is_open())
		return (std::cerr << "Error: cannot create output file." << std::endl, 1);
	outputFile << replaceAll(content, s1, s2);
	outputFile.close();
	return (0);
}


/* Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.
It must open the file <filename> and copy its content into a new file
<filename>.replace, replacing every occurrence of s1 with s2.
Using C file manipulation functions is forbidden and will be considered cheating. All
the member functions of the class std::string are allowed, except replace. Use them
wisely!
Of course, handle unexpected inputs and errors. You must create and turn in your
own tests to ensure that your program works as expected. */
