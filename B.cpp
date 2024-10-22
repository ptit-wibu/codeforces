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
		int n,k; cin>>n>>k;
		int a[k];
		for(int i = 0; i<k; i++) cin>>a[i];
		sort(a,a+k);
		int ans = 0;
		for(int i = 0; i<k-1; i++)
		{
			ans +=( 2*a[i] - 1);
		}
		cout<<ans<<endl;
	}
}
