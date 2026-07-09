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
    int n;
    cin>>n;
    vector<int>cnt(30,0);

    for( int i = 0; i < n; i++ ) {
        int t,v;
        cin>>t>>v;
        if ( t == 1 ) {
            cnt[v]++;
        }
        else {
            int i = 29;
            while ( i >= 0 ) {
                if ( cnt[i] != 0 ) {
                    int k = v / pow(2,i);
                    int mn = min ( k,cnt[i]);
                    v -= mn * pow(2,i);
                }
                i--;
            }
            if ( v == 0 ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }

    }

}





