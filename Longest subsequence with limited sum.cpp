/*You are given an integer array nums of length n, and an integer array queries of length m.

Return an array answer of length m where answer[i] is the maximum size of a subsequence that you can take from nums such that the sum of its elements is
less than or equal to queries[i].

A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.
Input: nums = [4,5,2,1], queries = [3,10,21]
Output: [2,3,4]*/




#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

int main()
{
    optimize();
    int n,m;
    cin>>n>>m;
    vector<int>qus(n);
    vector<int>sum(n+1);
    vector<int>query(m);
    vector<int>ans;

    for(int i = 0;i < n; i++) cin>>qus[i];
    for(int i = 0;i < m; i++) cin>>query[i];

    sort(qus.begin(),qus.end());

    for(int i = 1;i <= n; i++) {
            sum[i] = sum[i-1] + qus[i-1];

    }

   for(int i=0;i<m;i++)
        {
            int x = query[i];
             ans.push_back(upper_bound(sum.begin(),sum.end(),x)-sum.begin());
        }

    for(auto u:ans) cout<<u-1<<" ";

}





