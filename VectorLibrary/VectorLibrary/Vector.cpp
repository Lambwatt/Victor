#include "pch.h"
#include "vector.h"
//#include <vector>
#include <iostream>
using namespace Victor;
using namespace std;

Vector::Vector(initializer_list<double> values) : components(values) {
	//std::cout << components.size() <<"/"<< components.capacity() << endl;
}


