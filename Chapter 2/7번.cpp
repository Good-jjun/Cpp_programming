#include<iostream>
using namespace std;

int main()
{
	char a[100];
	cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";


	while (true)
	{
		cin.getline(a, 100, '\n');

		if (strcmp(a, "yes")== 0)
		{
			cout << "�����մϴ�..";
         }
		else
		{
			cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		}

	}
		
}