#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
int leap(int n)
{
    if(n<1917 && n%4==0)
    return 1;
    if(n>1918 && n%400==0)
    return 1;
    if(n>1918 && (n%400==0 || (n%4==0 && n%100!=0)))
    return 1;
    return 0;
}
string dayOfProgrammer(int year) {
string answer="26.09.1918";
if (year==1918)
return answer;
if(leap(year)==0)
{
answer="13.09."+to_string(year);
}
else
{
answer="12.09."+to_string(year);
}
return answer;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}