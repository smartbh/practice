#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    //펠린드롬인지 확인하는 걸 푸는 문제
    string word;
    string word2;
    vector<string> str;
    vector<string> str2;

    cin >> word;
    word2 = word;
    reverse(word.begin(),word.end());

    if(word == word2)
        cout << 1;
    else
        cout << 0;
}