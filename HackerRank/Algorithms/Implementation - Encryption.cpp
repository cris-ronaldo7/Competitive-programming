#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s)
{ 
s.erase(remove(s.begin(), s.end(), ' '), s.end());
int a=floor(sqrt(s.length()));
int b=ceil (sqrt(s.length()));
while((a*b)<s.length())
a++;
int i,j,k=0;
char arr[a][b];
for(i=0;i<a;i++)
for(j=0;j<b;j++)
arr[i][j]=' ';


for(i=0;i<a;i++)
{
    for(j=0;j<b;j++)
    {
        if(k>=s.length())
        break;
        arr[i][j]=s[k];k++;
    }
    if(k>=s.length())
    break;
}

/*for(i=0;i<a;i++)
{
    for(j=0;j<b;j++)
    cout<<arr[i][j];
    cout<<endl;
}*/
s="";
for(i=0;i<b;i++)
{
    for(j=0;j<a;j++)
    {
        if(arr[j][i]==' ')
        break;
        else
        s=s+arr[j][i];
    }
    if(i!=b-1)
    s=s+' ';
}
return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
