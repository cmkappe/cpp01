/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckappe <ckappe@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 14:26:11 by chiarakappe       #+#    #+#             */
/*   Updated: 2026/03/03 20:28:22 by ckappe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

// Replace all occurrences of s1 with s2 in content using find() and substr()
static std::string	replaceAll(const std::string &content,
	const std::string &s1, const std::string &s2)
{
	std::string		result;
	std::size_t		start = 0;
	std::size_t		pos;

	// Find each occurrence of s1 and replace it with s2
	pos = content.find(s1, start);
	while (pos != std::string::npos)
	{
		// Append everything from start to the found position
		result.append(content, start, pos - start);
		// Append the replacement string s2
		result += s2;
		// Move start to after the found occurrence
		start = pos + s1.length();
		// Find the next occurrence
		pos = content.find(s1, start);
	}
	// Append the remaining part of the string
	result.append(content, start, content.length() - start);
	return (result);
}

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::string	content;
	std::ifstream	inputFile;		// handles files as input for reading (instead of keyboard input)
	std::ofstream	outputFile;		// handles files as output for writing (instead of console output)

	// Check for correct number of arguments
	if (argc != 4)
		return (std::cerr << "Usage: " + std::string(argv[0]) + " <filename> <s1> <s2>"
			<< std::endl, 1);
	
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	// s1 cannot be empty (would cause infinite loop)
	if (s1.empty())
		return (std::cerr << "Error: s1 cannot be empty." << std::endl, 1);
	
	inputFile.open(filename.c_str()); // Open input file
	if (!inputFile.is_open())
		return (std::cerr << "Error: cannot open input file '" + filename + "'." << std::endl, 1);
	
	std::getline(inputFile, content, '\0'); // Read entire file content, even multi-line, into string
	inputFile.close();
	
	// Create output file with .replace extension
	outputFile.open((filename + ".replace").c_str());
	if (!outputFile.is_open())
		return (std::cerr << "Error: cannot create output file." << std::endl, 1);
	
	outputFile << replaceAll(content, s1, s2); // Write replaced content to output file
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
