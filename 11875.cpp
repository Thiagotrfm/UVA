#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int g, t, num;
	scanf("%d", &t);
	for(int i=1; i<=t; i++){
		vector<int> id;
		scanf("%d", &g);
		for(int j=0; j<g; j++){
			scanf("%d", &num);
			id.push_back(num);
		}
		sort(id.begin(), id.end());
		printf("Case %d: %d\n", i, id[id.size()/2]);
	}
	return 0;
}
