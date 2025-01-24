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

    while(n--) {
        string s;
        cin>>s;

        if ( s == "abc") cout<<"YES"<<endl;
        else if( s[0] == 'a' OR s[1] == 'b' OR s[2] == 'c') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}





