#include "Individual.h"
#include<iostream>
#include <string>
#include <cstring>


Individual::Individual(int length)
{
	binaryString = "";
	for (int i = 0; i < length; i++)
	{
		binaryString = binaryString + "0";
	}
}


Individual::Individual(std::string BinStrin)
{
	binaryString = BinStrin; 
}


std::string Individual::getString()
{
	return binaryString; 
}

int Individual::getBit (int pos)
{
	if( pos < 0 || getLength() < pos)
	{
		return -1;
	}
	else 
	{
		return binaryString[pos-1] - 48; 
	}
}

void Individual::flipBit(int pos)
{

	if (binaryString[pos-1] == '0')
	{
		binaryString[pos-1] = '1';
	}
	else 
	{
		binaryString[pos-1] = '0';
	}
}


	int Individual::getMaxOnes()
	{
		int counter = 0;
		int result = 0; 

		for (int i = 0; i < getLength(); i++ )
		{
			if (binaryString[i] == '0')
			{
				counter = 0;
			}
			else
			{
				counter = counter + 1; 
			}

			if (counter > result)
			{
				result = counter; 
			}
		}
		return result; 
	}

	 int Individual::getLength()
	{
		return binaryString.length();
	}
