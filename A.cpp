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
		int n; cin>>n;
		vector<int> vt;
		for(int i = 1; i<=n; i++)
		{
			vt.push_back(i*(i+1));
		}
		for(auto x:vt) cout<<x<<" ";
		cout<<endl;
	}
}
