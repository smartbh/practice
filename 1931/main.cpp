#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int Count_max_schedule(vector<pair<int, int>> s, int N)
{
    pair<int, int> temp; //임시로 담아둘 비교용 페어
    int count = 0;
    int max_count = 1;

    if(N > 1) //한개이상일때
    {
        for (int i = 0; i < N; i++)
        {
            temp = s[i];
            count = 1;

            for (int j = i + 1; j < N; j++)
            {
                if (s[j].first >= temp.second)
                {
                    count++;
                    temp = s[j];
                }
            }
        }
            if (max_count < count)
                max_count = count;
    }
    
    else //갯수가 한개일때
    {
        count = 1;
        max_count = count;
    }


    return max_count;
}

int main()
{
    int N; // 입력받을 회의 갯수
    cin >> N;
    vector<pair<int, int>> scehdule;

    for (int i = 0; i < N; i++) //벡터에 입력
    {
        pair<int, int> p1;
        cin >> p1.first >> p1.second;
        scehdule.push_back(p1);
    }

    sort(scehdule.begin(), scehdule.end(), less<>());

    cout << Count_max_schedule(scehdule, N);

    //i번째 회의 시간 기준으로 최대 몇개까지 가능한지 확인해보기
    // i+1의 first시간이 i의 second 시간보다 작아야 한다.
    // pair first 기준으로 sort한번 하고 함수에 넣는게 좋을것
    //이를 비교할 pair 자료형 temp를 반복문 처음 부분에 계속 넣어야한다.
    //최종 출력할 정수형 변수도 필요
    //이중반복문?
}