#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");
	unsigned int n, size, size2,size1 = 2, sum1 = 0;
	bool dex = false;
	srand(time(NULL));
	n = 2 + rand() % 11;
	size2 = n - 1;
	cout << "Человек в каяке: "<< n << endl;
	size = 2 * n;
	unsigned int *quin = new unsigned int[size];
	unsigned int *sum2 = new unsigned int[n];
	for (int i = 0; i < size; i++) 
	{
		quin[i] = 1 + rand() % 1001;
		cout << "Вес " << i + 1 << ": " << quin[i] << endl;
	}
	while (!dex) {
		dex = true;
		int temp;
		for (int i = 0; i < size - 1; i++) {
			if (quin[i] > quin[i + 1]) {
				temp = quin[i];
				quin[i] = quin[i + 1];
				quin[i + 1] = temp;
				dex = false;
			}
		}
	}
	/*int i = size-3;
	while (i >= 0)
	{
		int c = 0;
		for (int j = 0; j < 2; j++)
		{
			sum2[c] += quin[i];
			i--;
		}
		c++;
	}*/
	for (int j = 0; j < n; j++)
	{
		cout << "Сумма n-человек: " << sum2[j] << endl;
	}
	cout << endl;
	system("pause");
}