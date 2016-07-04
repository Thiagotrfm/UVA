#include <iostream>

using namespace std;

int main(){
	int a, b;
	string ans;
	scanf("%d", &a);
	while(a--){
		scanf("%d", &b);
		ans = to_string((((b*567/9)+7492)*235/47)-498);
		printf("%c\n", ans[ans.size()-2]);
	}
	return 0;
}
