#include <iostream>
using namespace std;
#include <string>;
int main()
{
	int total=0;
	int num=0;
	int sum = 0;
	char coffe[100];

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�" << endl;
	
	while (total <= 20000)
	{
		cout << "�ֹ�>>";
		cin >> coffe >> num;
		if (strcmp(coffe,"����������") == 0)
		{
			
			sum = 2000 * num;
			total += sum;
			cout << sum << "���Դϴ�. ���ְ� �弼��" <<endl;
		}
		else if (strcmp(coffe, "�Ƹ޸�ī��") == 0)
		{
			
			sum = 2300 * num;
			total += sum;
			cout << sum << "���Դϴ�. ���ְ� �弼��" << endl;
		}
		else if (strcmp(coffe, "īǪġ��") == 0)
		{
	
			sum = 2500 * num;
			total += sum;
			cout << sum << "���Դϴ�. ���ְ� �弼��" << endl;
		}
	
	}	
			cout << "����" << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ��� ~~";
	

}