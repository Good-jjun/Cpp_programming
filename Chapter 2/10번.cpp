#include <iostream> //�ٽ�Ǯ��
#include<string>
using namespace std;

int main()
{
	char c[30];

	cout << "���ڿ� �Է� >>";

	cin >> c;
	for (int i = 0; i < strlen(c); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << c[j];
		}
		cout << '\n';
	}
	
}