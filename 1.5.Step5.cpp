/*
	1.5 Цикл while. Шаг 5

	По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.

	Формат входных данных:
	Вводится натуральное число.
	Формат выходных данных:
	Выведите ответ на задачу.

	Sample Input: 50
	Sample Output: 1 2 4 8 16 32
*/
#include <iostream>

using namespace std;

int main() {
	while (true) {
		int n, i = 1;
		cin >> n;

		while (i <= n) {
			cout << i << " ";
			i *= 2;
		}
	}
	return 0;
}