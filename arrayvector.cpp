#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<int> &v)
{
	cout<<"size: "<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
	//	cout<<v[i].first<<" "<<v[i].second<<endl;
	cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main()
{
//	vector<pair<int,int>> v;
//	//printvec(v);
//    int n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		int x,y;
//	    cin>>x>>y;
//	    v.push_back({x,y});		
//		}
//	printvec(v);
	int N;
	cin>>N;
	vector<int> v[N];
	for(int i=0;i<N;i++)
	{
		int n;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			int x;
			cin>>x;
			v[i].push_back(x);
		}
	}
	for(int i=0;i<N;i++)
	{
		printvec(v[i]);
	}
}