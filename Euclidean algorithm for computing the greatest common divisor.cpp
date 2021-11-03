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

ll gcd(ll a,ll b){
	return b ? gcd(b,a%b) : a;
}

int main(){
 
  ll x,y;
  cin>>x>>y;
  cout<<gcd(x,y);
  return 0;
}
