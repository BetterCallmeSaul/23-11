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
	/*Proc23.������� ������� Quarter(x, y) ������ ����, ������������ �����
		������������ ��������, � ������� ��������� ����� � ���������� ������������� ������������(x, y).� ������� ���� ������� ����� ������
		������������ ��������� ��� ���� ����� � ������� ���������� ������������.*/
	/*for (int i = 1; i <= 3; i++) {
		double x = rand() % 32001 - 16000 / 1000.0;
		double y = rand() % 32001 - 16000 / 1000.0;
		cout << x << ' ' << y << ' ' << quarter(x, y) << endl;
	}*/
	/*Proc24.������� ������� Even(K) ����������� ����, ������������ TRUE,
		���� ����� �������� K �������� ������, � FALSE � ��������� ������.�
		�� ������� ����� ���������� ������ ����� � ������ �� 10 ����� �����.*/
	srand(time(0));
	int k = 0;
		for(int i = 1; i <= 10; i++) {
			int x = rand();
			cout << x << ' ' << boolalpha << even(x) << endl;
			if(even(x))
 		}
		cout << k << endl;
}