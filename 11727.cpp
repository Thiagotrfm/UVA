#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int c, s;
	scanf("%d", &c);
	for(int j=1; j<=c; j++){
		vector<int> sal;
		for(int i=0; i<3; i++){
			scanf("%d", &s);
			sal.push_back(s);
		}
		sort(sal.begin(), sal.end());
		printf("Case %d: %d\n", j, sal[1]);
	}
	return 0;
}
