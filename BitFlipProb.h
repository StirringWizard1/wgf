#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Individual.h"
#include "Mutator.h"

class BitFlipProb : public Mutator
{
protected:
private:	
	double p;
public:
	BitFlipProb(double pnob);
	Individual * Mutate(Individual * In, int k);
};
#endif

