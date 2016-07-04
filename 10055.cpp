#include <iostream>

using namespace std;

int main(){
	long a, b;
	
	while(scanf("%ld %ld", &a, &b)!=EOF){
		printf("%ld\n", abs(a-b));
	}
	return 0;
}
