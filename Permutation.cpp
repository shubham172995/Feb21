#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n+1);
	int count=0;
	for(int i=0;i<n;i++){
		int temp;
		scanf("%d", &temp);
		if(temp>n)
			++count;
		else ++a[temp];
	}
	for(int i=1;i<=n;i++){
		count+=(a[i]>=1)?a[i]-1:0;
	}
	printf("%d\n", count);
	return 0;
}