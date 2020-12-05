#include "pch.h"
#include "vector.h"
#include <iostream>
#include <array>

using namespace Victor;

#define INVALID_INDEX_ERR "Index not in vector range"
#define DIMENSION_MATCH_ERR "Vector dimensions do not match"
#define VEC_VAL_FORMAT "%.2f"

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

Vector Vector::operator*(double scalar) const {
	int size = components.size();
	Vector res(size);
	for (int i = 0; i < size; i++) {
		res.components[i] = components[i] * scalar;
	}
	return res;
}

Vector Victor::operator*(double scalar, const Vector& vector) {
	return vector * scalar;
}

Vector Victor::operator*(int scalar, const Vector& vector) {
	return vector * scalar;
}


double& Vector::operator[](int index) {
	return components[index];
}

std::string Vector::print() {
	int size = components.size(), i = 0;
	std::string res("[");
	char buffer[11];
	if (size > 0) {
		sprintf_s(buffer, VEC_VAL_FORMAT, components[i++]);
		res += buffer;
		for (; i < size; i++) {
			res += ", ";
			sprintf_s(buffer, VEC_VAL_FORMAT, components[i]);
			res += buffer;
		}
	}
	res+= "]";
	return res;
}

void Vector::setValueAt(int index, double value) {
	if (index >= 0 && index < components.size())
		components[index] = value;
	else
		throw out_of_range(INVALID_INDEX_ERR);

}
