#include <iostream>
#include <time.h>

using namespace std;

//HOW TO SEND ARRAY 2D FOR FUNCTIONS, TO MODIFY AND TO PRINT? 

int main()
{
	char quitAns = 'y';
	unsigned int numberBombs = 1;
	srand(time(NULL));

	while (quitAns == 'y')
	{
		system("cls");
		cout << "***WELCOME TO MINEFIELD***";

		char field[9][9] = {
			{ '0', '0', '0', '0', '0', '0', '0', '0', '0' },
			{ '0', '0', '0', '0', '0', '0', '0', '0', '0' },
			{ '0', '0', '0', '0', '0', '0', '0', '0', '0' },
			{ '0', '0', '0', '0', '0', '0', '0', '0', '0' },
			{ '0', '0', '0', '0', '0', '0', '0', '0', '0' },
			{ '0', '0', '0', '0', '0', '0', '0', '0', '0' },
			{ '0', '0', '0', '0', '0', '0', '0', '0', '0' },
			{ '0', '0', '0', '0', '0', '0', '0', '0', '0' },
			{ '0', '0', '0', '0', '0', '0', '0', '0', '0' },
		};

		do
		{
			cout << "\nHow many bombs?(1-80) ";
			cin >> numberBombs;
		} while ((numberBombs > 80) || (numberBombs < 1));

		unsigned short x = 0;
		unsigned short y = 0;
		int bombCounter = 0;
		while (bombCounter < numberBombs)
		{
			x = rand() % 9;
			y = rand() % 9;
			if (field[x][y] == '0')
			{
				field[x][y] = '1';
				bombCounter++;
			}
		}

		for (int c = 0; c < 9; c++)
		{
			for (int r = 0; r < 9; r++)
			{
				cout << field[c][r] << " ";
			}
			cout << endl;
		}
	
		cout << "\nSet another mine field? (y/n)? ";
		cin >> quitAns;
		
	}

	return 0;
}


