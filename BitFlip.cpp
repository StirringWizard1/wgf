#include "BitFLip.h"



Individual * BitFlip::Mutate(Individual *In, int k)
{
	
	In -> flipBit(k%(In->getLength())); 
	return In;

} 