#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H



#include <string>

class Individual 
{
protected: 
private: 
	std::string binaryString; 
public: 


	Individual(int length);
	Individual(std::string BinStrin);

	std::string getString();
	int getBit (int pos);
	void flipBit(int pos);
	int getMaxOnes();
	int getLength(); 


};
#endif 
