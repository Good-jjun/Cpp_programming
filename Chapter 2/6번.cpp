#include<iostream>
using namespace std;
#include<string>
int main()
{
	string n;
	string m;

	cout << "새 암호를 입력하세요>> ";
	
	cin >> n;

	cout << "새 암호를 다시 입력하세요>> ";
	cin >> m;
	if (n == m)
	{
		cout << "같습니당";
	}
	else 
	{
		cout << "다릅니다";
	}
}