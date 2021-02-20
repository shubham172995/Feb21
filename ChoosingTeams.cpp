#include<bits/stdc++.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	std::vector<int> a(n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		a[i]+=k;
	}
	int count=0;
	for(int i=0;i<n;i++){
		count+=a[i]>5?0:1;
	}
	printf("%d\n", count/3);
	return 0;
}