/********************************************************************* 
** Program name: Lab 2
** Author: Elaine Alasagas
** Date: 1/20/2018
** Description: CS162_400_WINTER2019 - Output letters creates and output
	file and writes in the counted letters from the file read from 
	count_letters.cpp
*********************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include "output_letters.hpp"
using namespace std;

void output_letters(ofstream &, int*array)
{
	string fileName;	//Filename to output

	std::cout << "What file would you like to output to? ";
	std::cin >> fileName;

	//Create file and then write to file
	ofstream ioFile(fileName.c_str(), ios::out);

	char letters[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
						'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
						'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
						'y', 'z' };

	//Input validation
	if (!ioFile)
	{
		std::cout << "File does not exist - default file name Output.txt";
		fileName = "Output.txt";
	}
	//line break
	std::cout << std::endl;

	//print to ioFile
	for (int i = 0; i < 26; i++)
	{
		ioFile << "Letters " << letters[i] << " count: " << array[i] << std::endl;
		std::cout << "Letters " << letters[i] << " count: " << array[i] << std::endl;
	}

}