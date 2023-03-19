#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int count = 0;
    string sentence;
    getline(cin, sentence); //입력받기

    for(int i = 0; i<sentence.length(); i++)
    {
        if(sentence.length() == 0) //하나도 없을때
        {
            break;
            return 0;
        }
        else
        {
        if(i == 0 && sentence[i] == ' ') //맨 처음 공란일경우
            count = count;
        else if(sentence[i] == ' ')
            count++;
        else if(i == sentence.length()-1 && sentence[i] == ' ') //맨 마지막이 공란일경우
            count--;
        }

    }
    cout << sentence.length() << endl;
    if(sentence[sentence.length()-1] == ' ')
        cout << count;
    else
        cout << ++count;
}