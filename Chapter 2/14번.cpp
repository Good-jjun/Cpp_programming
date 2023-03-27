#include <iostream>
using namespace std;
#include <string>;
int main()
{
	int total=0;
	int num=0;
	int sum = 0;
	char coffe[100];

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다" << endl;
	
	while (total <= 20000)
	{
		cout << "주문>>";
		cin >> coffe >> num;
		if (strcmp(coffe,"에스프레소") == 0)
		{
			
			sum = 2000 * num;
			total += sum;
			cout << sum << "원입니다. 맛있게 드세요" <<endl;
		}
		else if (strcmp(coffe, "아메리카노") == 0)
		{
			
			sum = 2300 * num;
			total += sum;
			cout << sum << "원입니다. 맛있게 드세요" << endl;
		}
		else if (strcmp(coffe, "카푸치노") == 0)
		{
	
			sum = 2500 * num;
			total += sum;
			cout << sum << "원입니다. 맛있게 드세요" << endl;
		}
	
	}	
			cout << "오늘" << total << "원을 판매하여 카페를 닫습니다. 내일봐요 ~~";
	

}