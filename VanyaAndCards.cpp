#include<bits/stdc++.h>

int main(){
	int n, x;
	scanf("%d %d", &n, &x);
	long long int sum=0;
	std::vector<int> a(n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	if(sum<0)
		sum*=-1;
	int ans=(sum%x==0)?sum/x:((sum/x)+1);
	printf("%d\n", ans);
	return 0;
}