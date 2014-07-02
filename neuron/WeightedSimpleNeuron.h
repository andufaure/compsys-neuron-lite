#ifndef _WSNEURON_HPP
#define _WSNEURON_HPP

/*!
 * \file WeightedSimpleNeuron.h
 * \brief File for the class representing the basic weighted neuron
 * \author Vincent ALINGRIN
 * \version 0.1
 */

#include "Neuron.h"

 /*! \class WeightedSimpleNeuron
   * \brief class representing the basic weighted neuron
   */
class WeightedSimpleNeuron : public Neuron
{
    protected :

    double weight; /*! coeff constant on the input of energy */
    double alpha; /*! constant for calcul of update of amount of energy */
    double r; /*! constant for calcul of current amount of energy */
    double inputPlus; /*! temporary intern variable */
    int firingCounter; /*! counter of nb of spike since the neuron exist */
    int axonPlus; /*! temporary intern variable */

    public:

        WeightedSimpleNeuron(int id = -1);
        virtual ~WeightedSimpleNeuron();

        virtual string toString() const;

        virtual void initialize();
        virtual void deltint(double inE); 
        virtual void deltext(double inE, void* inMsg); 
        virtual void deltcon(double inE, void* inMsg); 
        virtual void* out() const; 

        void setWeight(double weight) {this->weight = weight;}
        double getWeight() const {return weight;}

        void setAlpha(double alpha) {this->alpha = alpha;}
        double getAlpha() const {return alpha;}

        void setR(double r) {this->r = r;}
        double getR() const {return r;}

        void setInputPlus(double inputPlus) {this->inputPlus = inputPlus;}
        double getInputPlus() const {return inputPlus;}

        void setFiringCounter(int firingCounter) {this->firingCounter = firingCounter;}
        int getFiringCounter() const {return firingCounter;}

        void setAxonPlus(int axonPlus) {this->axonPlus = axonPlus;}
        int getAxonPlus() const {return axonPlus;}
};

#endif

