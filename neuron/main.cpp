
#include "NeuronNetwork.h"

int main(int argc, char *argv[])
{
    Neuron * n1 = new Neuron();
    Neuron * n2 = new Neuron(5);

    NeuronNetwork * nn1 = new NeuronNetwork(2);

    NeuronNetwork * nn2 = new NeuronNetwork(5);

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

    cout << "NB Neurons 1 : " << nn1->getNbNeuron() << endl;

    cout << "NB Neurons 2 : " << nn2->getNbNeuron() << endl;
	
    /*cout << WMN1->toString();

    cout << WMN2->toString();*/

    cout << endl << "Liste des neurons 1 : " << endl;

    for (int i = 0 ; i < nn1->getNbNeuron() ; i++)
    {
        cout << nn1->getNeurons()[i]->toString() << endl;
    }

    cout << endl << "Liste des neurons 2 : " << endl;

    for (int i = 0 ; i < nn2->getNbNeuron() ; i++)
    {
        cout << nn2->getNeurons()[i]->toString() << endl;
    }

    return 0;
}
