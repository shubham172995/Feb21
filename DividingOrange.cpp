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
	int n, k;
	scanf("%d %d", &n, &k);
	vector<int> a(k);
	vector<vector<int>> b(k);
	vector<bool> check(n*k+1);
	loop(i, 0, k){
		b[i].resize(n);
		cin>>a[i];
		b[i][0]=a[i];
		check[a[i]]=1;
	}
	int m=1;
	int j=0;
	loop(i, 1, n*k+1){
		//printf("HELLO\n");
		if(j>=k)
			break;
		if(m==n){
			++j;
			m=1;
		}
		if(!check[i]){
			b[j][m]=i;
			check[i]=1;
			++m;
		}
	}
	loop(i, 0, k){
		loop(j, 0, b[i].size()){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
