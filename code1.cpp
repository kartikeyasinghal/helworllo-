#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
int computeXOR(int n)
{
   
  // If n is a multiple of 4
  if (n % 4 == 0)
    return n;
 
  // If n%4 gives remainder 1
  if (n % 4 == 1)
    return 1;
 
  // If n%4 gives remainder 2
  if (n % 4 == 2)
    return n + 1;
 
  // If n%4 gives remainder 3
  return 0;
}

int main()
{
  fast_io;	
  int t;
  cin>>t;
  vector<pair<int,int> >v;
  while(t--)
  {
  	int a,b;
  	cin>>a>>b;
  	v.push_back({a,b});
  }
  for(int i=0;i<v.size();i++)
  {
  	int a,b,res;
  	a=v[i].first;b=v[i].second;
  	res=a;
  	int x=0;
  	x=computeXOR(a-1);
  	if (x==b) {cout<<res<<endl;}
  	else if ((x^b)!=a) {cout<<res+1<<endl;}
  	else cout<<res+2<<endl;
  }
}