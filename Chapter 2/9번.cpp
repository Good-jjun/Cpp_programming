#include <iostream>
using namespace std;
//��ĭ�� �����ϴ� ���ڿ� �б�
int main()
{
	char name[20];
	char address[50];
	int age;


	cout << "�̸��� ? " << endl;
	cin.getline(name,20,'\n');
	cout << "�ּҴ� ? " << endl;
	cin.getline(address,50,'\n');
	cout << "���̴� ? " << endl;
	cin >> age;

	cout << name << "," << address << "," << age;
}