#include <iostream>
using namespace std;

int main()
{
	double n[5];
	double max =0;

	cout << "5 ���� �Ǽ��� �Է��϶� >> ";
	
	for (int i = 0; i < 5; i++)
	{
		cin >> n[i];
		if (n[i] > max)
		{
			max = n[i];
		}
		
	}
	cout << "���� ū �� " << max << " ";

}