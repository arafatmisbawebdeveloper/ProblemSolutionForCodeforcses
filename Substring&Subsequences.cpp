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
        string a,b;
        cin>>a>>b;

        int same = 0,cnt = 0;

        for ( int i = 0; i < b.size();i++ ) {
            int now = i;
                cnt = 0;
                for ( int j = 0; j < a.size(); j++ ) {
                    if ( a[j] == b[now]) {
                         cnt++;
                         now++;
                       }
                    same = max(same,cnt);
                }

        }
        cout<<a.size()+b.size()-same<<endl;


    }

}





