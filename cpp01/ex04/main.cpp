/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/23 12:53:52 by lhoukes       #+#    #+#                 */
/*   Updated: 2023/03/23 13:36:03 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

/*
The program first checks if it has been passed the correct number of parameters, 
if not it displays usage information and exits. 
The filename, s1 and s2 are then extracted from the command line arguments.
The input file is then opened and checked for errors. 
The output file is created with the same name as the input file 
with ".replace" appended to it. It is also checked for errors.
The program then reads the input file line by line and replaces 
all occurrences of s1 with s2. The modified lines are written to the output file.
Finally, the input and output files are closed and a message 
is displayed indicating where the output has been written.
*/

int main(int argc, char* argv[]) {
	if (argc != 4) 
	{
		std::cout << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream inputFile(filename);

	if (!inputFile.is_open())
	{
		std::cout << "Error opening input file: " << filename << std::endl;
		return (1);
	}

	std::string outputFile = filename + ".replace";
	std::ofstream outputFileStream(outputFile);

	if (!outputFileStream.is_open())
	{
		std::cout << "Error opening output file: " << outputFile << std::endl;
		return 1;
	}

	std::string line;
	while (getline(inputFile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) 
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = pos + s2.length();
			pos = line.find(s1, pos);
		}
		outputFileStream << line << std::endl;
	}

	inputFile.close();
	outputFileStream.close();

	std::cout << "Output written to: " << outputFile << std::endl;
	return 0;
}
