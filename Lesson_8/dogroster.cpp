/*Goal: practice using a class. 
**Create an array called roster, populate it 
**with multiple instances of Dog, it has a size of SIZE. 
**The create a function called 
**printRoster(roster, SIZE) that will print 
**all the information about all the dogs on the roster.
*/

#include "dogrosterHead.hpp"

int main()
{
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
    int SIZE = 3;
    Dog roster[SIZE];

    roster[0].setName("Lock");
    roster[1].setName("Stock");
    roster[2].setName("Barrel");

    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    cout << "\n";
    return 0;
}

