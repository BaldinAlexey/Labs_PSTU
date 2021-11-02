# include <iostream>
using namespace std;
	int main()
 {
	short const a = 10; // Объявляем константу - a, Инициализируем переменную a
	short b = a * 2; // Объявляем переменную - b, сразу же присваиваем рузультат умножения
	cout << a << endl << endl; // Выводим a
	cout << b << endl << endl; //Выводим b
	cout << --b << endl << endl; //Выводим --b
	return 0; // Получаем (10, 20, 19)					
}
