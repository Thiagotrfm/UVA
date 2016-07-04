#include <iostream>
#include <vector>
#include <cstring>

#define MAX 1010

using namespace std;

int tow[MAX], states[MAX], out[MAX];
vector<int> v[MAX];

bool aAll(int n){
	
	for(int i=1; i<=n; i++){
		if(tow[i]==1)
			return false;
	}
	return true;
}

int main(){
	int r, a, b, c, d;
	char ch;
	
	while(scanf("%d %d\n", &a, &b)!=EOF){
		memset(states, 0, sizeof states);
		memset(out, 0, sizeof out);
		for(int i=1; i<=a; i++){
			scanf(" %c", &ch);
			tow[i] = (c=='A' ? 0 : 1);
		}
		for(int i=0; i<b; i++){
			scanf("%d %d", &c, &d);
			out[c]++;
			v[c].push_back(b);
		}
		
		for(int i=1; i<=a; i++){
			if(states[i]==0) bfs(i);
		}
		
		if(aAll(a)) printf("Y\n");
		else printf("N\n");
	}
	return 0;
}
