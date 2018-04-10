#include<iostream>
using namespace std;
int main()
    {
    int t;
    cin>>t;
    while(t--)
        {
        string s;
        long int now = 0, less = 0;
        cin>>s;
        for(auto x: s)
            {
            switch(x)
                {
                case '0':   now -= 10;
                            break;
                case 'p':   now += 90;
                            break;
                case 'm':   now += 40;
                            break;
                case 'c':   now += 190;
                            break;
                case 'a':   now -= 60;
                            break;
                case 'i':   now -= 110;
                            break;
                case 'e':   now -= 160;
                            break;
                }
            less = min(less, now);
            }
        cout<<less*-1<<"\n";
        }
    return 0;
    }