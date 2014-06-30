#ifndef DEVS_LITE_MODEL_HPP_
#	define DEVS_LITE_MODEL_HPP_

#	include <iostream>
#	include <cfloat>

namespace DEVSLite
{
	/*!
	 * 	\var	Infinity
	 * 	\brief	Defines a double number for infinity representation.
	 */
	static const double Infinity = DBL_MAX;
	
	/*!
	 * 	\class	Model
	 * 	\brief	Represents a DEVS-lite atomic model
	 */
	class Model
	{	
		public:
			Model()
				: 	phase(-1),
					sigma(0.)
			{}
			
			virtual ~Model()	{}
			
			/*!
			 * 	\fn 	virtual void initialize() = 0;
			 * 	\brief	Initializes atomic model, before simulation.
			 */
			virtual void		initialize() = 0;
			
			/*!
			 * 	\fn		virtual void deltint(double inE) = 0;
			 * 	\brief	Internal transition function
			 * 	\param	inE		Time duration for the transition
			 */
			virtual void		deltint(double 	inE) = 0;
			
			/*!
			 * 	\fn		virtual void deltext(double	inE, void* inMsg) = 0;
			 * 	\brief	External transition function
			 * 	\param	inE		Time duration for the transition
			 * 	\param	inMsg	Message for the model
			 */
			virtual void		deltext(double 	inE,
										void* 	inMsg) = 0;
															
			/*!
			 * 	\fn		virtual void deltcon(double	inE, void* inMsg) = 0;
			 * 	\brief	Confluent transition function
			 * 	\param	inE		Time duration for the transition
			 * 	\param	inMsg	Message for the model
			 */
			virtual void		deltcon(double 	inE,
										void*	inMsg) = 0;
										
			/*!
			 * 	\fn		virtual void* out() const = 0;
			 * 	\brief	Output function
			 * 	\return	Output result
			 */
			virtual void*		out() const = 0;
			
			
			bool		phaseIs(int		inPhase) const
			{	
				return	(phase == inPhase);
			}
			
			/*!
			 * 	\fn   	void holdIn(int inPhase, double inSigma)
			 * 	\brief	Asks model to stay in a state for a defined
			 * 			amount of time.
			 * 	\param	inPhase	State
			 * 	\param	inSigma	Time the model will stay in the state
			 */
			void		holdIn(	int 	inPhase,
								double 	inSigma)
			{
				phase = inPhase;
				sigma = inSigma;
			}

			double		ta()		const	{	return sigma;	}
			int			getPhase()	const	{	return phase;	}
			double		getSigma()	const	{	return sigma;	}
			std::string	toString() 	const;
			
		protected:
			/*!
			 * 	\var	phase
			 * 	\brief	Defines a state for the atomic model
			 */
			int		phase;
			
			/*!
			 * 	\var	sigma
			 * 	\brief	Defines the amount of time current model
			 * 			will stay in the state defined by phase.
			 */
			double	sigma;
	};
}



#endif
