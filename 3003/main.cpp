#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> s(6);
    vector<int> chess = {1,1,2,2,2,8};

    for(int i = 0; i<s.size(); i++)
    {
        int n = 0;
        cin >> n;
        s[i] = n;
    }

    for(int i = 0; i<s.size(); i++)
    {
        // 1 1 2 2 2 8
        cout << chess[i] - s[i] << ' ';
    }
    
}