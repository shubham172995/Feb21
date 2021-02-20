#include<bits/stdc++.h>

int main(){
	long long int n;
	std::cin>>n;
	if(n>=0)
		std::cout<<n<<std::endl;
	else{
		n*=-1;
		int a, b;
		a=n%10;
		n/=10;
		b=n%10;
		n/=10;
		n*=10;
		if(a<b)
			n+=a;
		else n+=b;
		n*=-1;
		std::cout<<n<<std::endl;
	}
	return 0;
}