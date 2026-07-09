#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;

    vector<string> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    string s = "";

    for(int i = 0; i < n; i++) {
        string front = a[i] + s;
        string back  = s + a[i];

        if(front < back)
            s = front;
        else
            s = back;
    }

    cout << s << endl;
}

int32_t main()
{
    optimize();
    int tc;
    cin >> tc;
    while(tc--) {
        solve();
    }
}
