#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main()
{
	int t; cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int da = abs(a-b) + abs(a-c);
		int db = abs(b-a) + abs(b-c);
		int dc = abs(c-a) + abs(c-b); 
		cout << (da < db ? (da < dc ? da : dc) : (db < dc ? db : dc))<<endl;
	}
}

