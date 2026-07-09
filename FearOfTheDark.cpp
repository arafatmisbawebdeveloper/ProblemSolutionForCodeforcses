#include<bits/stdc++.h> //
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define OR ||
typedef double dl;
typedef long long ll;

void solve()
{
    double px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;

    double Oa = sqrt(ax*ax + ay*ay);
    double Pa = sqrt((px-ax) * (px-ax) + (py-ay) * (py-ay));

    double Ob = sqrt(bx*bx + by*by);
    double Pb = sqrt((px-bx)*(px-bx) + (py-by)*(py-by));

    double x = max(Oa,Pa);
    double y = max(Ob,Pb);

    double r = sqrt((ax-bx)*(ax-bx) + (ay-by)*(ay-by)) / 2;

    double z = max( {min(Oa,Ob),min(Pa,Pb),r});

    double ans = min({x,y,z});

    cout<<setprecision(11)<<ans<<endl;


}

int main()
{
    optimize();
    int tc;
    cin>>tc;

    while( tc-- ) {
        solve();
    }

}





