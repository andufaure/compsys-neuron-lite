#include "Model.hpp"
#include <cstdlib>
#include <sstream>

namespace DEVSLite
{
	//const double Infinity = DBL_MAX;
	
	std::string	 Model::toString() const
	{
		std::stringstream	sstream;
		
		sstream << "Model 0x" << std::hex << (unsigned long)((void*)this)
				<< " sigma:" << this->sigma
				<< " phase:" << this->phase;
				
		return (sstream.str());
	}
}

