#include<bits/stdc++.h>
#define int long long
using namespace std;
//gop het 0 lien tiep thanh 0 xong dem
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s;
		cin>>s;
		if(n==1 && s[0] == '1')
		{
			cout<<"YES"<<endl;
			continue;
		}
		if(n==1 && s[0] == '0')
		{
			cout<<"NO"<<endl;
			continue;
		}
		vector<int> vt;
		char pre = '1';
		for(int i = 0; i<n; i++)
		{
			if(s[i] == '1') vt.push_back(1);
			if(s[i] == '0' && pre == '1') vt.push_back(0); //chuyen toan bo so 0 sau so 1 thanh 0
			pre = s[i];
		}
		int s0 = 0, s1 = 0;
		for(int i = 0; i<vt.size(); i++)
		{
			if(vt[i] == 1) s1++;
			else s0++; 
		}
		if(s1 > s0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
