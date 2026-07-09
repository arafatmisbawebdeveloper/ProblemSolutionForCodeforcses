#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
typedef double dl;
typedef long long ll;

void solve()
{
     int n,k,p,m;
    cin>>n>>k>>p>>m;

    vector<int>a(n);
    for(int &x:a) cin>>x;

    deque<int> deck;
    for(int i = 0; i < n; i++) deck.push_back(i);

    int ans = 0;
    int cost = 0;

    while(true){
        int pos = -1;

        for(int i = 0; i < k && i < deck.size();i++){
            if(deck[i] == p-1){
                pos = i;
                break;
            }
        }

        if(pos != -1){
            if(cost + a[p-1] > m) break;

            cost += a[p-1];
            ans++;

            deck.erase(deck.begin()+ pos);
            deck.push_back(p-1);
        }
        else{
            int best = -1;
            int bestCost = 1e9;

            for(int i = 0; i<k && i<deck.size(); i++){
                int idx = deck[i];
                if(a[idx] < bestCost){
                    bestCost = a[idx];
                    best = i;
                }
            }

            if(cost + bestCost > m) break;

            cost += bestCost;
            int card = deck[best];

            deck.erase(deck.begin()+best);
            deck.push_back(card);
        }
    }

    cout<<ans<<endl;
}
int32_t main()
{
    optimize();
    int tc;
    cin>>tc;
    while(tc--) {
        solve();
    }

}
