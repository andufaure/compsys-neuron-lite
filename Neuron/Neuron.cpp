#include "Neuron.h"

Neuron::Neuron(void)
{
	double infinity = numeric_limits<double>::infinity();
	state = 0;
    statePlus = 0;
    input = 0;
    threshold = 0;
    loss = 0;
    axon = 0;
    ID = -1;
}

Neuron::Neuron(int id)
{
	double infinity = numeric_limits<double>::infinity();
	state = 0;
    statePlus = 0;
    input = 0;
    threshold = 0;
    loss = 0;
    axon = 0;
    ID = id;
}

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

void Neuron::toString()
{
	cout << "State : " << this->state << "\r\n";
	cout << "StatePLus : " << this->statePlus << "\r\n";
	cout << "Input : " << this->input << "\r\n";
	cout << "Threshold : " << this->threshold << "\r\n";
	cout << "Loss : " << this->loss << "\r\n";
	cout << "Axon : " << this->axon << "\r\n";
	cout << "ID : " << this->ID << "\r\n";
}

void Neuron::setState(double State)
{
	this->state = State;
}

double Neuron::getState()
{
	return state;
}


void Neuron::setStatePlus(double StatePlus)
{
	this->statePlus = StatePlus;
}

double Neuron::getStatePlus()
{
	return statePlus;
}


void Neuron::setInput(double Input)
{
	this->input = Input;
}

double Neuron::getInput()
{
	return input;
}


void Neuron::setThreshold(double Threshold)
{
	this->threshold = Threshold;
}

double Neuron::getThreshold()
{
	return threshold;
}


void Neuron::setLoss(double Loss)
{
	this->loss = Loss;
}

double Neuron::getLoss()
{
	return loss;
}


void Neuron::setAxon(int Axon)
{
	this->axon = Axon;
}

int Neuron::getAxon()
{
	return axon;
}


int Neuron::getID()
{
	return ID;
}

