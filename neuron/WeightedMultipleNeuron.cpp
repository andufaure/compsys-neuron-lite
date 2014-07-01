#include "WeightedMultipleNeuron.h"


WeightedMultipleNeuron::WeightedMultipleNeuron(int id, unsigned weightSize)
    : WeightedSimpleNeuron(id), weightSize(weightSize)
{
    try
    {
        this->weights = new double [weightSize];
    }
    catch (bad_alloc&)
    {
        cerr << "Allocation error, may be out of memory" << endl;
        exit(EXIT_FAILURE);
    }
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