/*Goal: understand multidimensional arrays in C++ this program takes */

#include<iostream>

int main()
{
    int h,w;
    h = w = 0;

    std::cout << "Height of matrix: ";
    std::cin >> h;

    std::cout << "Width of matrix: ";
    std::cin >> w;

    int array2Dim[h][w];

    for(int i = 0; i < h; i++)
        for(int j = 0; j < w; j++)
            array2Dim[i][j] = w*i+j;

    for(int i=0; i<2;i++)
        for(int j=0;j<3;j++)
            std::cout<<"array2Dim["<<i<<"]["<<j<<"] = " << array2Dim[i][j]<<"\n";
    return 0;
}
