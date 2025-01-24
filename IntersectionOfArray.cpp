#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        sort(nums1.begin(),nums1.end());
       int l1 = unique(nums1.begin(),nums1.end()) - nums1.begin();

        sort(nums2.begin(),nums2.end());
        int l2 =  unique(nums2.begin(),nums2.end()) - nums2.begin();

        if ( l1 > l2 ) {
            for ( int i = 0; i < nums1.size();i++ ) {
            int l = nums2.front();
            int r = nums2.back();
            while( l< r) {
                int mid = l + (r-l)/2;
                if ( mid == nums1[i]) res.push_back(mid);
                else if (mid > nums1[i]) l = mid + 1;
                else r = mid -1;
            }
        }

        }

        else {
            for ( int i = 0; i < nums2.size();i++ ) {
            int l = nums1.front();
            int r = nums1.back();
            while( l< r) {
                int mid = l + (r-l)/2;
                if ( mid == nums2[i]) res.push_back(mid);
                else if (mid > nums2[i]) l = mid + 1;
                else r = mid -1;
             }
           }
        }

        return res;
    }

int main()
{
    optimize();
    vector<int>nums1 = {1,2,2,1};
    vector<int>nums2 = {2,2};

    vector<int>result = intersection(nums1,nums2);

    for ( auto u:result ) cout<<u<<" ";
    cout<<endl;

}





