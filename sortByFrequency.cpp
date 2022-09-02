#include <bits/stdc++.h>
using namespace std;
static bool comp(pair<int,int>& a,pair<int,int>& b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    else
    {
        return a.second>b.second;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    vector<pair<int,int>>v;
	    for(auto it:m)
	    {
	        v.push_back(it);
	    }
	    sort(v.begin(),v.end(),comp);
	    for(auto i:v)
	    {
	        for(int j=0;j<i.second;j++)
	        {
	            cout<<i.first<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
