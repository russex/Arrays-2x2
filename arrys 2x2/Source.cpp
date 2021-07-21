#pragma warning(disable:4326)
#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << typeid(long long).name() << endl;
	char program;
	char oper ;
	cout << "Для вывод меню программ нажмите на Enter: " << endl;
	do
	{
		__int64 const ROWS = 4;
		__int64 const COLS = 6;
		int arr[ROWS][COLS];
		double summ = 0;
		program = _getch();
		switch (program)
		{
		case '1':
			system("CLS");
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					arr[i][j] = rand() % (ROWS * COLS);
				}
			}
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}

			
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					summ += arr[i][j];
					
				}
			}
			cout << endl;
			cout << "Сумма элемнтов двумерного массива: " << summ << endl;
			cout << "Среднее арифметическое элемнтов двумерного массива: " << summ / (ROWS*COLS)<< endl;
			cout << endl;
			break;
		case '2':
			system("CLS");
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					arr[i][j] = rand() % (ROWS * COLS);
				}
			}
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					for (int x = 0; x < ROWS; x++)
					{
						for (int d = 0; d < COLS; d++)
						{
							if (arr[i][j] < arr[x][d])
							{
								int el = arr[x][d];
								arr[x][d] = arr[i][j];
								arr[i][j] = el;
							}
						}
					}
				}
			}
			cout << endl;
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}
			cout << endl;
			break;
		case '3':
			system("CLS");
			int mass[ROWS][COLS];
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					int proverka;
					int new_chislo;
					do {
						proverka = 0;
						new_chislo = rand() % (ROWS * COLS);
						for (int x = 0; x < ROWS; x++)
						{
							for (int d = 0; d < COLS; d++)
							{
								int chislo = mass[x][d];
								if (new_chislo == chislo)
								{
									proverka++;

								}
							}
						}
					} while (proverka != 0);
					mass[i][j] = new_chislo;
				}
			}
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					cout << mass[i][j] << "\t";
				}
				cout << endl;
			}
			cout << endl;
			break;
		case '4':
			system("CLS");
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					arr[i][j] = rand() % (ROWS * COLS);
				}
			}
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}
			int pov[ROWS][COLS];
			int collm[ROWS][COLS];
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					int coll = 0;
					int proverka = 0;
					for (int x = 0; x < ROWS; x++)
					{
						for (int d = 0; d < COLS; d++)
						{
							if (arr[x][d] == arr[i][j])
							{
								coll++;

							}
							if (pov[x][d] == arr[i][j])
							{
								proverka++;
							}
						}
					}
					if (coll > 0 && proverka == 0)
					{
						pov[i][j] = arr[i][j];
						collm[i][j] = coll;
					}

				}
			}
			cout << endl;
			cout << "Значения массива и колличество их повторений: ";
			cout << endl;
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					if (pov[i][j] != -858993460)
					{
						if (pov[i][j] < 10)cout << " ";
						cout << pov[i][j] << " = ";
					}
					if (collm[i][j] != -858993460)
					{
						if (collm[i][j] < 10)cout << " ";
						cout << collm[i][j] << "(coll)" << "\t";
						cout << endl;
					}
					
				}
			}
			break;
		case'5':
			system("CLS");
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					arr[i][j] = rand() % (ROWS * COLS);
				}
			}
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					mass[i][j] = rand() % (ROWS * COLS);
				}
			}
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					cout << arr[i][j] << " \t";
				}
				cout << "\t"<<"\t";
				for (int j = 0; j < COLS; j++)
				{
					cout << mass[i][j] << " \t";
				}
				cout << endl;
			}
			cout << "Введите како вид арифметической операции вы ходите выбрать: умножение(*), сложение(+):  "; cin >>  oper ;
			if (oper=='*')
			{
				for (int i = 0; i < ROWS; i++)
				{
					for (int j = 0; j < COLS; j++)
					{
						arr[i][j] *= mass[i][j];
					}
				}
			}
			if (oper == '+')
			{
				for (int i = 0; i < ROWS; i++)
				{
					for (int j = 0; j < COLS; j++)
					{
						arr[i][j] += mass[i][j];
					}
				}
			}
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
			break;
		case 13:
			system("CLS");
			cout << "Программа №1 ""\"Среднее арифметическое и сумма значений думерного массива""\": " << endl;
			cout << "Программа №2 ""\"Сортировка двумерного массива ""\": " << endl;
			cout << "Программа №3 ""\"Двумерный массив  заполненный УНИКАЛЬНЫМИ случайными числами ""\": " << endl;
			cout << "Программа №4 ""\"Поиск повторяющихся значений двумерного массива и колличества их повторений""\": " << endl;
			cout << "Программа №5 ""\"Сложение матриц""\": " << endl;
			cout << "Введите номер программы: " << endl;
			break;
		default: if (program != 27) cout << "Для вывод меню программ нажмите на Enter: " << endl;
			break;
		}
	} while (program != 27);
}