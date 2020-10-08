#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fo(x,a,b) for(int x=a;x<=b;x++)
#define of(x,a,b) for(int x=a;x>=b;x--)
#define close(); std::ios::sync_with_stdio(false);cin.tie(0),cout.tie(0);
#define PI acos(-1)
#define pb push_back
#define lowbit(a) ((a)&-(a))
#define lbit(a) (__builtin_ffsll(a))
#define ubit(a) (64-__builtin_clzll(a))
#define fi first
#define se second
//lowbit 10100获取100 lbit 3  ubit  5
//lower_bound(begin,end,num)返回从begin开始的第一个大于或等于val的元素的地址
//upper_bound(begin,end,num)
//__builtin_popcountll(x) 返回二进制中1的个数
//vector<vector<int>>G;//G.resize(m, vector<int>(n, 0)); 开辟一个n行m列的数组
//unordered_map 哈希map
//	freopen("in.in", "r", stdin);
//	freopen("out.out", "w", stdout);
const long long mod=1e9+7;
const long long INF=998244353;
long long wxd=1e18;
int mov[8][2]={0,1,0,-1,1,0,-1,0,-1,-1,-1,1,1,-1,1,1};
int qpow(int a,int b){
    int ans=1;
    while(b)
    {
        if(b%2==1) ans=ans*a%mod;//每部取模防止数据溢出
        a=(a*a)%mod;//每部取模防止数据溢出
        b=b/2;
    }
    return ans;
}
void solve(){

}
signed main()
{
	close();
	int T;

	while(T--)solve();
    return 0;
}
//	freopen("in.in", "r", stdin);
//	freopen("out.out", "w", stdout);

