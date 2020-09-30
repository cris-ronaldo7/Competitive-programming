#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long long int T,i,n,c=0,j;
    
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>n;
        c=0;
        if(n==1)
            cout<<"Not prime"<<endl;
        else if (n==2)
            cout<<"Prime"<<endl;
        else{
        for(j=2;j<=sqrt(n);j++)
        {
            if(n%j==0)
                c++;
        }
        if(c==0)
        cout<<"Prime"<<endl;
        else
        cout<<"Not prime"<<endl;
    }}
    return 0;
}
