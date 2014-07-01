#include "WeightedSimpleNeuron.h"


WeightedSimpleNeuron::WeightedSimpleNeuron(int id)
    : Neuron(id), weight(0.), alpha(0.), r(0.), inputPlus(0.), firingCounter(0), axonPlus(0)
{}


WeightedSimpleNeuron::~WeightedSimpleNeuron()
{}

string WeightedSimpleNeuron::toString() const
{
    std::stringstream sstream;

    sstream << Neuron::toString()
            << "Weight : " << this->weight << endl
            << "Alpha : " << this->alpha << endl
            << "R : " << this->r << endl
            << "InputPlus : " << this->inputPlus << endl
            << "FiringCounter : " << this->firingCounter << endl
            << "AxonPlus : " << this->axonPlus << endl;
				
    return (sstream.str());
}

void WeightedSimpleNeuron::initialize()
{
    cout << "WeightedSimpleNeuron::initialize" << endl;
}

void WeightedSimpleNeuron::deltint(double inE)
{
    cout << "WeightedSimpleNeuron::deltint" << endl;
}

void WeightedSimpleNeuron::deltext(double inE, void* inMsg)
{
    cout << "WeightedSimpleNeuron::deltext" << endl;
}

void WeightedSimpleNeuron::deltcon(double inE, void* inMsg)
{
    cout << "WeightedSimpleNeuron::deltcon" << endl;
}

void* WeightedSimpleNeuron::out() const
{
    cout << "WeightedSimpleNeuron::out" << endl;
    return 0;
}