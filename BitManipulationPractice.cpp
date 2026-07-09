#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void printBinary(int num)
{
    for ( int i = 7; i >= 0; i-- ) {
        cout<< ((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
    optimize();
    printBinary(8);


}




