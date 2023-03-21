#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;

    vector<int> s(n);

    for(int i = 0; i<n; i++)
        s[i] = i+1;

    for(int i = 0; i<m; i++)
    {
        int from,to,mid;
        cin >> from >> to >> mid;
        //from~mid, mid~to
        rotate(s.begin()+(from-1), s.begin()+(mid-1),s.begin()+to);
    }

    for(auto& n : s)
        cout << n << ' ';

}