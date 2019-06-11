/*
	1.5 Цикл while. Шаг 12

	Последовательность Фибоначчи определяется так:
	F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
	По данному числу N определите N-е число Фибоначчи F(N).

	Формат входных данных:
	Вводится натуральное число N.
	Формат выходных данных:
	Выведите ответ на задачу.
	Sample Input: 6 (0 1 1 2 3 5 8 13 21 34 55)
	Sample Output: 8
*/
#include <iostream>

int main() {
	while (true) {
		int n, i = 3, f = 1, fn = 1;
		std::cin >> n;
		while (i <= n) {
			fn += f;
			f = fn - f;
			i++;
		}
		std::cout << fn;
		/*int a = 0, b = 1, i;
		std::cin >> i;
		while (i > 0) {
			b += a;
			a = b - a;
			i--;
		}
		std::cout << a;*/
	}
	return 0;
}