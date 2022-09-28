#include 	         <bits/stdc++.h>
using   namespace    std;
#define fileread     freopen("input.txt", "r", stdin);
#define ll           long long
#define ld           long double
#define I            int
#define d            double
#define pb           push_back
#define inarray(arr,n) for(ll i=0;i<n;i++ )cin>>arr[i]
#define fasti_o      ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define sortv(x)     x.begin(),x.end()
#define sortarr(n)   arr,arr+n;
#define mp           make_pair
#define f            first
#define s            second
#define ub           upper_bound
#define lb           lower_bound
#define say_y        cout<<"YES"<<"\n"
#define say_n        cout<<"NO"<<"\n"
#define endl         cout<<"\n"
#define for0(n)      for(ll i=0;i<n;i++)
#define for1(n)      for(ll i=1;i<n;i++)
#define co(x)        cout << x << " ";
#define TC           ll T;cin>>T;while(T--)
#define tc           ll t;cin>>t;while(t--)
#define fr(i,s,e)    for(int i=s;i<e;i++)
#define fe(x,v)      for(auto& x : v)
typedef vector<ll>   vll;
typedef vector<I>    vi;
typedef pair<ll,ll>  pairll;
typedef pair<I,I>    pairi;
typedef map<ll,ll>   mapll;
const int MAXN = 1e5 + 10;
const long long mod=1000000007;
 
bool comp(pairll a,pairll b){
	return a.f<b.f;
}
const ll con=200005;
vll adj[con];
const int N = 10000000;
ll ans=0;
ll n,l;
 

 
int main(){  
	fasti_o;
	tc{
    	int n;//number of workers n=5;
        cin>>n;
        vector<int>m(n,0);// n size vector for n workers where every workers days set will set
	    for(int i=0;i<n;i++)
        {
            int mask=0;
            int number_of_days_each_workers;
            cin>>number_of_days_each_workers;
            for(int i=0;i<number_of_days_each_workers;i++)
            {
               int day;
               cin>>day;
               mask= (mask| (1<<day));
            }
            m[i]=mask;//ith workers masking value in decmial kept into vector mask;
        }
        int max_days=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int intersection=(m[i]& m[j]);// two workers er common days set hoy;
                int commondays= __builtin_popcount(intersection);
                max_days=max(max_days,commondays);
                
            }
        }
        cout<<max_days;
    }
	return 0;
}  