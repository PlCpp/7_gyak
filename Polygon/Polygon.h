#ifndef __POLYGON__
#define __POLYGON__

class Polygon {
	
	private:
		int vertex;
	
	protected:
		double edge;
	
	public:
		Polygon(const int& vertex, const double& edge):
			vertex(vertex), edge(edge) {}
			
		virtual double area() const = 0;
	
};

#endif
