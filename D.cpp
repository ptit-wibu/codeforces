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
		string s; cin>>s;
		int w = m-1, l = k;
		bool oke = true;
		for(auto x:s)
		{
			if(x == 'L') w = m; // dung tren dat thi khoi phuc kha nang nhay
			if(w) w--; // hay khi co the
			else // ko nhay duoc thi boi
			{
				if(x == 'C') oke = false; // gap ca sau thi cook
				if(l<=0) oke =false;//het the luc cung cook
				l--;
			}
		}
		if(oke) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
