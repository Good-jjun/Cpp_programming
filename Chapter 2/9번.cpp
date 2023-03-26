#include <iostream>
using namespace std;
//빈칸을 포함하는 문자열 읽기
int main()
{
	char name[20];
	char address[50];
	int age;


	cout << "이름은 ? " << endl;
	cin.getline(name,20,'\n');
	cout << "주소는 ? " << endl;
	cin.getline(address,50,'\n');
	cout << "나이는 ? " << endl;
	cin >> age;

	cout << name << "," << address << "," << age;
}