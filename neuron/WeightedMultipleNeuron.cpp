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

void WeightedMultipleNeuron::initialize()
{
    cout << "WeightedMultipleNeuron::initialize" << endl;
}

void WeightedMultipleNeuron::deltint(double inE)
{
    cout << "WeightedMultipleNeuron::deltint" << endl;
}

void WeightedMultipleNeuron::deltext(double inE, void* inMsg)
{
    cout << "WeightedMultipleNeuron::deltext" << endl;
}

void WeightedMultipleNeuron::deltcon(double inE, void* inMsg)
{
    cout << "WeightedMultipleNeuron::deltcon" << endl;
}

void* WeightedMultipleNeuron::out() const
{
    cout << "WeightedMultipleNeuron::out" << endl;
    return 0;
}