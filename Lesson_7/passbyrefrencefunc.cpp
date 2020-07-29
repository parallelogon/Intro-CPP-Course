/*Goal: Learn to pass variables by reference. 
**Once we learn this, we can modify variables in functions,
**and the change will be available outside the scope of the 
**modification.
*/

/*As an extra bit, we can also get one function to return two variables
as opposed to one by passing references
*/

#include<iostream>

void increment(int &input); //Note the addition of '&'
void meanminner(int a, int b, float &meanOut, float &minOut);

int main()
{
    int a = 34;
    int b = 48;
    float mean, min;

    std::cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";

    meanminner(a,b,mean,min);
    std::cout<<"The average of a and b is " << mean << "\n";
    std::cout<<"The delta of a and b is " << min << "\n";
    return 0;
}

void increment(int &input)//Note the addition of '&'
{
    input++; //**Note the LACK OF THE addition of '&'**
    std::cout<<"In the function call a = "<<input<<"\n";
}

void meanminner(int a, int b, float &meanOut, float &minOut)
{
    float aa = a, bb = b;
    meanOut = (aa + bb)/2;
    minOut = (aa-bb)/2;
}
