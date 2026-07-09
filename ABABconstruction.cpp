#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

void solve()
{
   int n;cin>>n;
    string s;cin>>s;
    string org="";
    for(int i=0;i<n;i++){
        if(i%2==0)org+='a';
        else org+='b';
    }
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            if(org[l]=='a')l++;
            else if(org[r]=='a')r--;
            else{
                cout<<"NO"<<endl;
                return;
            }
        }else if(s[i]=='b'){
            if(org[l]=='b')l++;
            else if(org[r]=='b')r--;
            else{
                cout<<"NO"<<endl;
                return;
            }
        }else{
            if(i+1<n){
                if(s[i+1]=='?')l++;
                else if(s[i+1]=='a'){
                    if(org[l]=='a')r--;
                    else if(org[r]=='a')l++;
                    else l++;
                }else if(s[i+1]=='b'){
                    if(org[l]=='b')r--;
                    else if(org[r]=='b')l++;
                    else l++;
            }
        }
    }
    }
    if(l>=r)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


int32_t main()
{
    optimize();
    int tc;
    cin >> tc;
    while (tc--) solve();
}
