/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>

using namespace std;

int main()
{
    int integer = 1;
    short shorter = 1;
    long longer = 1;
    char character = 'a';
    float floater = 1;
    double doubler = 1;
    bool boolean = 1;
    
    cout << "Integers are " << sizeof(int) << " bits Long" << endl;
    cout << "Shorts are " << sizeof(shorter) << " bits Long" << endl;
    cout << "Longs are " << sizeof(longer) << " bits long" << endl;
    cout << "Characters are "  << sizeof(character) << " bits long" << endl;
    cout << "Floats are "   << sizeof(floater) << " bits long" << endl;
    cout << "Doubles are "  << sizeof(doubler) << " bits long" << endl;
    cout << "Bools are " << sizeof(boolean) << " bits long" << endl;
    return 0;
}

