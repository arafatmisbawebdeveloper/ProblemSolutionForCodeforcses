#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||

typedef double dl;
typedef long long ll;

void solve()
{
     string p,s;
     cin>>p>>s;
     bool ans = true;
     int i = 0,j = 0;

      while( i < p.size() && j < s.size()) {
        if( i == p.size() || j == s.size() || p[0] != s[0])  {
                cout<<"NO"<<endl;
                return;
       }

            while( i < p.size() && p[i] == p[0] ) i++;

            while( j < s.size() && s[j] == s[0] ) j++;

              if ( i > j || (j > i*2))  {
                cout<<"NO"<<endl;
                return;
           }
      }
     cout<<"YES"<<endl;
     return;

    //cout<<"same1 "<<same1<<"same2 "<<same2<<endl;
}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    while( tc-- ) {
       solve();
    }

}





