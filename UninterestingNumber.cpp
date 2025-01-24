#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    string s;
    cin >> s;
    map<char,ll>mp;
    ll sum = 0;
    for(auto it : s){
        mp[it]++;
        sum += (it-'0');
    }
    ll frq2 = min(10ll,mp['2']);
    ll frq3 = min(10ll,mp['3']);
    for(ll i = 0 ; i <= frq3; i++){
        for(ll j = 0 ; j <= frq2 ; j++){
            ll val = i * 6 + j * 2;
            if((sum+val)%9==0){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;

}

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while (tc--) {
       solve();
    }

}





