#include<iostream>
using namespace std;

int main()
{
	cout << "���ڵ��� �Է��϶�(100���̸�).";

	char m[100];
	cin.getline(m, 100, '\n');
	


	int sum = 0;

	for (int i = 0; i < 100; i++)
	{
		if (m[i] == 'x')
		{
			sum += 1;
	    }
	}
    cout << "x�� ������" << sum;
}