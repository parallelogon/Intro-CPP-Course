/*Goal: practice writing functions with parameters and return values.*/

#include"funcquizhead.hpp"

int main()
{
	int m1 = 3;
	int m2 = 5;

	int summation = sum(m1,m2);

	printEquation(m1, m2, summation, '+');
	return 0;
}
