#include<bits/stdc++.h>
#define ll long long int

int main(){
	ll n, m, k;
	std::cin>>n>>m>>k;
	std::vector<std::vector<ll> > a(n);
	std::vector<ll> row(n), col(m);
	for(ll i=0;i<n;i++){
		a[i].resize(m);
		for(ll j=0;j<m;j++){
			std::cin>>a[i][j];
			row[i]=i;
			col[j]=j;
		}
	}
	while(k--){
		char ch;
		std::cin>>ch;
		if(ch=='g'){
			ll x, y;
			std::cin>>x>>y;
			--x;--y;
			std::cout<<a[row[x]][col[y]]<<std::endl;
		}
		else if(ch=='r'){
			ll x, y;
			std::cin>>x>>y;
			--x;--y;
			ll temp=row[x];
			row[x]=row[y];
			row[y]=temp;
		}
		else if(ch=='c'){
			ll x, y;
			std::cin>>x>>y;
			--x;--y;
			ll temp=col[x];
			col[x]=col[y];
			col[y]=temp;
		}
	}
	return 0;
}