#include<bits/stdc++.h>

int main(){
	long long int n, m;
	std::cin>>n>>m;
	long int p=0, v=0;
	if(n==m)
		std::cout<<n-1<<" "<<n<<std::endl;
	else{
		p=n>m?n-1:m-1;
		v=n>m?m:n;
		std::cout<<p<<" "<<v<<std::endl;
	}
	return 0;
}