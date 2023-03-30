#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> whiteBoard {"WBWBWBWB",
                                "BWBWBWBW",
                                "WBWBWBWB",
                                "BWBWBWBW",
                                "WBWBWBWB",
                                "BWBWBWBW",
                                "WBWBWBWB",
                                "BWBWBWBW",}; //비교용 화이트 보드
                                
vector<string> blackBoard {"BWBWBWBW",
                            "WBWBWBWB", 
                            "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB",
                            "BWBWBWBW",
                            "WBWBWBWB",}; //비교용 블랙 보드

vector<string> board; //입력받을 보드

int chekc_white(int x, int y) //시작을 백으로 할때, //시작 좌표 x,y
{
    int count = 0;
    for(int i = 0; i<8; i++)
    {
        for(int j = 0; j<8; j++)
        {
            if(board[x+i][y+j] != whiteBoard[i][j])
                count++;
        }
    }

    return count;
}

int chekc_black(int x, int y) //시작을 흑으로 할때
{
    int count = 0;
    for(int i = 0; i<8; i++)
    {
        for(int j = 0; j<8; j++)
        {
            if(board[x+i][y+j] != blackBoard[i][j])
                count++;
        }
    }

    return count;
}

int main()
{
    int N,M;
    int whiteMin,blackMin = 0;
    int answer = 9999999999;
    cin >> N >> M;

    for(int i = 0; i< N; i++)
    {
        string word;
        cin >> word;
        board.push_back(word);
    }
    //문자열 전부 입력

    for(int i = 0; i<=N-8; i++)
    {
        for(int j = 0; j<=M-8; j++)
        {
            whiteMin = chekc_white(i,j);
            blackMin = chekc_black(i,j);
            if(answer > min(whiteMin,blackMin))
                answer = min(whiteMin,blackMin);
        }
    }

    cout << answer;
}