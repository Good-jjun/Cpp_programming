#include <iostream> //다시풀기
#include<string>
using namespace std;

int main()
{
	char c[30];

	cout << "문자열 입력 >>";

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