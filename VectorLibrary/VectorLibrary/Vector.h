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
		Vector operator*(double scalar) const;
		

		double& operator[](int index);
		void setValueAt(int index, double value);
		void print();
	};

	Vector operator*(int scalar, const Vector& vector);
	Vector operator*(double scalar, const Vector& vector);
}
