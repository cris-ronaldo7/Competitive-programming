#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,j,i,k=0,temp=0;
    cin >> n;
    vector<int> a(n);
    for( i = 0; i < n; i++){
    	cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                k++;
            }
        }
    }
    
    cout<<"Array is sorted in "<<k<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;

    
    // Write Your Code Here
    return 0;
}