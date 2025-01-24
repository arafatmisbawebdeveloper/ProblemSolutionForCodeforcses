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
    int T;
    cin>>T;

    while(T--) {
        int  n;
        cin>>n;

        int d = n / 3;
        //cout<<d<<endl;
        if ( n % 3 == 0 ) {
            cout<<d<< " "<<d<<endl;
        }
        else if(n % 3 == 1){

            cout<<d+1<<" "<<d<<endl;

        }
        else {
            cout<<d<< " "<<d+1<<endl;
        }
    }

}





