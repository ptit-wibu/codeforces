#include<bits/stdc++.h>
#define int long long
using namespace std;

bool equivalent(const vector<vector<int>> &a,const vector<vector<int>> &b, int m, int n)
{
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n;j++)
		{
			if(a[i][j] != b[i][j]) return false;
		}
	}
	return true;
}

void convert(vector<vector<int>> &a,const vector<vector<int>> &b, int m, int n)
{
	for(int i = 0; i<m-1; i++)
	{
		for(int j = 0; j< n-1; j++)
		{
			int delta = (b[i][j] - a[i][j] + 3) % 3;
			if(delta != 0)
			{
				a[i][j] = (a[i][j] + delta)%3;
				a[i+1][j] = (a[i+1][j] + delta)%3;
				a[i][j+1] = (a[i][j+1] + delta)%3;
				a[i+1][j+1] = (a[i+1][j+1] + delta)%3;
			}
		}
	}
//	return equivalent(a,b,m,n);
}
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int m,n; cin>>m>>n;
		vector<vector<int>> a(m, vector<int>(n));
		vector<vector<int>> b(m, vector<int>(n));
		for(int i = 0; i<m;i++)
		{
			for(int j = 0; j<n ; j++)
			{
				char c; cin>>c;
				a[i][j] = c - '0';
			}
		}
		for(int i = 0; i<m;i++)
		{
			for(int j = 0; j<n ; j++)
			{
				char c; cin>>c;
				b[i][j] = c - '0';
			}
		}
	/*	for(int i = 0; i<m; i++) 
		{
			for(int j = 0;j<n;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}*/
	//	if(convert(a,b,m,n)) cout<<"YES"<<endl;
	//	else cout<<"NO"<<endl;
	convert(a,b,m,n);
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n;j++) 
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	}
}
