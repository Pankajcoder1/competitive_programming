/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef map<ll,ll> ml;
typedef set<char>sc;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 1000000007
#define phi 1.618
/* Bit-Stuff */
#define get_set_bits(a) (__builtin_popcount(a))
#define get_set_bitsll(a) ( __builtin_popcountll(a))
#define get_trail_zero(a) (__builtin_ctz(a))
#define get_lead_zero(a) (__builtin_clz(a))
#define get_parity(a) (__builtin_parity(a))
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define cc ll test;cin>>test;while(test--)
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// function

ll power(ll x,ll y)
{
	ll res=1;
	// x=x%mod;
	while(y>0)
	{
		if(y%2==1)
		{
			res*=x;
			// res=res%mod;
		}
		y/=2; x*=x; // x=x%mod;
	}
	return res;
}
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/


ll solve()
{
	ll k,d0,d1;
	cin>>k>>d0>>d1;
	ll temp=d0+d1;
	ll ans=temp;
	ll sum=(2*temp)%10+(4*temp)%10+(8*temp)%10+(6*temp)%10;
	k-=2;
	if(k>0)
	{
		ans+=(temp%10);
		k--;
	}
	ans+=(k/4)*sum;
	k%=4;
	ll temp1=2;
	while(k--)
	{
		ans+=(temp1*temp)%10;
		temp1=(temp1*2)%10;
	}
	if(ans%3==0)
		yes
	else
		no
	return 0;
}

int main()
{
	//freopen("input.txt"a, "r", stdin);
	pan;
	// solve();
	cc
	{
		solve();
	}
}
