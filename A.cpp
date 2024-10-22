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
		if(n == 1) 
		{
			cout<<0<<endl;
			continue;
		}
		else
		{
			unordered_set<int> visited;
			queue<pair<int,int>> q;
			q.push({n,0});
			visited.insert(n);
			while(!q.empty())
			{
				pair<int, int> res = q.front();
				int cur = res.first;
				int cnt = res.second;
				q.pop();
				if(cur == 1)
				{
					cout<<cnt<<endl;
					break;
				}
				for(int i = 1; i<=min(k-1, cur-1) ;i++)
				{
					if(cur - i >= 1 && visited.find(cur - i) == visited.end())
					{
						q.push({cur - i, cnt + 1});
						visited.insert(cur - i);
					}
				 } 
			}
		}
	}
}
