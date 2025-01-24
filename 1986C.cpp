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
        int n,m;
        cin>>n>>m;

        string s;
        char a;
        cin>>a;
        getline(cin,s);
         s = a + s;

         vector<int>v(m);
        for ( int i = 0; i < m; i++ ) {
            cin>>v[i];
        }

        string c;
        char b;
        cin>>b;
        getline(cin,c);
        c = b+c;
        sort( c.begin(),c.end());

        sort(v.begin(),v.end());

        int sz = unique(v.begin(),v.end()) - v.begin();

        int j = 0;

        for ( int i = 0; i < sz; i++ ) {
            s[v[i]-1] = c[j];
            j++;
        }
        cout<<s<<endl;
    }
}





