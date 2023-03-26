#include <iostream>
using namespace std;

int main()
{
	double n[5];
	double max =0;

	cout << "5 개의 실수를 입력하라 >> ";
	
	for (int i = 0; i < 5; i++)
	{
		cin >> n[i];
		if (n[i] > max)
		{
			max = n[i];
		}
		
	}
	cout << "제일 큰 수 " << max << " ";

}