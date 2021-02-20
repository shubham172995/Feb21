#include<bits/stdc++.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<std::string> a(n);
	for(int i=0;i<n;i++)
		std::cin>>a[i];

	/*for(int i=0;i<n;i++)
		std::cout<<a[i]<<std::endl;*/
	std::vector<int> successful(n);
	std::vector<int> highest(m);
	for(int j=0;j<m;j++){
		int high=0;
		for(int i=0;i<n;i++){
			high=high>a[i][j]-'0'?high:a[i][j]-'0';
		}
		highest[j]=high;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if((a[i][j]-'0')==highest[j])
				successful[i]=1;
		}
	}
	/*for(int i=0;i<n;i++)
		printf("%d ", successful[i]);
	printf("\n");*/
	int count=0;
	for(int i=0;i<n;i++)
		count+=successful[i]==1?1:0;
	printf("%d\n", count);
	return 0;
}