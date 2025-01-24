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
    map<string,int>mp;

    for( int i = 0; i < n; i++ ) {
        string s;
        cin>>s;
        mp[s]++;
        if ( mp[s] == 1 ) cout<<"OK"<<endl;
        else cout<<s<<mp[s]-1<<endl;
    }

}





