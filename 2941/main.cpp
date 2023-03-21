#include <iostream>
#include <string>

using namespace std;

int main()
{
    //크로아티아 알파벳 8가지
    //c=, c-, dz=, d-, lj, nj, s=, z=
    //얘들은 각각 하나의 알파벳으로 분류한다
    string word;
    int num;

    cin >> word;
    num = word.size();

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == '-')
        {
            if (word[i - 1] == 'c' || word[i - 1] == 'd')
                num--;
        }

        else if (word[i] == '=')
        {
            if (word[i - 1] == 'z' && word[i - 2] != 'd')
                num--; //z=일때만
            else if (word[i - 1] == 'z' && word[i - 2] == 'd')
                num-=2; //dz= 일때
            else if (word[i - 1] == 's')
                num--;
            else if (word[i - 1] == 'c')
                num--;
        }

        else if (word[i] == 'j')
            if (word[i - 1] == 'l' || word[i - 1] == 'n')
                num--;
    }

    cout << num;
}