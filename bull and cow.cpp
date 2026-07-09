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
    int bull=0,cow=0;
    string real,guess;
    cin>>real>>guess;

    for(int i=0;i<4;i++) {
       if(real[i]==guess[i]) bull++;
    }
    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            if(real[i]==guess[j] && i!=j) cow++;
        }
    }

    cout<<bull<<" "<<cow<<endl;
}








