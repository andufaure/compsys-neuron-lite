#include "Neuron.h"

int main(int argc, char *argv[])
{
	Neuron * n1 = new Neuron();
	Neuron * n2 = new Neuron(5);

	n1->setState(0);
	n1->setStatePlus(1);
	n1->setInput(2);
	n1->setThreshold(3);
	n1->setLoss(4);
	n1->setAxon(5);

	cout << n1->toString();

	cout << n2->toString();

	*n2 = *n1;

	cout << n2->toString();

    return 0;
}
