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
    int tc;
    cin>>tc;
    while (tc--) {
        int n;
        cin>>n;
        vector<int>v(n),chk(n);
        for ( int i = 0; i < n; i++ ) {
            cin>>v[i];
        }
        bool flag = 1;
        int cnt = 0;
      sort(v.begin(),v.end());
      //cout<<"TEST CASE "<<tc<<endl;
        for (int i = 0; i < n; i++)
        {
            if (chk[i] == 0)
            {
                ++cnt;
                if (cnt > 2)
                {
                    flag = 0;
                    continue;
                }
                for (int j = i; j < n; j++)
                {
                    if (v[j] % v[i] == 0)
                        chk[j] = 1;
                }
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}





