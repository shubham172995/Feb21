#include<bits/stdc++.h>

int main(){
	std::string a;
	bool flag=false;
	for(int i=0;i<8;i++){
		std::cin>>a;
		if(a[0]==a[7])
			flag=true;
		for(int i=0;i<6;i++)
			if(a[i]==a[i+1])
				flag=true;
	}
	if(!flag)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}