﻿#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int h1, m1, c1, h2, m2, c2, N, h, m, c; // Объявляем переменные
	cout << "Введите начало интервала(час, мин, сек)\n"; //Выводим на экран текст
	cin >> h1 >> m1 >> c1; // Вводим переменные
	cout << "Введите конец интервала(час, мин, сек)\n"; //Выводим на экран текст
	cin >> h2 >> m2 >> c2;  // Вводим переменные
	N = (h2 - h1) * 3600 + (m2 - m1) * 60 + (c2 - c1); // Находим продолжительность промежутка
	h = (N / 3600); // Продолжительность в часах
	m = (N % 3600) / 60; // Продолжительность в минутах
	c = ((N % 3600) % 60); // Продолжительность в секундах
	cout << h << ' ' << m << ' ' << c; // Выводим переменные
	return 0;
}
