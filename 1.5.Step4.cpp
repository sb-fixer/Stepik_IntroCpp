/*
	1.5 Цикл while. Шаг 4

	Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.

	Формат входных данных:
	Вводится целое положительное число.
	Формат выходных данных:
	Выведите ответ на задачу.

	Sample Input: 15
	Sample Output: 3
*/
#include <iostream>

using namespace std;

int main() {
	while (true) {
		int n, i = 2;
		cin >> n;
		/*
		while (i <= n) {
			if ((n % i) == 0) {
				cout << i;
				break;
			}
			i++;
		}
		*/
		
		while ((n % i) != 0 && ++i);
		cout << i;
		
		/*
		while (n % ++i);
		cout << i;
		*/
	}
	return 0;
}