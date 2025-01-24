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
    string s;
    cin>>s;

    if ( s[3] >= '6' ) s[3] = '0';

    if ( n == 12 ) {
       if(s[0] == '0') {

        if (s[1] > '9' OR s[1] == '0') {
            s[1] = '1';
        }
    }

    if ( s[0] > '0' ) {
            if ( s[0] > '1' ) {
                    if ( s[1] == '0') s[0] = '1';
            else
                s[0] = '0';
            }
            else {
                if ( s[1] > '2' ) s[1] = '0';
            }

    }
    cout<<s<<endl;
    }


    if ( n == 24 ) {

         if ( s[0] > '2' ) s[0] = '0';


            else if ( s[0] == '2' && s[1] > '3') {
               s[1] = '0';
           }

            cout<<s<<endl;
        }
    }






