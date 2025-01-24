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
    int k,r,c=1;
    cin>>k>>r;
    int b=k;

    while(1) {

        if(k%10==0 OR k%10==r) break;
        else {
                k+=b;
        c++;
    }
 }
    cout<<c<<endl;

}





