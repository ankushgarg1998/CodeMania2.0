#include<iostream>
#include<vector>
using namespace std;

bool choco(vector<int> &a, int start, int sum1, int sum2)
    {
    bool ans = false;
    if(start >= a.size())
        {
        // cout<<sum1<<" "<<sum2<<"\n";
        if(sum1 == sum2)
            return true;
        else
            return false;
        }
    if(a[start]%7 == 0)
        ans = ans | choco(a, start+1, sum1 + a[start], sum2);
    else if(a[start]%5 == 0)
        ans = ans | choco(a, start+1, sum1, sum2 + a[start]);
    else
        ans = ans | choco(a, start+1, sum1 + a[start], sum2) | choco(a, start+1, sum1, sum2 + a[start]);
    return ans;
    }

int main()
    {
    int t, N;
    cin>>t;
    while(t--)
        {
        cin>>N;
        vector<int> a(N);
        for(int i=0; i<N; i++)
            cin>>a[i];
        if(choco(a, 0, 0, 0))
            cout<<"true";
        else
            cout<<"false";
        cout<<"\n";
        }
    }