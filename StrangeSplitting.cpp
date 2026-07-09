#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int main()
{
    optimize();
    int tc;
    cin>>tc;
    while (tc--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for ( int i = 0; i < n; i++ ) cin>>v[i];
        if ( v[0] == v[n-1]) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            string s(n,'B');
            s[1] = 'R';
            cout<<s<<endl;
        }
    }
}





