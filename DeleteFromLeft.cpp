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
    string s1,s2;
    cin>>s1>>s2;

    ll i = 0;
    ll a = s1.size();
    ll b = s2.size();

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    for (  i = 0; i < a; i++ ) {
        if ( s1[i] != s2[i]) break;
    }

//    int cnt=0,i=s1.size()-1,j=s2.size()-1;
//           for(;i>=0 && j>=0;i--,j-- ){
//               if(s1[i]!=s2[j])
//                break;
//           }


    //ll ans = i+j+2;
    ll ans = a+b - (i)*2;

    cout<<ans<<endl;

}





