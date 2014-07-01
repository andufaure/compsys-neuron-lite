#ifndef _NEURON_HPP
#define _NEURON_HPP

/*!
 * \file Neuron.hpp
 * \brief File for the class representing the basic neuron
 * \author Vincent ALINGRIN
 * \version 0.1
 */

#include <limits>
#include <cmath>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

 /*! \class Neuron
   * \brief class representing the basic neuron
   */
class Neuron
{
    protected:

    double state; /*! current amount of energy */
    double statePlus; /*! temporary variable to mesure the delta between two iteration */
    double input; /*! temporary variable which sum the input */
    double threshold; /*! amount of energy require to perform a spike */
    double loss; /*! amount of energy lost */
    int axon; /*! binary variable wich indicate if state >= threshold */
    int id; /*! unique ID */


    public:

        double infinity;
		
        Neuron(int id = -1);

        virtual ~Neuron();

        virtual string toString() const;

        Neuron& operator=(const Neuron & unNeuron);

        void setState(double State) {this->state = State;}
        double getState() const {return state;}

        void setStatePlus(double StatePlus) {this->statePlus = StatePlus;}
        double getStatePlus() const {return statePlus;}

        void setInput(double Input) {this->input = Input;}
        double getInput() const {return input;}

        void setThreshold(double Threshold) {this->threshold = Threshold;}
        double getThreshold() const {return threshold;}

        void setLoss(double Loss) {this->loss = Loss;}
        double getLoss() const {return loss;}

        void setAxon(int Axon) {this->axon = Axon;}
        int getAxon() const {return axon;}

        int getId() const {return id;}
};

#endif


