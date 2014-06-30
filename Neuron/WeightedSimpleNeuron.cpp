#include "WeightedSimpleNeuron.h"


WeightedSimpleNeuron::WeightedSimpleNeuron(int id)
	: Neuron(id), weight(0.), alpha(0.), r(0.), inputPlus(0.), firingCounter(0), axonPlus(0)
{}


WeightedSimpleNeuron::~WeightedSimpleNeuron(void)
{}

string	 WeightedSimpleNeuron::toString() const
{
		std::stringstream	sstream;

		sstream << Neuron::toString()
				<< "Weight : " << this->weight << endl
				<< "Alpha : " << this->alpha << endl
				<< "R : " << this->r << endl
				<< "InputPlus : " << this->inputPlus << endl
				<< "FiringCounter : " << this->firingCounter << endl
				<< "AxonPlus : " << this->axonPlus << endl << endl;
				
		return (sstream.str());
}