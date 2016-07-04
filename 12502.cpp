#include <iostream>

using namespace std;

int main(){
	int t, a, b, c;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d", &a, &b, &c);
		printf("%d\n", c*(a+(a-b))/(a+b));
	}
	return 0;
}
