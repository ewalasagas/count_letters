/********************************************************************* 
** Program name: Lab 2
** Author: Elaine Alasagas
** Date: 1/20/2018
** Description: CS162_400_WINTER2019 - Count_letters function that counts
	the number of letters in file_fun.txt.  Exits the program if it does 
	not exist.
*********************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include "count_letters.hpp"
using namespace std;

void count_letters(ifstream &, int*array)
{
	ifstream file;
	string fileName;

	std::cout << "What file would you like to open? ";
	std::cin >> fileName;

	//Open file
	file.open(fileName.c_str(), ios::in);

	//Validation file exists, if not end program
	if (!file)
	{
		cout << "File open error!" << std::endl;
		std::terminate();
	}

	char letters[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
						'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
						'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
						'y', 'z' };
	char ch;
	ch = file.get();

	while(ch != EOF)
	{	std::cout << ch;
		for(int i=0; i < 26; i++)
		{
			if(ch == letters[i] || ch == toupper(letters[i]))
			{
				array[i]++;
			}
		}
		ch = file.get();
	}
	//line break
	std::cout << std::endl;

	file.close();
}