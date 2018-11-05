#ifndef __SQUARE__
#define __SQUARE__

#include "Polygon.h"

class Square: public Polygon {
	
	public:
		Square(const double& edge): Polygon(4, edge) {}
		
		double area() const {
			return edge * edge;
		}
};

#endif
