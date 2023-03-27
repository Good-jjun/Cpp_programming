#include <iostream>;
using namespace std;

int main()
{
	int i = 0; int j = 0;

	cout << "***** 승리장에 오신 것을 환영합니다 *****" << endl;

	while (1)
	{
		cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
		cin >> i;

		if (i == 1)
		{
			cout << "몇인분?";
			cin >> j;
			cout << "짬뽕" << j << "인분 나왔습니다";
		}
		else if (i == 2)
		{
			cout << "몇인분?";
			cin >> j;
			cout << "짜장" << j << "인분 나왔습니다";
		}
		else if (i == 3)
		{
			cout << "몇인분?";
			cin >> j;
			cout << "군만두" << j << "인분 나왔습니다";
		}
		else if (i == 4)
		{
			cout << "오늘 영업은 끝났습니다";
			return 0;
		}
		else if (i > 4)
		{
			cout << "다시 주문하세요 !!";
			return 0;
		}
	}


}