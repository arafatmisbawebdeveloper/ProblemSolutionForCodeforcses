#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 1e5+123;
int a[mx];

int main()
{
    optimize();
    char single_word;
    string s,c;
    cin>>s;
    int i,cnt=0,x=26,n;

    for(i=0;i<s.size();i++) {
            a[s[i]-'A']++;
    }

    for(i=0;i<26;i++) {
        if(a[i]%2==1) {
            cnt++;
            x = i;
        }
    }

    if(cnt>1) cout<<"NO SOLUTION"<<endl;
    else {
            for(i=0;i<26;i++) {
                if(a[i]>0 && i!=x) {
                n = a[i]/2;
              while(n--) c+='A'+i;
           }
        }
       cout<<c;

    while(a[x]--) single_word = 'A'+x;
    cout<<single_word;
    reverse(c.begin(),c.end());
    cout<<c<<endl;

}
}





