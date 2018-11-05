#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <istream>

struct Student {
	std::string name;
	std::string neptun;
	int age;
	
	Student(const std::string& name, const std::string& neptun, const int& age):
		name(name), neptun(neptun), age(age) {}
};

std::vector<Student> readFile(const std::string fileName) {
	std::ifstream file;
	std::vector<Student> students;
	file.open(fileName.c_str());
	
	if (file.fail()) {
		std::cout << "Can not open file!\n";
		return students;
	}
	
	std::string tmp;
	while(getline(file, tmp)) {
		std::stringstream line;
		line << tmp;
		
		std::string name;
		std::string neptun;
		int age;
		
		getline(line, name, ';');
		getline(line, neptun, ';');
		line >> age;
		
		students.push_back(Student(name, neptun, age));
	}
}

int main() {
	std::vector<Student> students = readFile("input.txt");
	for (int i = 0; i < students.size(); ++i) {
		std::cout << students[i].name << std::endl;
	}
	return 0;
}


