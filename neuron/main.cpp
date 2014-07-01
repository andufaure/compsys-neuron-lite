//#include "Neuron.h"
//#include "WeightedSimpleNeuron.h"
#include "WeightedMultipleNeuron.h"

int main(int argc, char *argv[])
{
    Neuron * n1 = new Neuron();
    Neuron * n2 = new Neuron(5);

    WeightedMultipleNeuron * WMN1 = new WeightedMultipleNeuron();

    WeightedMultipleNeuron * WMN2 = new WeightedMultipleNeuron(5, 3);

    n1->setState(0);
    n1->setStatePlus(1);
    n1->setInput(2);
    n1->setThreshold(3);
    n1->setLoss(4);
    n1->setAxon(5);

    //cout << n2->toString();

    n2 = n1;
	
    cout << WMN1->toString();

    cout << WMN2->toString();

    return 0;
}
