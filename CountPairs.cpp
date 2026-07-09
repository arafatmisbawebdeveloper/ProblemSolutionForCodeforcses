#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;


void solve()
 {
     //   int n;
     //   cin>>n;

    // set<pair<int,int>>s;

    // for ( int i = 0; i <= sqrt(n);i++ ) {
    //     for ( int j = 0; j <= sqrt(n);j++ ) {
    //         if( i*i + j*j <= n) {
    //             s.insert({i,j});
    //             s.insert({j,i});
    //             s.insert({-i,j});
    //             s.insert({i,-j});
    //             s.insert({-i,-j});
    //             s.insert({-j,i});
    //             s.insert({j,-i});   
    //             s.insert({-j,-i});  

    //         }
    //     }
    // }
    // cout<<s.size()<<endl;
}
int main()
{
    optimize();
    int mx = 1010;
    int cnt = (int)floor(sqrt(mx));
    vector<int>fre(mx+1,0);

    for ( int i = -cnt; i <= cnt; ++i ) {
        for ( int j = -cnt; j <= cnt; ++j ) {
            int val = i*i + j*j;
            if( val <= mx ) {
                fre[val]++;
            }
        }
    }

    vector<int>prefix(mx+1,0);
    for ( int i = 1; i <= mx; ++i ) {
        prefix[i] = prefix[i-1] + fre[i];
    }

    int tc;
    cin>>tc;
    while(tc--) {
       int n;
         cin>>n;
         if( n < 0) cout<<0<<endl;
           else if (n >= mx) cout << fre[mx] <<endl;
         else cout<<prefix[n]+1<<endl;
    }

}