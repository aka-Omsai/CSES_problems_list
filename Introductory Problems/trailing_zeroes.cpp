#include<iostream>
#include<algorithm>
#include<math.h>

#define ll long long

using namespace std;

int main()
{
    ll n,s=0;
    cin>>n;
    if(n<5)
        cout<<0<<endl;
    else{
    while(n>4)
    {
        s+=n/5;
        n=n/5;
    }
    cout<<s;
    }
    return 0;
}
