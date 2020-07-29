/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include<iostream>


int main()
{
    float total = 0;
    int n;

    for (int i = 0; i < 5; i++)
    {
        std::cout<<"Input a number: \n";
        std::cin>>n;
        total += n;
    }

    std::cout<<"The total is: "<<total<<"\n";
    std::cout<<"The average is: "<<total/5<<"\n";

    return 0;
}

