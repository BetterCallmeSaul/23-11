#include <iostream>
#include <ctime>
using namespace std;
/*int quarter(double x, double y) {
	if (x > 0 && y > 0) return 1;
	if (x > 0 && y < 0) return 4;
	if (x < 0 && y > 0) return 2;
	if (x < 0 && y < 0) return 3;
}
bool even(int k) {
	return k % 2 == 0;
}
int main() {
	/*Proc23.Описать функцию Quarter(x, y) целого типа, определяющую номер
		координатной четверти, в которой находится точка с ненулевыми вещественными координатами(x, y).С помощью этой функции найти номера
		координатных четвертей для трех точек с данными ненулевыми координатами.*/
	/*for (int i = 1; i <= 3; i++) {
		double x = rand() % 32001 - 16000 / 1000.0;
		double y = rand() % 32001 - 16000 / 1000.0;
		cout << x << ' ' << y << ' ' << quarter(x, y) << endl;
	}*/
	/*Proc24.Описать функцию Even(K) логического типа, возвращающую TRUE,
		если целый параметр K является четным, и FALSE в противном случае.С
		ее помощью найти количество четных чисел в наборе из 10 целых чисел.*/
	srand(time(0));
	int k = 0;
		for(int i = 1; i <= 10; i++) {
			int x = rand();
			cout << x << ' ' << boolalpha << even(x) << endl;
			if(even(x))
 		}
		cout << k << endl;
}