#include "header.h"
#include "list.h"

void flush_stdin();

int main()
{
	setlocale(LC_ALL, "Rus");

	string temp_name = " ";
	string temp_post = " ";
	int temp_year = 0;
	int temp_length = 0;
	int decision = 0;
	List list;

	do
	{
		CLS;
		cout
			<< "1 - Создать список и заполнить;" << endl
			<< "2 - Вывести список на экран;" << endl
			<< "3 - Добавить сотрудника;" << endl
			<< "4 - уволить сотрудника;" << endl
			<< "5 - поиск по стажу работы;" << endl
			<< "0 - завершение работы." << endl << endl;
		cin >> decision;

		switch (decision)
		{
		case 1:

			CLS;
			cout << "Введите размер списка: ";
			cin >> temp_length;
			flush_stdin();
			list.set(temp_length);
			for (int i = 0; i < temp_length; i++)
			{
				CLS;
				cout << "Осталось - " << temp_length - i << endl;
				cout << "Введите фамилию и инициалы сотрудника: ";
				getline(cin, temp_name);
				cout << "Введите занимаемую должность(junior, middle or senior): ";
				cin >> temp_post;
				flush_stdin();
				cout << "Введите год поступления на работу: ";
				cin >> temp_year;
				flush_stdin();
				list.fill(temp_name, temp_post, temp_year, i);
			}
			break;

		case 2:

			CLS;
			cout << "ID" << TAB << "Ф.И.О." << TAB << "\tДолжность" << TAB << "Год поступления" << endl;
			list.sorting();
			for (int i = 0; i < temp_length; i++) list.get(i);
			PAUSE;
			break;

		case 3:

			break;
		case 4:
			break;
		case 5:
			break;
		case 0:
			break;
		default:
			cout << "Некорректное действие!" << endl;
			Sleep(970);
		}

	} while (decision != 0);

	return 0;
}

void flush_stdin()
{
	cin.clear();
	while (cin.get() != '\n');
}