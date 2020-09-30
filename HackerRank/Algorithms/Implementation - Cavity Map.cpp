#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
vector<string> cavityMap(vector<string> grid) {
long unsigned int i,j;

if(grid.size()==1 || grid.size()==2)
return grid;
for(i=1;i<grid.size()-1;i++)
{
for(j=1;j<grid[0].size()-1;j++)
{
char c=grid[i][j];
if(c!='X' && c>grid[i-1][j] && c>grid[i+1][j] && c>grid[i][j-1] && c>grid[i][j+1])
    {
        grid[i][j]='X';
        if(c==grid[i-1][j] && i-1!=0)
        grid[i-1][j]='X';
        if(c==grid[i+1][j] && i+1!=grid.size()-1)
        grid[i+1][j]='X';
        if(c==grid[i][j-1] && j-1!=0)
        grid[i][j-1]='X';
        if(c==grid[i][j+1] && j+1!=grid.size()-1)
        grid[i][j+1]='X';     
    }
}
}
return grid;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
