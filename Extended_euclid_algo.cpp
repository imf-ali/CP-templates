#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i,a,b)	for(int i=a;i<=b;i++)
#define mod 10000007
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using u64 = uint64_t;
using u128 = __uint128_t;

int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main(){
 
  ll a,b,x,y;
  cin>>a>>b>x>>y;
  
  cout<<gcd(a,b,c,d)<<endl;
  return 0;
}
