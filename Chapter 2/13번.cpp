#include <iostream>;
using namespace std;

int main()
{
	int i = 0; int j = 0;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ� *****" << endl;

	while (1)
	{
		cout << "«��:1, ¥��:2, ������:3, ����:4>>";
		cin >> i;

		if (i == 1)
		{
			cout << "���κ�?";
			cin >> j;
			cout << "«��" << j << "�κ� ���Խ��ϴ�";
		}
		else if (i == 2)
		{
			cout << "���κ�?";
			cin >> j;
			cout << "¥��" << j << "�κ� ���Խ��ϴ�";
		}
		else if (i == 3)
		{
			cout << "���κ�?";
			cin >> j;
			cout << "������" << j << "�κ� ���Խ��ϴ�";
		}
		else if (i == 4)
		{
			cout << "���� ������ �������ϴ�";
			return 0;
		}
		else if (i > 4)
		{
			cout << "�ٽ� �ֹ��ϼ��� !!";
			return 0;
		}
	}


}