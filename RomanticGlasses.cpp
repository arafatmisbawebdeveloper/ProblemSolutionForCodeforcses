#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        set<ll>st;
        ll esum = 0, osum=0;
        int flag=0;
        for(int i=1;i<=n;i++){
            if(i%2){
                osum+=v[i];
            }
            else{
                esum+=v[i];
            }
            ll diff = osum - esum;
            if(diff==0 || st.count(diff)){
                flag=1;
                break;
            }
            st.insert(diff);
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}






