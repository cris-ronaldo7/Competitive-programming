#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    int answer;
    if(n%2==1 && p==n-1 || n==1)
    return 0;
    if((n-p)/2==0 && n-p!=0)
    answer=min((p/2),(n-p)/2+1);
    else
    answer=min((p/2),(n-p)/2);
    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
