#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string nameScoreGrade;
    string clsName;
    double score = 0;
    double totalScore = 0; //받은 점수의 총합
    double sum = 0; //학점의 총합
    string grade;


    //입력부분, 공백으로 구분되어 주어진다? getline 써야함
    for (int i = 0; i < 20; i++)
    {
        getline(cin, nameScoreGrade);
        istringstream iss(nameScoreGrade);

        vector<string> words;

        string word;
        while (getline(iss, word, ' ')) //iss에서 word로 ' ' 으로 구분해서
        {
            words.push_back(word);
        }

        //천번째 : 과목이름, 두번째 점수, 세번째 등급
        //과목이름은 쓸모가 없다.
        score = stod(words[1]);
        totalScore += score;
        
        if (words[2] == "P")//만약 P등급이면
        {
            totalScore -= score;
            continue; //그냥 넘겨라
        }
        else if (words[2] == "A+")
        {
            sum += score * 4.5;
        }
        else if (words[2] == "A0")
        {
            sum += score * 4.0;
        }
        else if (words[2] == "B+")
        {
            sum += score * 3.5;
        }
        else if (words[2] == "B0")
        {
            sum += score * 3.0;
        }
        else if (words[2] == "C+")
        {
            sum += score * 2.5;
        }
        else if (words[2] == "C0")
        {
            sum += score * 2.0;
        }
        else if (words[2] == "D+")
        {
            sum += score * 1.5;
        }
        else if (words[2] == "D0")
        {
            sum += score * 1.0;
        }
        else if (words[2] == "F")
        {
            sum += score * 0.0;
        }

    }
    cout << fixed;
    cout.precision(6);
    cout << sum/totalScore << endl;
}