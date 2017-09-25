#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");
	unsigned int n, size, sum1 = 0;
	srand(time(NULL));
	n = 2 + rand() % 11;
	cout << "Человек в каяке: "<< n << endl;
	size = 2 * n;
	unsigned int *quin = new unsigned int[size];
	unsigned int *sum2 = new unsigned int[n];
	for (int i = 0; i < size; i++) 
	{
		quin[i] = 1 + rand() % 1001;
		cout << "Вес " << i + 1 << ": " << quin[i] << endl;
	}
		int i = size;
		while (i == 0)
		{
			for (int j = 0; j < 2; j++)
			{
				sum2[i] += quin[i];
				i--;
			}
			i--;
		}
	for (int j = 0; j < n; j++)
	{
		cout << "Сумма n-человек: " << sum2[j] << endl;
	}
	cout << endl;
	system("pause");
}