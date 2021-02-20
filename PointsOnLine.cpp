#include<bits/stdc++.h>

/*long long int binsearch(std::vector<long long int> a, long long int i, long long int j, long long int x){
	bool flag=false;
	long long int mid=0;
	while(!flag){
	//	std::cout<<i<<" "<<j<<" "<<mid<<std::endl;
		if(j<i)
			break;
		mid=i+(j-i)/2;
		if(a[mid]==x){
			flag=true;
			break;
		}
		if(a[mid]<x)
			i=mid+1;
		else j=mid-1;
	}
	//std::cout<<"HEYaa "<<i<<" "<<mid<<" "<<j<<std::endl;
	return flag?mid:i-1;
}*/

int main(){
	long long int n, d;
	std::cin>>n>>d;
	std::vector<long long int> a(n);
	for(long long int i=0;i<n;i++)
		std::cin>>a[i];
	long long int count=0;
	for(long long int i=0;i<n-2;i++){
		long long int k=0;
		std::vector<long long int>::iterator it;
		it=std::lower_bound(a.begin()+i, a.end(), a[i]+d);

		k=(*it==(a[i]+d))?it-a.begin():it-a.begin()-1;
		//k=it-a.begin();
		//std::cout<<"HEY "<<i<<" "<<k<<std::endl;
		count+=((k-i)*(k-i-1))/2;
	}
	std::cout<<count<<std::endl;
	return 0;
}