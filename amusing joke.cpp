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

     string s,s1,j,k;
     bool a=0;
     cin>>s>>s1>>k;
     j =  s + s1;


     sort(j.begin(),j.end());
     sort(k.begin(),k.end());


            if(j==k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}






