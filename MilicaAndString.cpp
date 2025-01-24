#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int sA = 0, sB = 0;

        for ( auto u : s ) {
            if ( u == 'A') sA++;
            else if ( u == 'B') sB++;
        }

        if ( sB == k ) {
            cout<<0<<endl;
            return;
        }

        for ( int i = 0; i < n; i++ ) {
            if ( s[i] == 'B') sB = sB-1;

            if ( i + 1 + sB == k ) {
                cout<<1<<endl<<i+1<< " "<<'B'<<endl;
                return;
            }
            else if ( sB == k ) {
                cout<<1<<endl<<i+1<< " "<<'A'<<endl;
                return;
            }
        }
    }


int main()
{
    optimize();
    int tc;
    cin>>tc;

    while ( tc-- ) {
         solve();
    }
}

