#include <iostream>
using namespace std;
int main() {
	//Series1◦ Даны десять вещественных чисел.Найти их сумму
	/*double x;
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> x;
		sum += x;
	}
	cout << sum << endl;*/

	//Series3. Даны десять вещественных чисел.Найти их среднее арифметическое.
	/*double x, p;
	int sum = 0;

	for (int i = 1; i <= 10; i++) {
		cin >> x;
		sum += x;
		p = sum / 10;
		
	}
	cout << p << endl;*/
	//Series2.Даны десять вещественных чисел.Найти их произведение.
	/*double x;
	int i = 1;
	int p = 1;
	while (i <= 10) {
		cin >> x;
		p *= x;
		i++;
    }
	cout << p << endl;*/
	//Series4.Дано целое число N и набор из N вещественных чисел.Вывести
		//сумму и произведение чисел из данного набора.
	double n;
	int i = 1;
	int p = 1;
	int sum = 0;
	cin >> n;
	while (i <= n) {
		sum += n;
		p *= n;
		i++;
	}
	cout << p << endl;
	cout << sum << endl;
}