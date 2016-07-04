#include <iostream>
#include <array>
#define MAX 3005
using namespace std;

int main(){
	int t, ant, novo;
	bool ans;
	while(scanf("%d %d", &t, &ant)!=EOF){
		ans = false;
		array<int, MAX> a;
		a.fill(0);
		for(int i=0; i<t-1; i++){
			scanf("%d", &novo);
			a[abs(novo-ant)]++;
			ant = novo;
		}
		for(int i=1; i<t; i++)
			if(a[i]==0) ans = true;
		if(ans) printf("Not jolly\n");
		else printf("Jolly\n");
	}
	return 0;
}
