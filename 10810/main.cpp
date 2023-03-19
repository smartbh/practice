#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N,M = 0; //바구니 갯수 N, 반복 횟수 M

    cin >> N >> M;

    vector<int> basket(N); //크기 N짜리 벡터, 0으로 전부 초기화 생성

    for(int i = 0; i<M; i++)
    {
        int from,to,num = 0;
        cin >> from >> to >> num;

        for(int j = from-1; j<=to-1; j++)
        {
            basket[j] = num;
        }
    }

    for(int i = 0; i<N; i++)
    {
        cout << basket[i] << " ";
    }


    return 0;
}