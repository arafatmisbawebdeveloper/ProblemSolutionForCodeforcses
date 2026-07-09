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
    ll x,y;
    cin>>x>>y;

    string bin1  = "00000000000000000000000000000000";

    for (int pos = 31; pos >= 0; --pos)
    {
        if (x % 2)
            bin1[pos] = '1';
        x /= 2;
    }

    string bin2  = "00000000000000000000000000000000";
    for (int pos = 31; pos >= 0; --pos)
    {
        if (y % 2)
            bin2[pos] = '1';
        y /= 2;
    }

   string binAns = "11111111111111111111111111111111";
    for ( int i = 0; i < binAns.size(); i++ ) {
        if ( (bin1[i] == '1' && bin2[i] == '1') OR  ( bin1[i] == '0' && bin2[i] == '0' ) ) binAns[i] = '0';
    }



      ll ans = 0;
      ll base = 1;
    for ( int i = binAns.length() - 1; i >= 0; i-- ) {
            if( binAns[i] == '1' ) {
                 ans = ans + base;
            }
       base = base * 2;

    }

  cout<<ans <<endl;

}

