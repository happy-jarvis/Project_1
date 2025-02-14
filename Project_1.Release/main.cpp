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
	Worker temp;

	do
	{
		CLS;
		cout
			<< "1 - ������� ������ � ���������;" << endl
			<< "2 - ������� ������ �� �����;" << endl
			<< "3 - �������� ����������;" << endl
			<< "4 - ������� ����������;" << endl
			<< "5 - ����� �� ����� ������;" << endl
			<< "0 - ���������� ������." << endl << endl;
		cin >> decision;

		switch (decision)
		{
		case 1:

			CLS;
			cout << "������� ������ ������: ";
			cin >> temp_length;
			flush_stdin();
			list.set(temp_length);
			for (int i = 0; i < temp_length; i++)
			{
				CLS;
				cout << "�������� - " << temp_length - i << endl;
				cout << "������� ������� � �������� ����������: ";
				getline(cin, temp_name);
				cout << "������� ���������� ���������(junior, middle or senior): ";
				cin >> temp_post;
				flush_stdin();
				cout << "������� ��� ����������� �� ������: ";
				cin >> temp_year;
				flush_stdin();
				list.fill(temp_name, temp_post, temp_year, i);
			}
			break;

		case 2:

			CLS;
			cout << "ID" << TAB << "�.�.�." << TAB << "\t���������" << TAB << "��� �����������" << endl;
			list.sorting();
			for (int i = 0; i < temp_length; i++) list.get(i);
			PAUSE;
			break;

		case 3:
			CLS;
			flush_stdin();
			cout << "������� ������� � �������� ����������: ";
			getline(cin, temp_name);
			cout << "������� ���������� ���������(junior, middle or senior): ";
			cin >> temp_post;
			flush_stdin();
			cout << "������� ��� ����������� �� ������: ";
			cin >> temp_year;
			flush_stdin();
			temp.set(temp_name, temp_post, temp_year);
			list += temp;
			break;
		case 4:
			break;
		case 5:
			break;
		case 0:
			break;
		default:
			cout << "������������ ��������!" << endl;
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