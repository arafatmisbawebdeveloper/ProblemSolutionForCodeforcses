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
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        s1 += s2;

        set<char>s;

        for(auto u:s1)
        s.insert(u);
        int c=s.size();
        cout << c - 1 << endl;
    }


}





