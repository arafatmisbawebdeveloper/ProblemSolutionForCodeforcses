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
    int a[5][5];
    int x = 0,y = 0;
    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j++ ) {
            cin>>a[i][j];
            if ( a[i][j] == 1 ) {
                x = i;
                y = j;
            }
        }
    }
    cout<<abs(x-2) + abs(y-2)<<endl;

}





