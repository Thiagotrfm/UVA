#include <iostream>

using namespace std;

int main(){
	int a, b;
	while(scanf("%d %d", &a, &b)!=EOF){
		printf("%u\n", a^b);
	}
	return 0;
}
