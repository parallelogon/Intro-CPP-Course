/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>
#include<stdio.h>
int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    int arr[4][4];
    
    std::cout << "Enter 16 numbers for the 4x4 matrix: ";
    for(int i = 0; i <4;i++)
    {
        for(int j = 0; j <4; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int vec[4];
    
    std::cout << "Enter 4 digits for the vector: ";
    for(int i = 0; i < 4; i ++)
    {
        std::cin >> vec[i];
    }
    

    int res[4];
    for(int i = 0; i <4;i++)
    {
        res[i] = 0;
        for(int j = 0; j <4; j++)
        {
            res[i] += arr[i][j]*vec[j];
        }
    }    
    
    std::cout << "Result:\n";
    for(int i = 0; i < 4; i ++)
    {
        printf("%d\n",res[i]);
    }
    
    return 0;
}
