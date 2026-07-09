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

    while( tc-- ) {
        int n,a,q;
        cin>>n>>a>>q;
        int p = 0;
        int cnt = a;
        bool done = false;

        for ( int i = 0; i < q; i++ ) {
            char c;
            cin>>c;
            if ( c == '+') {
                p++;
                cnt++;
                if ( cnt == n ) done = true;
            }
            else cnt--;


        }

//        if ( a + p > n ) cout<<"YES"<<endl;
//        else if ( a + p == n ) cout<<"MAYBE"<<endl;
//        else cout<<"NO"<<endl;

        if ( done OR a == n) printf("YES\n");

	    else if ( a+p >= n )
		    printf("MAYBE\n");

	    else
		printf("NO\n");
    }

}





