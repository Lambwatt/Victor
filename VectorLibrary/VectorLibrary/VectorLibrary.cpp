// VectorLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector> 
#include "Vector.h"

using namespace std;
using namespace Victor;

int main()
{
    std::cout << "Hello World!\n";

	Vector vecA({1.0, 2.0});
	cout << "vecA: "<<vecA.print()<<endl;

	Vector vecB({ 1.0, 1.0 });
	Vector vecC = vecA + vecB;
	cout << "vecA + " << vecB.print() << " = " << vecC.print() << endl;

	Vector vecD = vecA * 2;
	Vector vecE = 2.0 * vecA;	
	cout << vecD.print() << " = " << vecE.print() << endl;

	Vector lrg({ 1,2,3,4,5,6,7,8 });
	cout << lrg.print() << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
