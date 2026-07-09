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
    int n,m;
    cin>>n>>m;

    map<string,string>mp;

    for ( int i = 0; i < n; i++ ) {
        string name,ip;
        cin>>name>>ip;
        mp[ip] = name;
    }

    for ( int i = 0; i < m; i++ ) {
        string name,ip;
        cin>>name>>ip;
        ip.erase(ip.end() - 1);
        cout<<name<< " "<<ip<<';'<<" #"<<mp[ip]<<endl;
    }

}





