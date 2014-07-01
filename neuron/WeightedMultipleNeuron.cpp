#include "WeightedMultipleNeuron.h"


WeightedMultipleNeuron::WeightedMultipleNeuron(int id, unsigned int weightSize)
    : WeightedSimpleNeuron(id), weightSize(weightSize)
{
    this->weights = new double[weightSize];
}


WeightedMultipleNeuron::~WeightedMultipleNeuron()
{
    delete [] weights;
}

string WeightedMultipleNeuron::toString() const
{
    std::stringstream sstream;

    sstream << WeightedSimpleNeuron::toString()
            << "WeightSize : " << this->weightSize << endl;
				
    return (sstream.str());
}