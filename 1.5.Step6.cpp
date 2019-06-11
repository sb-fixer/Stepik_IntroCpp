/*
	1.5 Цикл while. Шаг 6

	Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, 
	или слово NO в противном случае.

	Формат входных данных:
	Вводится натуральное число.
	Формат выходных данных:
	Выведите ответ на задачу.
	Sample Input 1: 1
	Sample Output 1: YES
	Sample Input 2: 2
	Sample Output 2: YES
*/
#include <iostream>

using namespace std;

int main() {
	while (true) {
		int n, i = 1;
		cin >> n;
		while (i < n) {
			i *= 2;
		}
		if (i == n) {
			cout << "YES"; 
		} else {
			cout << "NO";
		}
		/*
		if (n & n - 1) {
			cout << "NO";
		} else { 
			cout << "YES"; 
		}*/
	}
	return 0;
}