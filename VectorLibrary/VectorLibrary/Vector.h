#pragma once
#include <vector>

using namespace std;

namespace Victor {
	class Vector {
		std::vector<double> components;
	public:
		Vector(initializer_list<double> values);
		void setValues(double value);
		void voidSetValueAt();
		void print();
	};
}
