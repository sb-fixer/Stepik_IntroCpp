/*
	1.5 Цикл while. Шаг 3

	По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.

	Формат входных данных:
	Вводится натуральное число.
		Формат выходных данных:
	Выведите ответ на задачу.

	Sample Input: 	50
	Sample Output: 	1 4 9 16 25 36 49
*/
#include <iostream>

using namespace std;

int main() {
	while (true) {
		int n, i = 1;
		cin >> n;
		while ((i * i) <= n) {
			cout << i * i << " ";
			i++;
		}
		//while (++i*i <= n && cout << i*i << " ");

	}
	return 0;
}