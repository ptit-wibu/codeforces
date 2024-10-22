#include<bits/stdc++.h>
#define int long long
using namespace std;

int a[201][201];
int m, n;

bool check(int a[105][105], int i, int j)
{
	if(i > 0 && a[i][j] <= a[i-1][j]) return false;
	if(j > 0 && a[i][j] <= a[i][j-1]) return false;
	if(i < m-1 && a[i][j] <= a[i+1][j]) return false;
	if(j< n-1 && a[i][j] <= a[i][j+1]) return false;
	return true;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		cin>>m>>n;
		memset(a,0,sizeof(a));
		for(int i = 1; i<=m;i++)
		{
			for(int j = 1; j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i = 1; i<=m; i++)
		{
			for(int j = 1; j<=n; j++)
			{
				if( a[i][j]>a[i-1][j]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i][j+1]){
					a[i][j] = max({a[i][j-1], a[i-1][j], a[i+1][j], a[i][j+1]});	
				}
			}
		}
		for(int i = 1; i<=m;i++)
		{
			for(int j =1 ;j<=n; j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
