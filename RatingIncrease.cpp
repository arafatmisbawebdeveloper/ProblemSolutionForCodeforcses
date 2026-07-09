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
        string s,s2 = "",s1 = "";
        cin>>s;

        int i = 1;
        s1 += s[0];

        while ( i < s.size() && s[i] == '0') {
            s1 += s[i];
            i++;

        }

        if ( i == s.size()) {
            cout<<-1<<endl;
            continue;
        }

        s2 = s.substr(i,s.size()-i);
        int a = stoi(s1);
        int b = stoi(s2);
        if ( a >= b ) {
            cout<<-1<<endl;
            continue;
        }
        else
        cout<<s1<<" "<<s2<<endl;

    }

}





