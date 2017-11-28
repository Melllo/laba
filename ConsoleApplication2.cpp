// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "time.h"
#include <iomanip>
#include <cstdlib>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

		int A[3][3];
		cout << "----------Matrix #1----------" << endl;
		srand(time(NULL));
		for (int i = 1; i < 4; i++)
		{
			for (int j = 1; j < 4; j++)
			{
				A[i][j] = rand() % 21 - 10;
				cout << setw(4) << setprecision(3) << A[i][j];
			}
			cout << endl;
		}
		cout << "----------Matrix #2----------" << endl;
		int max = A[1][1];
		for (int i = 1; i < 4; i++)
		{
			for (int j = 1; j < 4; j++)
			{
				if (A[i][j]>max) max = A[i][j];
			}
		}
		for (int i = 1; i < 4; i++)
		{
			for (int j = 1; j < 4; j++)
			{
				if (A[i][j] == max) A[i][j] = 0;
			}
		}
		for (int i = 1; i < 4; i++)
		{
			for (int j = 1; j < 4; j++)
			{
				cout << setw(4) << setprecision(3) << A[i][j];
			}
			cout << endl;
		}
		system("pause");
		return 0;

	
}

