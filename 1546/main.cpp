#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int max = 0;
    int result = 0;

    vector<int> score;
    vector<int> nScore;
    
    cin >> N;

    for(int i = 0; i <N; i++)
    {
        int s = 0;
        cin >> s;
        score.push_back(s);
    }
    
    for(int i = 0; i< score.size(); i++)
    {
        if(score[i] > max)
            max = score[i];
    }

    for(int i = 0; i< score.size(); i++)
    {
        if(score[i] < max) // 점수/M*100
            nScore.push_back(score[i]/max * 100);
        else
            nScore.push_back(score[i]);
    }

    for(int i = 0; i< nScore.size(); i++)
    {
        result+=nScore[i];
    }

    cout << result << endl;
    
    
    return 0;
}