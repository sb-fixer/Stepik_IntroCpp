﻿/*
	1.5 Цикл while. Шаг 8

	Определите сумму всех элементов последовательности, завершающейся числом 0.

	Формат входных данных:
	Вводится последовательность целых чисел, оканчивающаяся числом 0 
	(само число 0 в последовательность не входит, а служит как признак ее окончания.
	Формат выходных данных:
	Выведите ответ на задачу.
	Sample Input:
	3
	6
	8
	0
	Sample Output:
	17
*/
#include <iostream>

int main() {
	while (true) {
		int n, sum = 0;
		/*while (true) {
			std::cin >> n;
			if (n == 0) break;
			sum += n;
		}
		std::cout << sum << endl;*/

		while (std::cin >> n && n && (sum += n));
		std::cout << sum;
	}
	return 0;
}