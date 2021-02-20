#include<bits/stdc++.h>

int main(){
	int x, y, a, b;
	scanf("%d %d %d %d", &x, &y, &a, &b);
	/*if(a==x){
		printf("%d\n", (a-b>0?a-b:0));
	}*/
	if(b>=x)
		printf("0\n");
	else{
		//a=a>b?a:b;
		if(x>y){
			/*int ans=(y-b)*(y-b+1);
			ans/=2;
			ans+=(x-y)*(y-b+1);*/
			int ans=0;
			for(int i=a;i<=x;i++)
				for(int j=b;j<i&&j<=y;j++)
					++ans;
			printf("%d\n", ans);
			for(int i=a;i<=x;i++)
				for(int j=b;j<i&&j<=y;j++)
					printf("%d %d\n", i, j);
		}
		else{
			/*int ans=(x-a+1)*(a-b);
			ans+=((x-a+1)*(x-a))/2;*/
			int ans=0;
			for(int i=a;i<=x;i++)
				for(int j=b;j<i&&j<=y;j++)
					++ans;
			printf("%d\n", ans);
			for(int i=a;i<=x;i++)
				for(int j=b;j<i&&j<=y;j++)
					printf("%d %d\n", i, j);
		}
	}
	return 0;
}