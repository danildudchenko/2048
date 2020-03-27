#include "Header.h"
void StartInitialization(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = 0;
		}
	}
	arr[rand() % 4][rand() % 4] = 2;
}
void MoveUp(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[j][i] == arr[j + 1][i])
			{
				arr[j][i] *= 2;
				arr[j + 1][i] = 0;
			}
			if (arr[0][i] == 0 && j != 3)
			{
				arr[0][i] = arr[0 + 1][i];
				arr[0 + 1][i] = 0;
			}
			if (arr[1][i] == 0 && j != 3)
			{
				arr[1][i] = arr[1 + 1][i];
				arr[1 + 1][i] = 0;
			}
			if (arr[2][i] == 0 && j != 3)
			{
				arr[2][i] = arr[2 + 1][i];
				arr[2 + 1][i] = 0;
			}
		}
	}
}
void MoveDown(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[j + 1][i] == arr[j][i])
			{
				arr[j + 1][i] *= 2;
				arr[j][i] = 0;
			}
			if (arr[1][i] == 0 && j != 3)
			{
				arr[1][i] = arr[0][i];
				arr[0][i] = 0;
			}
			if (arr[2][i] == 0 && j != 3)
			{
				arr[2][i] = arr[1][i];
				arr[1][i] = 0;
			}
			if (arr[3][i] == 0 && j != 3)
			{
				arr[3][i] = arr[2][i];
				arr[2][i] = 0;
			}

		}
	}
}
void MoveRight(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] == arr[i][j + 1])
			{
				arr[i][j + 1] *= 2;
				arr[i][j] = 0;
			}
			if (arr[j][1] == 0)
			{
				arr[j][1] = arr[j][0];
				arr[j][0] = 0;
			}
			if (arr[j][2] == 0)
			{
				arr[j][2] = arr[j][1];
				arr[j][1] = 0;
			}
			if (arr[j][3] == 0)
			{
				arr[j][3] = arr[j][2];
				arr[j][2] = 0;
			}
		}
	}
}
void MoveLeft(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j + 1] == arr[i][j])
			{
				arr[i][j] *= 2;
				arr[i][j + 1] = 0;
			}
			if (arr[j][0] == 0)
			{
				arr[j][0] = arr[j][1];
				arr[j][1] = 0;
			}
			if (arr[j][1] == 0)
			{
				arr[j][1] = arr[j][2];
				arr[j][2] = 0;
			}
			if (arr[j][2] == 0)
			{
				arr[j][2] = arr[j][3];
				arr[j][3] = 0;
			}
		}
	}
}
void SpawnRandom(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	bool quit = false;
	do
	{
		int rand1 = rand() % 4;
		int rand2 = rand() % 4;
		if (arr[rand1][rand2] == 0)
		{
			arr[rand1][rand2] = 2;
			quit = true;
		}

	} while (quit != true);
}
int Total(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int total = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			total += arr[i][j];
		}
	}
	return total;
}