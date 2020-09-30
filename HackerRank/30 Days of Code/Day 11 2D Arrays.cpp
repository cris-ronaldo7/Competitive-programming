#include <bits/stdc++.h>
#include<algorithm>

using namespace std;
int main()
{
    int sum[15],h=0,max=0,i,j,temp=0;
    vector<vector<int>> arr(6);
    for ( i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for ( i = 0; i < 4; i++) {
        for ( j = 0; j < 4; j++) {
            sum[h]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            h++;}}

    for( i=0;i<=h;i++)
    {
        for( j=0;j<=h;j++)
        {
            if(sum[i]>sum[j])
            {
                temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp;
            }
        }
    }
cout<<sum[1];
    
    return 0;
}
