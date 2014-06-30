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

std::string	 Neuron::toString() const
{
		std::stringstream	sstream;
		
		sstream << "State : " << this->state << "\r\n"
				<< "StatePLus : " << this->statePlus << "\r\n"
				<< "Input : " << this->input << "\r\n"
				<< "Threshold : " << this->threshold << "\r\n"
				<< "Loss : " << this->loss << "\r\n"
				<< "Axon : " << this->axon << "\r\n"
				<< "ID : " << this->id << "\r\n";
				
		return (sstream.str());
}