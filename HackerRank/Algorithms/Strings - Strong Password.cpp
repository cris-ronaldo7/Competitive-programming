#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string s) {
    unsigned long int i;
    int upper=0,lower=0,special=0,digit=0,answer=0;
    for(i=0;i<n;i++)
    {
        if((int)s[i]-'0'>=0 && (int)s[i]-'0'<=9)
        digit=1;
        else if((int)s[i]>=65 && (int)s[i]<=90)
        upper=1;
        else if((int)s[i]>=97 && (int)s[i]<=122)
        lower=1;
        else 
        special=1;
    }
    if(digit==0)
    answer++;
    if(upper==0)
    answer++;
    if(lower==0)
    answer++;
    if(special==0)
    answer++;

    if(answer+n<6)
    return 6-n;
    else 
    return answer;



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
