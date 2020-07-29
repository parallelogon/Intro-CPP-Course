/*Goal: practice returning values from functions*/

#include<iostream>


float add(float m1, float m2);
float sub(float m1, float m2);
float mult(float m1, float m2);
float div(float m1, float m2);
float nested(float m1, float m2); //A nested function that calls another function
float factorial(float m1); //A recursive function to compute factorials

int main()
{
    float m1 = 4.0;
    float m2 = 3.5;
    float answer;
     
    answer = add(m1, m2);
    std::cout<<m1<<"+"<<m2<<" = "<<answer<<"\n";
    
    std::cout<<m1<<"-"<<m2<<" = "<<sub(m1,m2)<<"\n";
    std::cout<<m1<<"*"<<m2<<" = "<<mult(m1,m2)<<"\n";
    std::cout<<m1<<"/"<<m2<<" = "<<div(m1,m2)<<"\n";
    std::cout<<m1<<"*"<<m2<<"+"<<m1<<"/"<<m2<<" = "<<nested(m1,m2)<<"\n";
    std::cout<<m1<<"!"<<" = "<<factorial(m1)<<"\n";
    return 0;
}

float add(float m1, float m2)
{
    return (m1 + m2);
}

float sub(float m1, float m2)
{
    return (m1 - m2);
}

float mult(float m1, float m2)
{
    return (m1 * m2);
}

float div(float m1, float m2)
{
    return (m1 / m2);
}


float nested(float m1, float m2)
{
	return add(mult(m1,m2),div(m1,m2));
}



float factorial(float m1)
{
	if(m1 == 1)
		return 1;
	else
		return m1*factorial(m1-1);
}

