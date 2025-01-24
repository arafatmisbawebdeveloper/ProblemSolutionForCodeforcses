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
        int n;
        cin>>n;
        int current = 1;
        bool turn = true;

        int alice=0,bob=0;

        while(n) {
            if(turn) {
                 if( n >= current ) {
                    alice += current;
                    n-=current;
                    current++;

                    if(n>=current) {
                        bob+=current;
                        n-=current;
                        current++;
                    }
                    else {
                        bob+=n;
                        n = 0;
                    }
                }
                else {
                alice += n;
                n = 0;
               }
              turn = false;
            }

        else {

            if(n>=current) {
                    bob+=current;
                    n-=current;
                    current++;

                if( n >= current ) {
                alice += current;
                n-=current;
                current++;
              }

             else {
                alice+=n;
                n = 0;
            }
        }
            else {
            bob += n;
            n = 0;
           }
          turn = true;

        }

  }
   cout<<alice <<" "<<bob<<endl;
}
}





