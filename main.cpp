/********************************************************************* 
** Program name: Lab 2
** Author: Elaine Alasagas
** Date: 1/20/2018
** Description: CS162_400_WINTER2019 - Main program - reads text file
	"file_fun.txt" and counts the number of letters (even if it does
	not exist.)
*********************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include "count_letters.hpp"
#include "output_letters.hpp"
using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;
	int array1[26] = {0};
	count_letters(inFile, array1);
	output_letters(outFile, array1);
	return 0;
}
