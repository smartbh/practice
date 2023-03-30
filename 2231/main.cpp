#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int n = 0;
    int result = 0;
    cin >> n;

    //to_string(n).length();
    
    for(int i = 1; i<n; i++)
    {
        int sum = 0;
        int temp = i;
        while(temp!=0)
        {
            sum+= temp %10;
            temp/=10;
        }
        if((sum + i) == n)
            {
                cout << i;
                return 0;
            }
    }

    //한개도 없을때
    cout << 0;
}