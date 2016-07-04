#include <iostream>
#include <array>
#define MAX 36600
using namespace std;

int main(){
	int t, d, p, r;
	scanf("%d", &t);
	while(t--){
		array<int, MAX> a;
		a.fill(0);
		scanf("%d %d", &d, &p);
		while(p--){
			scanf("%d", &r);
			for(int i=r; i<=d; i+=r)
				a[i]++;
		}
		int res = 0;
		for(int i=1; i<=d; i++){
			if(a[i]>0 && ((i%7)%6!=0 && (i%7)%7!=0))
				res++;
		}
		cout << res << endl;
	}
	return 0;
}
