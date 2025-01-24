#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

    int n,s1,s2;
    vector<int>v;

    void solve() {
	v.clear();

	int d = s1 - s2;
	for (; s2 >= d; s2 -= d)
		v.push_back(d);

	if (s2) v.push_back(s2);

	for (int i = 0; i < v.size() && v.size() + 1 < n;) {
		if (v[i] == 1) {
		    ++i;
		    continue;
		}
		--v[i];
		v.push_back(1);
	}

	v.push_back(d);
}

      int main()
       {
        int t; cin >> t;
        while (t--) {
		cin >> n >> s1 >> s2;
		solve();
		//sort(res.begin(), res.end());
		for (int x: v)
			cout << x << ' ';
		cout << endl;
	}
}

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int a;
//    cin>>a;
//    while(a--)
//        {
//            int n ,s ,r;
//             cin>>n>>s>>r;
//             cout<<s-r<<" ";
//           for (int i = 0; i < n-1; i++)
//               {
//                 cout<<(r+i)/(n-1)<<" ";
//               }
//           cout<<endl;
//         }
//
//}
//







