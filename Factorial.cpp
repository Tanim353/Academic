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

ll tanim(int a)
{
    if (a == 0)
        return 1;
    ll k = a * tanim(a - 1);
    return k;
}

void solve()
{
    ll a;
    cin >> a;
    ll result = tanim(a);
    cout << result << nn;
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
