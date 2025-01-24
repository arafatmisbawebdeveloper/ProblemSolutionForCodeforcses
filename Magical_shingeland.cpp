#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

unordered_set<string> Subcreate(const string s, int k)
{
    unordered_set<string> Shingles;

    for( int i = 0; i <= s.size()-k; i++ ) {
        string shingle = s.substr(i,k);
        Shingles.insert(shingle);
    }

    return Shingles;
}

dl CommonJaccard (const unordered_set<string> a, const unordered_set<string> b)
{
    int com = 0;
    for( auto u : a ) {
        if( b.find(u) != b.end() ) com++;
    }

    int size = a.size() + b.size() - com;

    return static_cast<double>(com) / size;
}

int main()
{
    optimize();

    string s1,s2;
    int k;

    cin>>s1>>s2>>k;

    unordered_set<string> s1sub = Subcreate(s1,k);
    unordered_set<string> s2sub = Subcreate(s2,k);

    dl ans = CommonJaccard(s1sub,s2sub);

    cout<<ans<<endl;

}





