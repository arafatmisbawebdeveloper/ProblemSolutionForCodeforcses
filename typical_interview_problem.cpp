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
    while(tc--) {
         ll f = 0, size;
         cin>>size;
         string input;
         cin>>input;
         string qus = "FBFFBFFB";
        /* for(int i = 1; i <= 50; i++) {
            if(i%3==0) qus+="F";
            if(i%5==0) qus+="B";
         }*/
         while(qus.size() < 100) {
            qus+="FBFFBFFB";
         }

         for(int i = 0; i < 8; i++) {
            //if(qus.substr(i,size)== input) {
            if(qus.find(input)!= -1) {
                f = 1;
                break;
            }
         }

         if(f==1) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;

    }


}





