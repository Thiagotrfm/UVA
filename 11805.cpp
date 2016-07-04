#include <iostream>

using namespace std;

int main(){
	int t, a, b, c, r;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		scanf("%d %d %d", &a, &b, &c);
		r = (b+c)%a;
		if(r == 0)
			printf("Case %d: %d\n", i, a);
		else
			printf("Case %d: %d\n", i, r);
	}
	return 0;
}
