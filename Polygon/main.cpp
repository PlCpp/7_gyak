#include "Polygon.h"
#include "Square.h"
#include <iostream>
#include <vector>

void calculate(const Polygon& polygon) {
	polygon.area();
}

int main() {
	Square s(4);
	//Polygon p; //fordítási hiba
	
	calculate(s);
	
	//std::vector<Polygon> v; // fordítási hiba
	std::vector<Polygon*> v;
	v.push_back(new Square(3.4));
	v[0]->area();
	return 0;
}
