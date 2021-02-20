#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define ulloop(i, a, b) for(ull i=a;i<(ull)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)
#define pool(i, a, b) for(int i=a;i>b;i--)
#define pooll(i, a, b) for(ll i=a;i>b;i--)

int main(){
	string a;
	cin>>a;
	int l=a.length();
	int count=0;
	for(int i=0;i<l;i++){
		//count+=((a%10==4)||(a%10==7))?1:0;
		if(a[i]=='4' || a[i]=='7')
			++count;
	}
	int flag = 0;
	//printf("%d\n", count);
	while(count && flag!=2){
		flag=((count%10==4)||(count%10==7))?1:2;
		count/=10;
	}
	if(flag==1)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}
