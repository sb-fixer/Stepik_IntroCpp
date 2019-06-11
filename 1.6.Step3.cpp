/*
	1.6 Действительные числа. Шаг 3

	Дано положительное действительное число X. Выведите его дробную часть.

	Формат входных данных:
	Вводятся положительное действительное число.
	Формат выходных данных:
	Выведите ответ на задачу.
	Sample Input: 17.9
	Sample Output: 0.9
*/
#include <iostream>
int main() {
	while (true) {
		double x;
		std::cin >> x;
		std::cout << x - (int)x;
		/*int a;           
		double b;        
		std::cin >> a >> b;
		std::cout << b;*/
	}
	return 0;
}