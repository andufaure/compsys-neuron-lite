#include "Neuron.h"

Neuron::Neuron(int id)
    : id(id), state(0.), statePlus(0.), input(0.), threshold(0.), loss(0.), axon(0), infinity(numeric_limits<double>::infinity())
{}

Neuron::~Neuron()
{}

Neuron &Neuron::operator=(const Neuron & unNeuron)
{
    this->state = unNeuron.state;
    this->statePlus = unNeuron.statePlus;
    this->input = unNeuron.input;
    this->threshold = unNeuron.threshold;
    this->loss = unNeuron.loss;
    this->axon = unNeuron.axon;
    return (*this);
}

string Neuron::toString() const
{
    std::stringstream sstream;

    sstream << endl << "Values of this neuron : " << endl
            << "State : " << this->state << endl
            << "StatePLus : " << this->statePlus << endl
            << "Input : " << this->input << endl
            << "Threshold : " << this->threshold << endl
            << "Loss : " << this->loss << endl
            << "Axon : " << this->axon << endl
            << "ID : " << this->id << endl;
				
    return (sstream.str());
}

void Neuron::initialize()
{
    cout << "Neuron::initialize" << endl;
}

void Neuron::deltint(double inE)
{
    cout << "Neuron::deltint" << endl;
}

void Neuron::deltext(double inE, void* inMsg)
{
    cout << "Neuron::deltext" << endl;
}

void Neuron::deltcon(double inE, void* inMsg)
{
    cout << "Neuron::deltcon" << endl;
}

void* Neuron::out() const
{
    cout << "Neuron::out" << endl;
    return 0;
}