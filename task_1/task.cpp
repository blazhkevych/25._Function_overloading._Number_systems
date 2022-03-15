/*
1. Написать перегруженные функции (int, double, char) для
выполнения следующих задач:
	 инициализация квадратной матрицы;
	 вывод матрицы на экран;
	 определение максимального и минимального
элемента на главной диагонали матрицы;
	 сортировка элементов по возрастанию отдельно для
каждой строки матрицы.
*/

#include <iostream>
#include "resources\library\arr.h"

using namespace std;

int main()
{

	char answer{ 0 };
	int choice{ 0 };

	do
	{
		cout << "Enter task number:: "
			<< "\nTask 1."
			<< "\nTask 2."
			<< "\nTask 3."
			<< endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			srand(time(0));
			const int row = 4;
			const int col = 4;

			int arrInt[row][col]{ 0 };
			cout << "Int:\n\n";
			InitArrayRandom(arrInt, col, -9, 9);
			PrintArray(arrInt, row);
			MaxMinElOnMainDiagonal(arrInt, row);
			cout << "\nAfter sorting :\n";
			SortElAscRowInArr(arrInt, row);
			PrintArray(arrInt, row);

			double arrDouble[row][col]{ 0.0 };
			cout << "\nDouble:\n\n";
			InitArrayRandom(arrDouble, col, -9, 9);
			PrintArray(arrDouble, row);
			MaxMinElOnMainDiagonal(arrDouble, row);
			cout << "\nAfter sorting :\n";
			SortElAscRowInArr(arrDouble, row);
			PrintArray(arrDouble, row);

			char arrChar[row][col]{ 0 };
			cout << "\nChar:\n\n";
			InitArrayRandom(arrChar, col, 33, 126);
			PrintArray(arrChar, row);
			MaxMinElOnMainDiagonal(arrChar, row);
			cout << "\nAfter sorting :\n";
			SortElAscRowInArr(arrChar, row);
			PrintArray(arrChar, row);
		}
		break;

		case 2:
		{
			int number = 255;
			int numSys = 16;
			ConvDecToAnotherNumSys(number, numSys);
		}
		break;

		case 3:
		{
			cout << ConvBinToDecSys(11111111);
		}
		break;
		}

		cout << endl;
		cout << "Do you want to continue? ( y (yes) / n (no) )\n";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}