#include<iostream>
using namespace std;

int main()
{
	cout << "문자들을 입력하라(100개미만).";

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
    cout << "x의 개수는" << sum;
}