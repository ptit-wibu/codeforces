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
		int n,m; cin>>n>>m;
		string s; cin>>s;
		s = s;
		int a[m+1];
		for(int i = 1; i<=m; i++) cin>>a[i];
		sort(a+1, a+m+1);
		string c; cin>>c;
		sort(c.begin() , c.end());
		//cout<<c<<endl;
		string ss = s;
		int visited[200001] = {0};
		int k = 0;
		for(int i = 1; i<=m; i++)
		{
			//cout<<c[i]<<endl;
			if(!visited[a[i]]) {
				s[a[i]-1] = c[k];
				visited[a[i]] = 1;
				k++;
			}
		}
		//for(int i = 1;i<=n;i++) cout<<s[i];
		//cout<<endl;
		cout<<s<<endl;
	}
}
