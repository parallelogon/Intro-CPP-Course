/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number. 
**Tell the user if the guess is too high or too low. 
**The user enters -1  or guesses the target number to end 
**the program.
*/

#include <iostream>
#include<sstream>

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess;
    
    while( guess != target)
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::cin>>guess;
        
        if (guess == -1)
        {
            break;
        }

        if (guess > target)
        {
                std::cout << "That guess is too high\n";
        }
        else if (guess < target)
        {
                std::cout << "That guess is too low\n";
        }
	else
	{
		std::cout << "Correct!\n";
	}
    }            
    return 0;
}

