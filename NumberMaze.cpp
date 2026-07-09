#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

map<string,vector<string>>mp;


void solve()
{
    int x,y;
    string s;
    cin>>s;
    cin>>x>>y;
    x--,y--;

    string a = mp[s][x];
    string b = mp[s][y];

    x = 0, y = 0;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]){
            x++;
        }
        else{
            y++;
        }
    }
    cout<<x<<"A"<<y<<"B"<<endl;

}
int main()
{
    optimize();
    int tc;
    cin>>tc;
    vector<string>str = {"12","123","1234"};
    for( auto x:str){
        string tmp = x;
        do{
            mp[x].push_back(tmp);
        }
        while(next_permutation(tmp.begin(),tmp.end()));
    }
    while(tc--) {
        solve();
    }

}