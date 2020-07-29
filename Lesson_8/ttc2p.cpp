/*
For this programming quiz, I would like you to create a game called TicTacToe. In this version of the game you will need to:

    Create a 4x4 game board

    Prompt the first user (the 'x' user) to enter their name
    Prompt the second user (the 'o' user) to enter their name

    Prompt the 'x' user to select a grid position where they would like to place an 'x'.
    Prompt the 'o' user to select a grid position where they would like to place an 'o'.

    After each user has a turn, check for any row, column, diagonal that has 4 'x's or 4 'o's.

    If 4 'x's are found in the same col, row, diagonal, declare the 'x' user the winner.
    If 4 'o's are found in the same col, row, diagonal, declare the 'o' user the winner.

    End the game and declare the winner.

    If the grid is filled (each player gets 8 turns) and there is not a row, column, diagonal
    with 4 of the same symbol, the game is tied. Declare a tie game. 
*/

#include "ttc2pHead.hpp"

int main()
{
	string player1;
	string player2;
    	Gameboard game;
	char character = 'x';
	string currentPlayer = "Player 1";
	int row, col;

	std::cout << "Player 1 ('x') enter your name: ";
	cin >> player1;

	std::cout << "Player 2 ('o') enter your name: ";
	cin >> player2;


	for(int turns = 0; turns < 16; turns ++)
	{
		if(turns%2 == 0)
		{
			character = 'x';
			currentPlayer = "Player 1";
		}

		else
		{
			character = 'o';
			currentPlayer = "Player 2";
		}

		game.printInfo();

		while(1) //here the user is prompted until they pick an unoccupied space, they cannot pass
		{
			cout << currentPlayer << " enter a row number (0-3): ";
			cin >> row;

			cout << currentPlayer << " enter a column number (0-3): ";
			cin >> col;

			if(game.getGameSpace(row,col) == '-')
			{
				game.setGameSpace(row, col, character);
				break;
			}
			else
				cout << "That space is taken\n";
		}

		if(game.fourInRow(character) == 1)
		{
			cout << currentPlayer << " wins!\n";
			return 0;
		}
	}//ends the large for loop
	cout << "Tie\n";
    	return 0;
}
