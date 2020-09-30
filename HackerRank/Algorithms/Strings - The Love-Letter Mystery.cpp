#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {
unsigned int i,l=s.length();
int answer=0;
if(l%2==1)
{
i=l/2+1;
while (i<l) {
    answer=answer+abs((int)s[i]-(int)s[l-1-i]);
    i++;
}
}
else 
{
i=l/2;
while (i<l) {
answer=answer+abs((int)s[i]-(int)s[l-1-i]);
i++;
}
}
return answer;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
