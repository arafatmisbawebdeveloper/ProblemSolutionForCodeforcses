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
    int t;
    cin>>t;
    while(t--) {
        ll n;
        ll start = 1;
        cin >> n;

        ll count;
        count=(n+1)/2;
        cout<<count<<endl;
        ll end=n*3;
        for(int i=0;i<count;i++){
        cout << start << " " << end << endl;
        start+=3;
        end-=3;
        }
    }

}





