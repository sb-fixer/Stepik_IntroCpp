/*
	1.4 Условный оператор. Шаг 15

	Дано три числа. Упорядочите их в порядке неубывания.

	Формат входных данных:
	Вводятся три числа.
	Формат выходных данных:
	Выведите ответ на задачу.
	Sample Input: 1 2 1
	Sample Output: 1 1 2
*/
#include <iostream>

using namespace std;

int main() {
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		/*
		int tmp = 0;
		if (a > b) {
			tmp = a;
			a = b;
			b = tmp;
		} 
		if (a > c) {
			tmp = a;
			a = c;
			c = tmp;
		}
		if (b > c) {
			tmp = b;
			b = c;
			c = tmp;
		}
		*/
		/*
		if (a > b) { 
			a = a + b; 
			b = a - b; 
			a = a - b; 
		}
		if (a > c) {
			a = a + c;
			c = a - c;
			a = a - c;
		}
		if (b > c) { 
			b = b + c;
			c = b - c;
			b = b - c;
		}
		*/
		if (a > b) {
			a += b;
			b = a - b;
			a += -b;
		}
		if (a > c) {
			a += c;
			c = a - c;
			a += -c;
		}
		if (b > c) {
			b += c;
			c = b - c;
			b += -c;
		}
		cout << a << " " << b << " " << c;
	}
	return 0;
}