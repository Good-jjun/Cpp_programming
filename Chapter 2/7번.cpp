#include<iostream>
using namespace std;

int main()
{
	char a[100];
	cout << "종료하고 싶으면 yes를 입력하세요>>";


	while (true)
	{
		cin.getline(a, 100, '\n');

		if (strcmp(a, "yes")== 0)
		{
			cout << "종료합니다..";
         }
		else
		{
			cout << "종료하고싶으면 yes를 입력하세요>>";
		}

	}
		
}