/*
	1.6 Цикл for и массивы. Шаг 3

	Выведите все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).

	Формат входных данных:
		В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
	Формат выходных данных:
		Выведите ответ на задачу.
	Sample Input:
		5
		1 2 3 4 5
	Sample Output:
		1 3 5
*/
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	while (true) {
		int n;
		cin >> n;
		vector <int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (!(i % 2)) {
				cout << a[i] << " ";
			}
		}
		/*int n, a;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (!(i % 2)) {
				cout << a << " ";
			}
		}*/
	}
}