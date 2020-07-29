/*header file for ttc.cpp*/
#include <iostream>
#include <iomanip> 
using namespace std;

class Gameboard
{
    char gameSpace[4][4];
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

//TODO: complete the class definition

Gameboard::Gameboard()
{
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j<4; j++)
			gameSpace[i][j] = '-';
	}
}

void Gameboard::setGameSpace(int row, int column, char value)
{
	if(gameSpace[row][column] == '-')
		gameSpace[row][column] = value;
	else
		cout << "That space is taken\n";
}

char Gameboard::getGameSpace(int row, int column)
{
	return gameSpace[row][column];
}


/*Checks for horizontal and vertical wins by breaking if 'x' is not present, then checks diagonals */
//TODO: Make this better at checking for win conditions.
int Gameboard::fourInRow()
{
	int win = 0;

	for(int i = 0; i < 4; i++)
	{
		win = 1;
		for(int j = 0; j<4; j++)
		{
			if(gameSpace[i][j] != 'x')
			{
				win = 0;
				break;
			}
		}
		if(win ==1)
			return win;
	}

	for(int j = 0; j < 4 ; j++)
	{
		win = 1;
		for(int i = 0; i<4 ; i++)
		{
			if(gameSpace[i][j] != 'x')
			{
				win = 0;
				break;
			}
		}
		if(win ==1)
			return win;
	}

	win = 1;
	for(int ii = 0; ii < 4; ii ++)
	{
		if(gameSpace[ii][ii] != 'x')
		{
			win = 0;
			break;
		}
	}
	if(win == 1)
		return win;

	win = 1;
	for(int ii = 0; ii < 4 ; ii++)
	{
		if(gameSpace[ii][3-ii] != 'x')
		{
			win = 0;
			break;
		}
	}
	return win;
}


void Gameboard::printInfo()
{
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j<4; j++)
		{
				cout << setw(3) << gameSpace[i][j];
		}
		cout << "\n";
	}
}
