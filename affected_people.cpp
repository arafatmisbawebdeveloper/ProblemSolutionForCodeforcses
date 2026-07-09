#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

const int mx = 2e3+123;
int X[mx];
int Y[mx];
bitset<mx>infected;

int distance( int i, int j )
{
    int d = (X[i]-X[j])*(X[i]-X[j]) + (Y[i]-Y[j]) * (Y[i]-Y[j]);
    return d;
}

int main()
{
    optimize();
    int n,k;
    cin>>n>>k;

    for( int i = 0; i < n; i++ ) {
        cin>>X[i]>>Y[i];
    }

     k *= k;

    queue<int>q;
    infected[0] = 1;
    q.push(0);

    while( !q.empty() ) {

        int present = q.front();
        q.pop();

        for ( int i = 0; i < n; i++ ) {
            if( present != i ) {
                int d = distance( present , i );
                 if( d <= k && infected[i] == 0 ) {
                    infected[i] = 1;
                    q.push(i);
                 }
            }
        }

    }

    for ( int i = 0; i < n; i++ ) {
        if( infected[i] == 1) {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }



}





