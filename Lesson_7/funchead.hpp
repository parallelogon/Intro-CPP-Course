#include<iostream>

void printProduct(int m1, int m2, int product); //while extraneous here, best practice is to declare functions at beginning of header file


void printProduct(int m1, int m2, int product)
{
	std::cout << m1 << " * " << m2 << " = " << product << std::endl;
}
