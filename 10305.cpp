#include <iostream>
#include <cstring>
#include <stack>

#define MAX 110

using namespace std;

int edges[MAX];
int adj[MAX][MAX];
stack<int> s;
int states[MAX];

void dfs(int a){
	states[a] = 1;
	for(int i=0; i<edges[a]; i++){
		if(!states[adj[a][i]]) dfs(adj[a][i]);
	}

	s.push(a);
}

bool not_visited(int t){
	for(int i=1; i<=t; i++){
		if(states[i]==0) return true;
		
	}
	return false;
}

int main(){
	int a, b, c, d;
	while(scanf("%d %d", &a, &b), a | b){
		memset(states, 0, sizeof states);
		memset(edges, 0, sizeof(edges));
		for(int i=0; i<b; i++){
			scanf("%d %d", &c, &d);
			adj[c][edges[c]++] = d;
		}
		
		while(not_visited(a)){
			for(int i=1; i<=a; i++){
				if(!states[i]){
					dfs(i);
					
				}
			}
		}
		int z = s.top();
		s.pop();
		printf("%d", z);
		while(!s.empty()){
			z = s.top();	
			s.pop();
			printf(" %d", z);
		}
		printf("\n");
	}
	return 0;
}
