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
		int x,y,k;
		cin>>x>>y>>k;
		while(k > 0 && x != 1)
		{
			int s = (x/y + 1)*y - x; // (x/y +1)*y la so gan nhat tru di x de ra so bc
			if(s > k)
			{
				x += k;
				k = 0;
				break;
			}
			else
			{
				k-=s;
				x+=s;
				while(x % y == 0)
				{
					x/=y;
				}
			}
		}
		x += k%(y-1); // khi x = 1 thi no ra vong lap 1...y-1
		cout<<x<<endl;
	}
}
