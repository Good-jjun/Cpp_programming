#include <iostream>; /// �̻��� �ٽ� Ǯ�Կ� �̷����� �����Ƽ� �ȵ� 
using namespace std;
#include<string>
int main()
{
	char name[100];
	char temp[100] = {0}; 
	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���" << endl;
	int len = 0;
	for (int i = 0; i < 5; i++)
	{
		cin.getline(name, 100, ';');

		cout << (i + 1) << " : "<< name  << endl;

		if (strlen(name) > len)
		{
			len = strlen(name);
			strcpy_s(temp, name);
		}	
	}
	cout << "���� �� �̸���" << temp;
}

