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
    int ID; /*! unique id */


	public:

		double infinity;
		
		Neuron(void);
		Neuron(int);

		void toString();

		Neuron& operator=(const Neuron & unNeuron);

		void setState(double State);
		double getState();

		void setStatePlus(double StatePlus);
		double getStatePlus();

		void setInput(double Input);
		double getInput();

		void setThreshold(double Threshold);
		double getThreshold();

		void setLoss(double Loss);
		double getLoss();

		void setAxon(int Axon);
		int getAxon();

		int getID();
		

};

#endif


