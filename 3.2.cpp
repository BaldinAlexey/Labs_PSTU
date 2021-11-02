#include<iostream>
using namespace std;
int main()
{
	int mas[5], i; // Создаем массив размером 5 элементов
	for (i = 0;i < 5;i++) // Цикл счетчик
		cin >> mas[i]; // Заполняем массив
	for (i = 4;i >= 0;i--) // Цикл счетчик
		cout << mas[i] << ' ' << endl; // Выводим массив в обратном порядке
	return 0;
}

