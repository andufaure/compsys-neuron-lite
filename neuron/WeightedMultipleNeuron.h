#ifndef _WMNEURON_HPP
#define _WMNEURON_HPP

/*!
 * \file WeightedSimpleNeuron.hpp
 * \brief File for the class representing the multiple weighted neuron
 * \author Vincent ALINGRIN
 * \version 0.1
 */

#include "WeightedSimpleNeuron.h"

 /*! \class WeightedMultipleNeuron
   * \brief class representing the multiple weighted neuron
   */
class WeightedMultipleNeuron : public WeightedSimpleNeuron
{
    
    protected :

        double * weights; /*! table of weight. dimension : weightSize */

    public:

        const unsigned weightSize;

        WeightedMultipleNeuron(int id = -1, unsigned weightSize = 0);
        ~WeightedMultipleNeuron();

        string toString() const;

        virtual void initialize();
        virtual void deltint(double inE); 
        virtual void deltext(double inE, void* inMsg); 
        virtual void deltcon(double inE, void* inMsg); 
        virtual void* out() const; 

        double * getWeights() {return weights;}
        const double * getWeights() const {return weights;}

        int getWeightSize() const {return weightSize;}

};

#endif

