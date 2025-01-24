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

//    while( tc-- ) {
//        string s;
//        cin>>s;
//        string ans;
//
//        for ( int i = 0; i < s.size(); i++) {
//                ans += s[i];
//            if ( s[i] == 'b') {
//                    for ( int i = ans.size()-2; i>=0 ; i-- ) {
//                        if (islower(ans[i])) {
//                             ans.erase(ans.begin() + i);
//                             break;
//                        }
//                    }
//                    ans.erase(ans.end()-1);
//
//            }
//            if ( s[i] == 'B') {
//                for ( int i = ans.size()-2; i >= 0 ; i-- ) {
//                        if (isupper(ans[i])) {
//                             ans.erase(ans.begin() + i);
//                             break;
//                        }
//                    }
//                    ans.erase(ans.end()-1);
//            }
//        }
//        cout<<ans<<endl;
//    }


      while ( tc-- ) {
        string s;
        cin>>s;
        vector<char>ans;
        int lw = 0, cp = 0;
        int n = s.size();

        for ( int i = n-1; i >= 0; i-- ) {
            if ( s[i] == 'B') cp++;
            else if ( s[i] == 'b' ) lw++;
            else if ( s[i] >= 'a' && s[i] <= 'z' ) {
                if ( lw == 0 ) ans.push_back(s[i]);
                else lw--;
            }
            else if ( s[i] >= 'A' && s[i] <= 'Z' ) {
                if ( cp == 0 ) ans.push_back(s[i]);
                else cp--;
            }
        }
        for ( int i = ans.size()-1; i >= 0; i-- ) cout<<ans[i];
        cout<<endl;
      }

}





