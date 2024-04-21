#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ff first
#define sc second
#define mp make_pair
#define pb push_back
#define pp pop_back
#define nn "\n"



void solve()
{
    ll node,edge;
    cin>>node>>edge;
    vector<pair<ll,pair<ll,ll>>>v;
    for(ll i=0; i<edge; i++)
    {
        ll n,e,w;
        cin>>n>>e>>w;
        v.pb({w,{n,e}});
    }
    sort(v.begin(),v.end());

    for(auto & k:v)
    {
        cout<<"Node1: "<<k.sc.ff<<" Node2: "<<k.sc.sc<<" Weight: "<<k.ff<<nn;
    }

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}