/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef vector<ll> vl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
// #define mod 1000000007
#define phi 1.618
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
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
// some extra
#define sz(V) ll(V.size())
/* ONLINE JUDGE */
// #ifdef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
// #endif
// template
template <typename T>
T mymax(T x,T y)
{
    return (x>y)?x:y;
}
// function

ll power(ll x,ll y,ll mod)
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
ll str_to_num(string s)
{
    return stoi(s);
}

string num_to_str(ll num)
{
    return to_string(num);
}
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>

/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/

ll solve()
{
    ll a,b;
    cin>>a>>b;
    vl va,vb;
    ll count=0;
    map<ll,ll> m;
    while(a%2==0)
    {
        m[2]++;
        a/=2;
    }
    while(a%3==0)
    {
        m[3]++;
        a/=3;
    }
    while(a%5==0)
    {
        a/=5;
        m[5]++;
    }
    while(b%2==0)
    {
        m[2]--;
        b/=2;
    }
    while(b%3==0)
    {
        m[3]--;
        b/=3;
    }
    while(b%5==0)
    {
        b/=5;
        m[5]--;
    }
    if(a!=b)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<abs(m[2])+abs(m[3])+abs(m[5])<<endl;
    return 0;
}

int main()
{
    speed;
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll TestCase=1;
    // cin>>TestCase;
    while(TestCase--)
    {
        solve();
    }
}

/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/