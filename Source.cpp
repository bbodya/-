#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	printf("�����i� ������, I�-01, �������� � 31\n");
	
	float a, b, c;// �������� ������� ������ �����
	cout << "����i�� ����� a:"; cin >> a;// ��� ����� �
	cout << "����i�� ����� b:"; cin >> b;// ��� ����� b
	cout << "����i�� ����� c:"; cin >> c;// ��� ����� �
	
	if ((a == b) || (a == c) || (b == c))// �������� ����� �� � ���� ����� �����
		cout <<"I��� ���� ����� �i���� �i� �����\n";// ���� ���������� ��� ��������� �����

	else// ���� ����� �� ����������
		cout << "����  �i���� �i� ����� �����\n";// ���� ���������� ���� ����� �� ����������
	system("pause");
}