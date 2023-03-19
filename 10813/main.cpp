#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N,M = 0; //바구니 갯수 N, 반복 횟수 M

    cin >> N >> M;

    vector<int> basket(N); //크기 N짜리 벡터, 0으로 전부 초기화 생성

    for(int i = 0; i<N; i++) //각 바구니에 자기의 번호와 같은 공을 넣는작업
    {
        basket[i] = i+1;
    }

    //각각 바구니에서 두개의 바구니를 골라
    //서로 공을 바꾸는 작업
    for(int i = 0; i<M; i++)
    {
        int from,to,temp = 0;
        cin >> from >> to;
        temp = basket[from-1];
        basket[from-1] = basket[to-1];
        basket[to-1] = temp;
    }

    for(int i = 0; i<N; i++)
    {
        cout << basket[i] << " ";
    }


    return 0;
}