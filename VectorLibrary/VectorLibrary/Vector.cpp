#include "pch.h"
#include "vector.h"
#include <iostream>
#include <array>

using namespace Victor;

#define INVALID_INDEX_ERR "Index not in vector range"
#define DIMENSION_MATCH_ERR "Vector dimensions do not match"

Vector::Vector(initializer_list<double> values) : components(values) {
	//std::cout << components.size() <<"/"<< components.capacity() << endl;
}

Vector::Vector(int dimensions) : components(dimensions, 0) {}

Vector Vector::operator+(const Vector& other) {
	int size = components.size();
	if (size == other.components.size()) {
		Vector res(size);
		for (int i = 0; i < size; i++) {
			res.components[i] = components[i] + other.components[i];
		}
		return res;
	}
	else
		throw length_error(DIMENSION_MATCH_ERR);
}

double& Vector::operator[](int index) {
	return components[index];
}

void Vector::print() {
	int size = components.size(), i = 0;
	cout << "[";
	if (size > 0) {
		cout << components[i++];
		for (; i < size; i++) {
			cout << ", " << components[i];
		}
	}
	cout << "]";
}

void Vector::setValueAt(int index, double value) {
	if (index >= 0 && index < components.size())
		components[index] = value;
	else
		throw out_of_range(INVALID_INDEX_ERR);

}
