#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int a[n+1];
		for(int i = 1; i<=n; i++)
		{
			a[i] = i;
		}
		int x = lower_bound(a+1, a+n+1, m) - a;
		for(int i = n; i>x; i--)
		{
			cout<<a[i]<<" ";
		}
		for(int i = 1;i<=x; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
