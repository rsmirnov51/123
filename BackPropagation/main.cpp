#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <sstream>
using namespace std;


class neural
{
public:
	neural(int NT, int MT, int JT, double etaT, double allowableErrorT, int maxEpochT, vector<double> xT, vector<double> tT);
	neural();
	vector<double> t, x;

	vector<vector<vector<double> > > w;
	vector<double> error;
	vector<vector<double> > outY;
	double allowableError;
	int N, M, J, maxEpoch;
	double eta;

	double fa(double net);
	double dfa(double net);
	bool teaching();
	void resetW();
};


int main()
{
	setlocale(LC_ALL, "Russian");

	// Создание объекта класса нейронной сети и передача его в класс вывода
	out res;

	bool exit = 0;			// Завершения работы программы, когда exit == 1
	do
	{
		cout << "Выберите часть лабораторной 3:";
		cout << "\n0 - выход;";
		cout << "\n1 - запустить обучение;\n";

		int userAns;
		cin >> userAns;
		switch (userAns)
		{
		case 0:
			cout << "\nGoobay!";
			exit = 1;				// Выход из программы
			break;
		case 1:
			cout << res.fullInfoTeaching();
			break;
		default:
			cout << "\nПовторите ввод.";// Что-то не то
			break;
		}
	} while (!exit);


	return 0;
}
