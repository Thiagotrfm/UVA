#include <iostream>

using namespace std;

int main(){
	string a;
	int b;
	
	scanf("%d", &b);
	while(b--){
		cin >> a;
		if(a.size()==5) printf("3\n");
		else{
			if((a[0]=='t' && (a[1]=='w' || a[2]=='o')) || (a[1]=='w' && a[2]=='o')) printf("2\n");
			else printf("1\n");
		}
	}
	return 0;
}
