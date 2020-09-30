#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s,a,b;
    
    int T,l,i,j;
    cin>>T;
    for(i=0;i<T;i++)
    {
        getline(cin>>ws,s);
        int l=s.length();
        for(j=0;j<l;j++)
        {
            if(j%2==0 || j==0)
                a=a+s[j];
            else
                b=b+s[j];
        }
        cout<<a<<" "<<b<<endl;
        a.clear();
        b.clear();
    }
    return 0;
}
