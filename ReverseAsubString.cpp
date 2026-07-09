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
    string s;
    cin>>s;
    string r = s;

    sort(r.begin(),r.end());

    if ( r == s ) cout<<"NO"<<endl;
    else {
        for ( int i = 1; i < n; i++) {
            if ( s[i-1] > s[i]) {
                cout<<"YES"<<endl;
                cout<<i<< " "<<i+1<<endl;
                break;
            }
        }
    }

}





