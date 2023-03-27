#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    vector<bool> alpha(26, false); //26개 벡터 false 초기화
    //bool alpha[26] = {false,}; //26개의 알파벳 그룹체킹
    //그룹 체커
    int num = 0;
    int answer = 0;
    string inPut;

    cin >> num;

    for (int i = 0; i < num; i++)
    {

        cin >> inPut;

        for (int j = 0; j < inPut.length(); j++)
        {
            if (inPut.length() > 1) //글자가 여러개
            {
                if (!alpha[(inPut[j] - 97)]) //false일때
                //97을빼면 아스키코드로 알파벳 순서가 나옴
                {
                    alpha[(inPut[j] - 97)] = true;
                }
                else //만약 true인데
                {
                    //n-1과 문자가 다를시 = 그룹 단어 아님
                    if (inPut[j] != inPut[j - 1])
                    {
                        fill(alpha.begin(), alpha.end(), false);
                        break;
                    }

                }

                //위의 모든 과정을 다 통과시
                if (j == inPut.length() - 1)
                {
                    fill(alpha.begin(), alpha.end(), false);
                    answer++;
                }

            }
            else //글자가 한개일때
            {
                fill(alpha.begin(), alpha.end(), false);
                answer++;
            }
        }
    }

    cout << answer;
}