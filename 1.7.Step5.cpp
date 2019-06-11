/*
	1.6 Цикл for и массивы. Шаг 5

	Найдите количество положительных элементов в данном массиве.
	Формат входных данных:
		В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
	Формат выходных данных:
		Выведите ответ на задачу.
	Sample Input:
		5
		1 -2 3 -4 5
	Sample Output:
		3
*/

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, c = 0;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n ; i++) {
		cin >> a[i];
		if (a[i] > 0) {
			c++;
		}
	}
	cout << c;
}