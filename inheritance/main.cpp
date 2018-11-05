#include <iostream>
#include "Parent.h"
#include "Child.h"

void printParent(Parent& p) {
	std::cout << p.toString() << std::endl;
}

int main() {
	Parent p("alma");
	std::cout << p.toString() << std::endl;
	
	Child c;
	std::cout << c.toString() << std::endl;
	printParent(c);
	
	Parent* c2 = new Child();
	Parent* p2 = new Parent("valami");
	std::cout << c2->toString();
	
	return 0;
}
