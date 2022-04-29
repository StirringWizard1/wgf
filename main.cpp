#include <iostream>
#include "Individual.h"
#include <string>
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
 
 Individual * execute(Individual * indPtr, Mutator * mPtr, int k)
{
	return mPtr->Mutate(indPtr, k);
}

int main (int argc, char *argv[])
{
	// deccleration 
	Individual *In1;
	Individual *In2;
	Individual *bb1;
	Individual *bb2;
	
	 
	
	std::string binary1;
	int num1;
	std::string binary2;
	int num2;

	//input
	std::cin>> binary1 >> num1 >> binary2 >> num2;

	//individuals	
	In1=new Individual(binary1);
	In2=new Individual(binary2);
	bb1=new Individual(In1->getLength());
	bb2=new Individual(In2->getLength());

	//code 

	
	Mutator * bittyflippy=new BitFlip();
	Mutator * ranga=new Rearrange();
	
	bb1=execute(In1, bittyflippy, num1);
	bb2=execute(In2, ranga, num2);



	std::cout << bb1->getString() << " " << bb2->getString() << " " << bb2->getMaxOnes() << std::endl;





	return 0; 
}
