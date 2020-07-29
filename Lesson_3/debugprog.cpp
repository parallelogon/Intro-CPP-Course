/*Fix the errors and get an error free compilation and execution.*/

#include <iostream> //changed input.txt to iostreem
#include <cmath> //included cmath for power 

int main() //change void main to int main
{
    int coeff1, coeff2, constant; /* fixed variable names coEff1 coEff2 -> coeff1 coeff2 */
    int exp1, exp2;
    int y;
    int x;
    //Calculate the value of y for a user defined three term polynomial
    //Get the coefficients, exponents, and the constants
    std::cout << "What is the first coefficient?"; //change direction of brackets (>> to << )
    std::cin >> coeff1; // change direction of << to >>
    std::cout<<coeff1<<"\n"; // fixed quotes around \n
    std::cout<<"What is the exponent of the first term?";
    std::cin>>exp1; // changed Exp1 to exp1 to match declaration
    std::cout<<exp1<<"\n"; //again changed var name for declaration
    std::cout<<"What is the second coefficient?";
    std::cin>>coeff2;
    std::cout<<coeff2<<"\n"; //changed colon to semicolon
    std::cout<<"What is the exponent of the second term?";
    std::cin>>exp2;
    std::cout<<exp2<<"\n"; //added backslash
    std::cout<<"What is the constant?";
    std::cin>>constant; //removed a > 
    std::cout<<constant<<"\n";
    //Print the complete equation
    std::cout<<"The polynomial we are solving is:\n";
    std::cout<<"\t"<<coeff1<<"*x^" << exp1 <<" + "<<coeff2<<"*x^"<<exp2<<"+ "<<constant; //changed string to include exp1
    std::cout<<"\nWhat is the value of x?";
    std::cin>>x;
    std::cout<<x<<"\n";
    //Solve the equation with the given x
    y = coeff1*pow(x,exp1) + coeff2*pow(x,exp2) + constant;    //Exp1 to exp1 and power to pow also added constant
    std::cout<<"y = "<<coeff1<<"*"<<x<<"^"<<exp1<<" + "<<coeff2<<"*"<<x<<"^"<<exp2<<" + "<<constant<<" = "<<y<<std::endl; //changed quotes around +
    return 0;
}
