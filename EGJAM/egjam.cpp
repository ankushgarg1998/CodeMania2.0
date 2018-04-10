#include<iostream>
using namespace std;

int main()
    {
    int t, m, n;
    cin>>t;
    while(t--)
        {
        int v[1000][1000] = {0};
        cin>>m>>n;
        int count = 0;
        // fill((int*)a, (int*))
        for(int i=1; i<=m; i++)
            {
            for(int j=1; j<=n; j++)
                cin>>v[i][j];
            }
        for(int i=1; i<=m; i++)
            {
            for(int j=1; j<=n; j++)
                {
                if(v[i][j] == 1)
                    ++count;
                else
                    {
                    if(v[i-1][j-1]==1 || v[i-1][j]==1 || v[i-1][j+1]==1 || v[i][j-1]==1  || v[i][j+1]==1 || v[i+1][j-1]==1 || v[i+1][j]==1 || v[i+1][j+1]==1)
                        ++count;
                    }
                }
            }
        cout<<count<<"\n";
        }
    return 0;
    }