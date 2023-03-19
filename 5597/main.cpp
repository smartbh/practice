#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 28; //28명 고정
    vector<int> students(30); //전부 0으로 초기화

    for(int i = 0; i<28; i++)
    {
        int sNum = 0;
        cin >> sNum;
        students[sNum-1] = sNum; // 0아닌 수로 전부 바꾸기
    }

    for(int i = 0; i<students.size(); i++)
    {
        if(students[i] == 0)
            cout << i+1 << endl;
    }

    return 0;
}