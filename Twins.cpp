#include<bits/stdc++.h>

int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n);
	int total=0;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		total+=a[i];
	}
	std::sort(a.begin(), a.end());
	int count=0, temp=0;
	for(int i=n-1;i>=0;i--){
		temp+=a[i];
		++count;
		if(temp>(total/2))
			break;
	}
	printf("%d\n", count);
	return 0;
}