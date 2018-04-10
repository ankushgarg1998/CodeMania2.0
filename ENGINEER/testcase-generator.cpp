#include<iostream>
#include<cstdlib>
using namespace std;
int main()
    {
    char arr[] = {'0', 'p', 'm', 'c', 'a', 'i', 'e'};
    int t=50, maxlen=10000;
    cout<<t<<"\n";
    while(t--)
        {
        int len = rand()%maxlen + 10;
        for(int i=0; i<len; i++)
            {
            cout<<arr[rand()%7];
            }
        cout<<"\n";
        }
    return 0;
    }