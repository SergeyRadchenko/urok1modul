#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <time.h>
using namespace std;

void main()
{

	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int o, p;

	do
	{
		cout << "�������� �������:";
		cin >> o;
		switch (o)
		{
		case 1:
		{
			int m, a[1], i;
			/*1.�����1��� ���������� ������ ������ ���� ��������� ������� M.
				������� �������� ��������� � ������� ���������� ��������� �����.
				������������ ������.*/
			cout << "������� ������ �:";
			cin >> m;
			for (i = 0; i < m; i++)
			{
				a[i] = 5 + rand() % 40;
				cout << i << "-" << a[i] << endl;
			}

		}
		break;
		case 2:
		{
			/*2.������ ������������ ��� �������� �������� ����� �������� �������.
				� ������� ������� ��������� ����� ��������� ������ ������ ����������,
				�������� � ��������� �� 50 �� 100 ������������*/
			int a[20], i = 0;
			for (i = 0; i < 20; i++)
			{
				a[i] = 50 + rand() % 50;

			}
			for (i = 0; i < 20; i++)
				cout << i << "--" << a[i] << endl;

		}
		break;
		case 3:
		{
			/*3.��������� ������ �� ������ ��������� ����� �������,
				����� �������� ��������� ��� ��������� ������� ����� ������� ������������ :
			a.��������� ������������������;
			b.������������ ������������������*/
			int digitals[8]; // �������� ������ �� 10 �����

			cout << "������� 8 ����� ��� ���������� �������: " << endl;

			for (int i = 0; i < 8; i++) {
				cin >> digitals[i]; // "������" �������� � ������
			}

			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if (digitals[j] > digitals[j + 1]) {
						int b = digitals[j]; // ������� �������������� ����������
						digitals[j] = digitals[j + 1]; // ������ �������
						digitals[j + 1] = b; // �������� ���������
					}
				}

			}


			cout << "������ � ��������������� ����: ";

			for (int i = 0; i < 8; i++) {
				cout << digitals[i] << " ++" ; // ������� �������� �������
				


			}
		}
			break;
		case 4:
		{
			/*4.��� ������ ����� �����.��������:
			a.�������� �� s - � ������� ������� ������������� ������
				b.�������� �� k - � ������� ������� ������ ������
				c.����� ������� ������� ������ : k - � ��� s - �.*/
		}
		break;
		case 5:
		{
			/*5.��� ������.��� ��� �������� :
			a.��������� �� 20
				b.�������� �� ��������� �������
				c.��������� �� ����� �.*/
			
			int a[10],b;
			cout << "������� ����� �:";
			cin >> b;
			
			for (int i = 0; i < 10; i++)
			{
				a[i] = 20 + rand() % 30;
cout <<i << "="<<a[i] - 20 << endl;
			}
			for (int i = 0; i<10; i++)
			cout << i << "=" << a[i] * b << endl;
			for(int i = 0;i<10;i++)
cout << i << "="<< a[i] * a[9] << endl;



		}
		break;


		default:cout << "�� ����� �������� ��������." << endl;
			break;
		}
		cout << "������ ����������? (1)�� (2)���." << endl;
		cin >> p;

		} while (p == 1);


}