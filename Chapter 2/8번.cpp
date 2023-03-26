#include <iostream>; /// 이새끼 다시 풀게요 이런문제 ㅈ같아서 안됨 
using namespace std;
#include<string>
int main()
{
	char name[100];
	char temp[100] = {0}; 
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << endl;
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
	cout << "가장 긴 이름은" << temp;
}

