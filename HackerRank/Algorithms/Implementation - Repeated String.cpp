#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long counta(string s,long unsigned int m)
{
    long unsigned int i;
    long int answer=0;
    for(i=0;i<m;i++)
    {
        if(s[i]=='a')
        answer++;
    }
    return answer;
}
long repeatedString(string s, long unsigned int n) {
long answer=0;
if(n<s.length())
{
    answer=counta(s,n);
    return answer;
}

if(n>s.length())
{
    answer=counta(s,s.length());
    answer=floor(n/s.length())*answer;
    answer=answer+counta(s,n%s.length());
    return answer;
}
return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
