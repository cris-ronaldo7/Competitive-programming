#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    int a = (int)s[0]-'0';
    int b = (int)s[1]-'0';
    int c = (a*10 + b%10);
    int i;
    string answer="";
    if (s[8] == 'A') 
    { 
        if (c == 12) 
        { 
            answer=answer+"00";
            for (i=2; i <= 7; i++) 
            answer=answer+s[i]; 
        } 
        else
        { 
            for (i=0; i <= 7; i++) 
                answer=answer+s[i]; 
        } 
    } 
    else
    { 
        if (c == 12) 
        { 
            answer=answer+"12"; 
            for (int i=2; i <= 7; i++) 
                answer=answer+s[i];  
        } 
        else
        { 
            c = c + 12;
            if(c>=20)
            {
                answer=answer+"2";
                c=c%10+48;
                char x=(char)c;
                answer=answer+x;

            } 
            else
            {
                answer=answer+"1";
                c=c%10+48;
                char x=(char)c;
                answer=answer+x;  
            }
            for (int i=2; i <= 7; i++) 
                answer=answer+s[i];  
        } 
    }
    return answer; 

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
