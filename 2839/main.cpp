#include <iostream>

using namespace std;

int main()
{
    //5kg, 3kg 봉지 두가지
    //최대한 적은 봉지.
    //ex) 18키로짜리 봉지 3키로 6개, 5키로 3개 3키로 1개면 가능

    int five = 0; //5,3 키로 봉지 갯수
    int three = 0;
    int n;

    cin >> n;

    //제일 큰 수로 나눠본다.
    //나눈 나머지를 3으로 나눠본다.
    //나눠서 떨어지지 않으면 -1. 나눠서 떨어지면 두가지를 더해서 출력

    five = n / 5; //5키로 봉지 갯수

    while (true)
    {
        if (five < 0)
        {
            cout << -1;
            return 0;
        }

        
        if(n%5 == 0) //만약 5로 바로 나눠 떨어지면
        {
            cout << five + three;
            return 0;
        }
        else if( five != 0 && (n-(5 * five))%3 ==0) //5로 나눈 나머지가 3으로 나눠 떨어지면
        {
            three = (n-(5 * five))/3;
            cout << five + three;
            return 0;
        }
        else if(five == 0 && n%3 == 0) //5가 한개도 없고 3만 남을때
        {
            three = n/3;
            cout << five + three;
            return 0;
        }
        else
        {
            five--;
        }
    }

}