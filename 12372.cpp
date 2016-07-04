#include <iostream>

using namespace std;

int main(){
	int a, b, c, f;
	scanf("%d", &f);
	for(int i=1; i<=f; i++){
		printf("Case %d: ", i);
		scanf("%d %d %d", &a, &b, &c);
		if(a>20 || b>20 || c>20) printf("bad\n");
		else printf("good\n");
	}
	return 0;
}
