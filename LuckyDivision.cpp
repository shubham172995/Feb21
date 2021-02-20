#include<bits/stdc++.h>

bool lucky(int n){
	bool flag=false;
	while(n){
		flag=((n%10==4)||(n%10==7))?true:false;
		n/=10;
		if(!flag)
			break;
	}
	return flag;
}

int main(){
	int n;
	scanf("%d", &n);
	if(lucky(n)){
		printf("YES\n");
	}
	else{
		bool flag=false;
		for(int i=4;i<n;i++){
			if(n%i==0 && lucky(i)){
				flag=true;
				break;
			}
		}
		if(!flag)
			printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}