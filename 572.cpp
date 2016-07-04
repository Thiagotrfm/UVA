#include <iostream>
#include <cstring>

#define MAX 110

using namespace std;

int grid [MAX][MAX];

void dfs(int c, int d){
	grid[c][d] = 0;
	
	for(int i=c-1; i<=c+1; i++){
		for(int j=d-1; j<=d+1; j++){
			if(grid[i][j] == 1) dfs(i, j);
		}
	}
}

int main(){
	int a, b;
	while(scanf("%d %d\n", &a, &b)){
		if(a==0 && b==0) break;
		memset(grid, 0, sizeof grid);
		char s[MAX];
		for(int j=1; j<=a; j++){
			scanf("%s", s);
			for(int i=0; i<b; i++){
				if(s[i]=='@') grid[j][i+1] = 1;
			}
		}

		int count = 0;
		for(int i=1; i<=a; i++){
			for(int j=1; j<=b; j++){
				if(grid[i][j] == 1){
					dfs(i, j);
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
