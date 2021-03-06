/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;

    int * pointerInt = &givenInt;
    float * pointerFloat = &givenFloat;
    double * pointerDouble = &givenDouble;
    char * pointerChar = &givenChar;
    std::string * pointerString = &givenString;

    std::cout << "Give an Integer: ";
    std::cin >> givenInt;

    std::cout << "\nGive a Float: ";
    std::cin >> givenFloat;

    std::cout << "\nGive a Double: ";
    std::cin >> givenDouble;

    std::cout << "\nGive a Char: ";
    std::cin >> givenChar;

    std::cin.ignore(80, '\n');
    std::cout << "\nGive a String: ";
    std::getline(std::cin, givenString);

    std::cout << "Value of Given Int: " << *pointerInt << " Address: " << pointerInt << "\t" << &givenInt << '\n';
    std::cout << "Value of Given Float: " << *pointerFloat << " Address: " << pointerFloat << '\n';
    std::cout << "Value of Given Double: " << *pointerDouble <<  " Address: " << pointerDouble << '\n';
    std::cout << "Value of Given String: " << *pointerString <<  " Address: " << &givenString << "\n";
    for(int i = 0; i < givenString.length(); i++)
    {
	char * ptr = &givenString[i];
	std::cout << "\t" << ptr[0] <<  "\t" << (void*) ptr << "\t" << (void *) givenString.data() + i << "\n"; //comparison of different ways to access string
    }
    std::cout << "Value of Given Char: " << *pointerChar <<  " Address: " << (void *) pointerChar << '\n';
    return 0;
}
