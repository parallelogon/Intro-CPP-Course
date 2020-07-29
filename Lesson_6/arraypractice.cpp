/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>
#include <algorithm>

int main()
{
    int userInput[40];
    for(int i = 0; i <=40; i++)
    {
        scanf("%d",&userInput[i]);
    }
    
    for(int i = 0; i <=40; i++)
    {
        printf("%d ",userInput[i]);
    }    
    
    printf("\n");
    
    for(int i = 40; i >=0; i--)
    {
        printf("%d ",userInput[i]);
    }
    
    printf("\n");

    /* This loop takes the largest element and places it all the way at the end, then the second largest, etc. 
	Until all elements are placed appropriately */
    for(int i = 0; i < 40; i++)
    {
         for(int j = 0; j < 39 - i; j++)
             {
                 if(userInput[j] > userInput[j + 1])
                 {
                     int temp;
                     temp=userInput[j];
                     userInput[j]=userInput[j + 1];
                     userInput[j + 1]=temp;
                 }
             }
     }    
    for(int i = 0; i <=40; i++)
    {
        printf("%d ",userInput[i]);
    }


    std::cout << "\n";
    

    return 0;
}
