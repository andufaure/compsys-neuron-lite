#include "NeuronNetwork.h"

NeuronNetwork::NeuronNetwork(unsigned nbNeuron)
    : nbNeuron(nbNeuron)
{
    int nbtotal = nbNeuron;

    try
    {
        this->neurons = new Neuron * [nbNeuron];
        this->matAdjacent = new int * [nbNeuron];

        for (int i = 0 ; i < nbtotal ; i++)
        {
            matAdjacent[i] = new int [nbNeuron];
        }
    }
    catch (bad_alloc&)
    {
        cerr << "Allocation error, may be out of memory" << endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 0 ; i < nbtotal ; i++)
    {
        neurons[i] = new Neuron(i);
    }

    for (int i = 0 ; i < nbtotal ; i++)
    {
        for (int j = 0 ; j < nbtotal ; j++)
        {
            matAdjacent[i][j] = 0;
        }
    }
}


NeuronNetwork::~NeuronNetwork(void)
{
    int nbtotal = this->nbNeuron;

    delete [] neurons;

    for (int i = 0 ; i < nbtotal ; i++)
    {
        delete [] matAdjacent[i];
    }

    delete [] matAdjacent;
}
