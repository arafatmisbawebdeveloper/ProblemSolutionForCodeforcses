#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int solve(int x)
{
    int ret = 0;
   if( x != 0)
     ret = solve(x/10) + x % 10;
   return ret;
}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while(tc--) {
        int x,k;
        cin>>x>>k;

        while( solve(x) % k != 0 ) {
            x++;
        }
        cout<<x<<endl;
    }

}





