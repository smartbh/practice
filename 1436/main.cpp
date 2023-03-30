#include <iostream>
#include <string>

using namespace std;

int findSeries(int N)
{
    int series = 0;
    int demon = 666; //악마수
    string object; //검색할 수
    while(1)
    {
        object = to_string(demon);
        for(int i = 0; i< object.length()-2; i++) 
            {
                //length에서 2를 빼주는 이유는 3개일시 3까지 가면
                //index를 벗어나게 되서2를 빼주게함
                //666은 그래서 i = 0까지만 탐색하고
                //1666은 그래서 i = 1까지만 탐색하게 하는것
                if(object[i] == '6' &&
                    object[i+1] == '6' &&
                    object[i+2] == '6')
                    {
                        series++;
                        if(series == N)
                            return demon;
                        break;
                    }
            }
        demon++;
    }
}


//종말의 수
int main()
{
    int N = 0; //입력받을 목표 횟수
    cin >> N; //목표 시나리오
    
    cout << findSeries(N);
}