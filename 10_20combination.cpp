#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ll *sol;
ll *arr;
ll target,flag;
bool check(ll p)
{
    //cout<<p<<"\n";
    if(p>target)
    {
        return false;
    }
    if(p==target)
    {
       return true;
    }
     if(check(p*10)||check(p*20))
    {
        return true;
    }
    else
    {
        return false;
    }
}
ll solve()
{
    cin>>target;
    if(check(1)) cout<<"Yes\n";
    else cout<<"No\n";
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
