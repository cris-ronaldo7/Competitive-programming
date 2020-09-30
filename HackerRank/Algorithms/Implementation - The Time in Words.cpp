#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
string s[30];
s[0]=" o' clock";
s[1]="one";s[2]="two";s[3]="three";s[4]="four";s[5]="five";s[6]="six";
s[7]="seven";s[8]="eight";s[9]="nine";s[10]="ten";s[11]="eleven";s[12]="twelve";
s[13]="thirteen";s[14]="fourteen";s[15]="quarter";s[16]="sixteen";
s[17]="seventeen";s[18]="eighteen";s[19]="nineteen";s[20]="twenty";
s[21]="twenty one";s[22]="twenty two";s[23]="twenty three";s[24]="twenty four";
s[25]="twenty five";s[26]="twenty six";s[27]="twenty seven";
s[28]="twenty eight";s[29]="twenty nine";
if(m==0)
return s[h]+s[0];
if(m==1)
return s[m]+" minute past "+s[h];
if(m==30)
return "half past "+s[h];
if(m==15)
return s[m]+" past "+s[h];
if(m==45)
return s[60-m]+" to "+s[h+1];
if(m>30)
return s[60-m]+" minutes to "+s[h+1];
if(m<30)
return s[m]+" minutes past "+s[h];
return "yes" ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
