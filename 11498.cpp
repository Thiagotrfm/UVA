#include <iostream>

using namespace std;

int main(){
	int n, m, x, y, a;
	
	while(scanf("%d", &a)!=EOF){
		scanf("%d %d", &n, &m);
		for(int i=0; i<a; i++){
			scanf("%d %d", &x, &y);
			if(x==n || y==m) printf("divisa\n");
			else if(x<n && y>m) printf("NO\n");
			else if(x<n && y<m) printf("SO\n");
			else if(x>n && y>m) printf("NE\n");
			else printf("SE\n");
		}
	}
	return 0;
}
