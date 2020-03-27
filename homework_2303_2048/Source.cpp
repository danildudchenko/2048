#include "Header.h"

void main()
{
	cout << "2048 Begins!";
	int arr[ROWS][COLS];
	int arrScan[ROWS][COLS];
	StartInitialization(arr, ROWS, COLS);
	cout << endl;
	do
	{
		cout << char(201)<< char(205)<< char(205) << char(205) << char(205) << char(205) << char(205)<<char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)<<char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << "\n";
		for (int i = 0; i < ROWS; i++)
		{
			cout << char(186)<<"\t";
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] == 0)
					cout << char(219) << "\t";
				else cout << arr[i][j] << "\t";
			}
			cout << char(186)<<"\t"<<endl << char(186) <<"\t\t\t\t\t"<< char(186) << endl;
		}
		cout<<char(200)<< char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << "\n";
		cout << endl << endl << "Your score is: " << Total(arr, ROWS, COLS);
		char answer = _getch();
		switch (answer)
		{
		case 'W':case 'w': SpawnRandom(arr, ROWS, COLS); MoveUp(arr, ROWS, COLS); break;
		case 'S':case 's': SpawnRandom(arr, ROWS, COLS); MoveDown(arr, ROWS, COLS); break;
		case 'D':case 'd': SpawnRandom(arr, ROWS, COLS); MoveRight(arr, ROWS, COLS); break;
		case 'A':case 'a': SpawnRandom(arr, ROWS, COLS); MoveLeft(arr, ROWS, COLS); break;
		default:cout << "Wrong symbol!" << endl; break;
		}
		system("cls");
	} while (true);

}

