#include<iostream>

//Our generic function
template <typename T>  //tell the compiler we are using a template
//use addresses of the variables in the delcaration of the function

T sumTwo(T  a,T  b)
{
    //Note  that the sum is a variable type T. This means whatever 
    //variable type is passed in
   //will become the variable type for sum.
    T  sum;
    sum = a + b;
    return sum;
}


//The main function
int main()
{
    int a = 90;
    int b = 1; 

    char c = 'a';
    char d = 'b';

    std::cout<<a <<" + "<<b<<" = "<< sumTwo(a,b) << "\n";
    std::cout<< c << " + " << d << " = " << sumTwo(c,d) << "\n";
    return 0;
}
