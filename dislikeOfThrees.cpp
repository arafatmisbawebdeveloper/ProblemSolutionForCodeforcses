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
    int T;
    cin>>T;


    while(T--) {
        int k,i = 0;
        cin>>k;

        while(++i) {
            if( i % 3 == 0 OR i % 10 == 3) continue;
            if(--k == 0 ) {
                cout<<i<<endl;
                break;
            }
        }
    }

}





