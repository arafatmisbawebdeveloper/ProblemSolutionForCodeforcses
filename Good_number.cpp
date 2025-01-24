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
    int n,k;
    cin>>n>>k;

    int cnt = 0;

    for ( int i = 0; i < n; i++ ) {
        string s;
        cin>>s;

        bool exist = true;

        for ( int i = 0; i <= k; i++ ) {
                string a = to_string(i);
                if ( s.find(a) == -1 ) {
                      exist = false;
                      break;
                }

            }
            if ( exist ) cnt++;


    }

    cout<<cnt<<endl;

}





