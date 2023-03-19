#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,M = 0;

    cin >> N >> M;

    vector<int> basket(N);

    for(int i = 0; i<N; i++)
    {
        basket[i] = i+1; //초기화
    }
    
    for(int i = 0; i < M; i++)
    {
        int from, to = 0;
        cin >> from >> to;

        reverse(basket.begin()+from-1,basket.begin()+to);
    }

    for(int i = 0; i<N; i++)
    {
        cout << basket[i] << " ";
    }

    return 0;
}