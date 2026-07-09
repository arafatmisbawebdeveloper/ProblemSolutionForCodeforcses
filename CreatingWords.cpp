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
    while(tc--) {
        string a,b;
        cin>>a>>b;
        char tmp = a[0];
        a[0] = b[0];
        b[0] = tmp;
        cout<<a<<" "<<b<<endl;
    }

}





