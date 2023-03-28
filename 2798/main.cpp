    #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m = 0;
    //n=갯수, m = 최대합
    int sum = 0;

    vector<int> table;

    cin >> n >> m;

    for(int i = 0; i<n; i++)
    {
        int num = 0;
        cin >> num;
        table.push_back(num);
    }

    sort(table.begin(), table.end(),greater<>()); //내림차순 정렬

    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            for(int k = j+1; k<n; k++)
            {
                if(table[i]+table[j]+table[k] <=m && table[i]+table[j]+table[k] > sum)
                    sum = table[i]+table[j]+table[k];
            }
        }
    }

    cout << sum;
}