#include "Neuron.h"
#include "WeightedSimpleNeuron.h"

int main(int argc, char *argv[])
{
    Neuron * n1 = new Neuron();
    Neuron * n2 = new Neuron(5);

    WeightedSimpleNeuron * WSN1 = new WeightedSimpleNeuron();

    WeightedSimpleNeuron * WSN2 = new WeightedSimpleNeuron(5);

    n1->setState(0);
    n1->setStatePlus(1);
    n1->setInput(2);
    n1->setThreshold(3);
    n1->setLoss(4);
    n1->setAxon(5);

    //cout << n2->toString();

    *n2 = *n1;
	
    cout << WSN1->toString();

    cout << WSN2->toString();

    return 0;
}
