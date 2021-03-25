#include<bits/stdc++.h>
#define ll long long int

int main(){
	ll m, n;
	std::cin>>m>>n;
	double ans=0.0, temp=0.0;
	ans+=m;
	for(int i=1;i<m;i++){
		double t=(i+0.0)/m;
		temp+=std::pow(t, n);
	}
	ans-=temp;
	std::cout<<std::setprecision(8)<<ans<<std::endl;
	return 0;
}