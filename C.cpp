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
		int cnt = 0;
		vector<int> seq;
		vector<int> bitpos;
		for(int i = 0; i<61; i++)
		{
			if(n &((long long)1 << i))
			{
				cout<<(1<<i)<<endl;
				bitpos.push_back((long long)1 << i);//dua bit 1 vao vi auto bang 1 neu or
				//bitpos tuong trung cho so he 10 cua he nhi phan
				cnt++;
			}
		}
		cnt++;
		seq.push_back(n);
		for(auto x:bitpos)
		{
			//cout<<x<<endl;
			if(n > x) seq.push_back(n-x);
		}
		cout<<seq.size()<<endl;
		for(int i = seq.size() - 1; i>=0;i--) cout<<seq[i]<<" ";
		cout<<endl;
	}
}
