#include "Rearrange.h"


Individual * Rearrange::Mutate(Individual *In, int k)
{
	std::string tes = In->getString();  
	int i = In->getLength();
	if (k == 1)
	{
		return In;
	}
	std::string sub = tes.substr(0,(k-1));
	std::string subby = tes.substr(k-1,i-1);

	std::string daboi = subby + sub;


		Individual *IN2 = new Individual(daboi);
		return IN2;  

} 

