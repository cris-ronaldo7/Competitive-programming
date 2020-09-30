#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,j,k,c=0,d=0;
    cin >> n;
    int arr[n];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n!=0)
    {
       arr[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(arr[j]==1)
            {
                c=1;
                for(k=j+1;k<i;k++)
                {
                    if( arr[j]==arr[k])
                    {
                        c++;
                        if(c>=d)
                            d=c;
                    }
                    else
                        break;
                }}} 
      d=(c>d)?c:d;
    cout<<d<<endl;
    return 0;
}
