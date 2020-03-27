#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

const int ROWS = 4;
const int COLS = 4;

void StartInitialization(int arr[ROWS][COLS], const int ROWS, const int COLS);
void MoveUp(int arr[ROWS][COLS], const int ROWS, const int COLS);
void MoveDown(int arr[ROWS][COLS], const int ROWS, const int COLS);
void MoveRight(int arr[ROWS][COLS], const int ROWS, const int COLS);
void MoveLeft(int arr[ROWS][COLS], const int ROWS, const int COLS);
void SpawnRandom(int arr[ROWS][COLS], const int ROWS, const int COLS);
int Total(int arr[ROWS][COLS], const int ROWS, const int COLS);
