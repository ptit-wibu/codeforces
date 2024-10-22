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
		int a,b,c;
		cin>>a>>b>>c;
		int ans = 0;
		for(int i = 0; i<=5; i++)
		{
			for(int j =0; j<=5; j++)
			{
				for(int k =0; k<=5; k++)
				{
					if(i + j + k == 5)
					{
						ans = max(ans, (a+i)*(b+j)*(c+k));
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}
