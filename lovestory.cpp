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
    for(int i = 0; i < n; i++) {
        string s;
        cin>>s;
        int cnt = 0;
        if(s[0]!='c') cnt++;
        if(s[1]!='o') cnt++;
        if(s[2]!='d') cnt++;
        if(s[3]!='e') cnt++;
        if(s[4]!='f') cnt++;
        if(s[5]!='o') cnt++;
        if(s[6]!='r') cnt++;
        if(s[7]!='c') cnt++;
        if(s[8]!='e') cnt++;
        if(s[9]!='s') cnt++;

        cout<<cnt<<endl;
    }

}





