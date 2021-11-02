# include <iostream>			
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS"); // Локализация на Русский язык
	double gallon = 7.481, rezultat; // Инициализация переменной - gallon, Описание переменных
	int c; // Описание переменной - С
	cout << "Сколько вам нужно галлонов" << endl; // Задаем пользователю вопрос, используя команду вывода
	cin >> c;// Ввод переменной - С
	rezultat = (c / gallon); // Записываем результат деления в переменную - rezultat
	cout << rezultat << endl;// Выводим переменную - rezultat
	return 0;
}
