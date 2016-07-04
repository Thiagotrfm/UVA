#include <iostream>
#include <cstring>

using namespace std;

#define MAX 110

char grid[MAX][MAX];
int n;

void dfs(int x, int y){
	grid[x][y]='.';
	n++;
	for(int i=-1; i<=1; ++i)
		for(int j=-1; j<=1; ++j)
			if(grid[x+i][j+y]=='*')
				dfs(x+i, j+y);
}

int main(){
	int r, c;
	while(scanf("%d %d", &r, &c), r | c){
		memset(grid, 0, sizeof grid);
		int stars = 0;
		for(int i=1; i<=r; i++)
			scanf("%s", &grid[i][1]);
		for(int i=1; i<=r; i++){
			for(int j=1; j<=c; ++j){
				if(grid[i][j]!='*') continue;
				n = 0;
				dfs(i, j);
				if(n==1) ++stars;
			}
		}
		printf("%d\n", stars);
	}
	return 0;
}
