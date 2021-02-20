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
	int n;
	scanf("%d", &n);
	vector<int> a(n+1), b(n+1);
	loop(i, 1, n+1){
		scanf("%d", &a[i]);
		b[a[i]]=i;
	}
	loop(i, 1, n+1){
		printf("%d ", b[i]);
	}
	printf("\n");
	return 0;
}
