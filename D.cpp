#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s; cin>>s;
		if(n == 2)
		{
			cout<<(int)((s[0]- '0') * 10 + (s[1] - '0'))<<endl;
			continue;
		}
		int one = 1;
		int zero = 0;
		for(auto x:s)
		{
			if(x == '0')
			{
				zero = 1;
			}
			if(x != '1')
			{
				one  = 0;
			}
		}
		if(zero) 
		{
			cout<<0<<endl;
			continue;
		}
		if(one == 1)
		{
			cout<<1<<endl;
			continue;
		}
		int sum = 0;
		for(auto x:s)
		{
			sum += (x-'0');
		}
		cout<<sum<<endl;
	}
}
