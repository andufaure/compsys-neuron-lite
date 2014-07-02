#ifndef _NEURON_NETWORK_HPP
#define _NEURON_NETWORK_HPP

/*!
 * \file NeuronNetwork.h
 * \brief File for the class representing the network of neurons
 * \author Vincent ALINGRIN
 * \version 0.1
 */

#include "WeightedMultipleNeuron.h"

 /*! \class NeuronNetwork
   * \brief class representing the network of neurons
   */
class NeuronNetwork
{
    protected :

         const unsigned nbNeuron; /*! total number of neurons */

         Neuron ** neurons; /*! array of neurons, size nbNeuron */

         int ** matAdjacent; /*! matrix of interconnection, if neuron 0 connected to neuron 2 : matAdjacent[0,2] = 1, else 0 */


    public:

        NeuronNetwork(unsigned nbNeuron = 0);
        ~NeuronNetwork(void);

        Neuron ** getNeurons() {return neurons;}

        int getNbNeuron() const {return nbNeuron;}

};

#endif

