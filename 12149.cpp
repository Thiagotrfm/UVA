#include <iostream>

using namespace std;

int main(){
	int num, res;
	while(scanf("%d", &num), num){
		res = 0;
		for(int i=1; i<=num; i++)
			res += i*i;
		printf("%d\n", res);
	}
	return 0;
}
