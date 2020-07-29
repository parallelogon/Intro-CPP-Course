/*The header file for passbyreferencequiz.cpp*/

#include<iostream>

void calculate(float input1, float input2, char operation, float &resultOut);
void printEquation(float input1, float input2, char operation, float result);

void calculate(float input1, float input2, char operation, float &resultOut)
{
	switch(operation)
	{
		case '+':
			resultOut = input1 + input2;
			break;
		case '-':
			resultOut = input1 - input2;
			break;
		case '*':
			resultOut = input1*input2;
			break;
		case '/':
			resultOut = input1/input2;
			break;
		default:
			std::cout << "Invalid Operation\n";
	}
}

void printEquation(float input1, float input2, char operation, float result)
{
	std::cout << input1 << operation << input2 << " = " << result << "\n";
}
