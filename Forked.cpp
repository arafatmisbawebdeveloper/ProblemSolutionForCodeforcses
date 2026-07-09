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

    while ( tc-- ) {
        int a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;

        int dx[] = {a,a,-a,-a,b,b,-b,-b};
        int dy[] = {b,-b,b,-b,a,-a,a,-a};

        set<pair<int,int>>K;
        set<pair<int,int>>Q;

        for ( int i = 0; i < 8; i++ ) {
            K.insert({xk+dx[i],yk+dy[i]});
             Q.insert({xq+dx[i],yq+dy[i]});
        }

        int cnt = 0;
        for ( auto u:K ) {
            if ( Q.count(u)) {
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }

}





