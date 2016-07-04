#include <iostream>
#include <cstring>
#define MAX 110
#define INF 99999
#define LIM 101
using namespace std;

int main(){
	int a, b;
	bool z = false;
	int AdjMat[MAX][MAX];
	int ver[MAX];
	for(int i=0; i<MAX; i++)
		for(int j=0; j<MAX; j++)
			AdjMat[i][j] = INF;
	memset(ver, 0, sizeof ver);
	int el = 0;
	while(scanf("%d %d", &a, &b)){
		if(a==0 && b==0){
			if(z) break;
			for(int k=1; k<LIM; k++)
				for(int i=1; i<LIM; i++)
					for(int j=1; j<LIM; j++)
						AdjMat[i][j] = min(AdjMat[i][j], AdjMat[i][k] + AdjMat[k][j]);
			int soma=0;
			for(int i=1; i<LIM; i++){
				for(int j=1; j<LIM; j++){
					if(AdjMat[i][j]!=INF && i!=j)
						soma += AdjMat[i][j];
				}
			}
			z = true;
			printf("%.3f\n", (float)soma/el);
			for(int i=0; i<MAX; i++){
				for(int j=0; j<MAX; j++){
					AdjMat[i][j]=INF;
				}
			}
			memset(ver, 0, sizeof ver);
			el = 0;
		}
		else{
			z = false;
			AdjMat[a][b]=1;
			int m = max(a, b);
			el = max(el, m);
		}
	}
	return 0;
}
