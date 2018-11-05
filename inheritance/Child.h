#ifndef __CHILD__
#define __CHILD__

#include "Parent.h"

class Child: public Parent {
	
	public:
		Child(): Parent("korte") {}
		
		std::string toString() {
			return "Child: " + message;
		}
	
};

#endif
