#pragma once
#include <vector>

using namespace std;

namespace Victor {
	class Vector {
		std::vector<double> components;
	public:
		Vector(initializer_list<double> values);
		Vector(int dimensions);

		Vector operator+(const Vector& a);

		double& operator[](int index);
		void setValueAt(int index, double value);
		void print();
	};
}
