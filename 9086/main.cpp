    #include <iostream>
    #include <string>

    using namespace std;

    int main()
    {
        int n = 0;
        string sentence;
        cin >> n;

        for(int i =0; i<n; i++)
        {
            cin >> sentence;
            if(sentence.length() > 0)
                cout<< sentence[0] << sentence[sentence.length()-1] << endl;
        }
        
        

    }