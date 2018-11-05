#ifndef __PARENT__
#define __PARENT__

class Parent {
	
	protected:
		std::string message;
		
	public:
		Parent(const std::string& message): message(message) {}
		
		virtual std::string toString() {
			return "Parent: " + message;
		}
	
	
};

#endif
