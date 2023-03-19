#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int time = 0;
    cin >> s;

    //1 = 2초, 옆 숫자 갈때마다 1초씩 늘어남
    //2 = 3초, 3 = 4초, 4 = 5초, 5 = 6초 
    //6 = 7초, 7 = 8초, 8 = 9초, 9 = 10초
    //1을 제외한 각 숫자마자 알파벳 세개씩 존재

    for(int i = 0; i< s.length(); i++)
    {
        switch (s[i])
        {
            //2
        case 'A':
        case 'B':
        case 'C':
            time+=3;
            break;
            //3
        case 'D':
        case 'E':
        case 'F':
            time+=4;
            break;
            //4
        case 'G':
        case 'H':
        case 'I':
            time+=5;
            break;
            //5
        case 'J':
        case 'K':
        case 'L':
            time+=6;
            break;
            //6
        case 'M':
        case 'N':
        case 'O':
            time+=7;
            break;
            //7
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            time+=8;
            break;
            //8
        case 'T':
        case 'U':
        case 'V':
            time+=9;
            break;
            //9
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            time+=10;
            break;
        }
    }

    cout << time;
}