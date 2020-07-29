/*What is wrong with this program?*/

#include<iostream>

void increment(int input);

int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"After the function call a = "<<a<<"\n"; //increment doesn't return a value and the variable a is not modified
    return 0;
}

void increment(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";    
}
