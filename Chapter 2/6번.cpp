#include<iostream>
using namespace std;
#include<string>
int main()
{
	string n;
	string m;

	cout << "�� ��ȣ�� �Է��ϼ���>> ";
	
	cin >> n;

	cout << "�� ��ȣ�� �ٽ� �Է��ϼ���>> ";
	cin >> m;
	if (n == m)
	{
		cout << "�����ϴ�";
	}
	else 
	{
		cout << "�ٸ��ϴ�";
	}
}