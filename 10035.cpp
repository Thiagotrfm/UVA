#include <iostream>

using namespace std;

int main(){
	string a, b;
	unsigned int size;
	while(cin >> a >> b){
		if(a=="0" && b=="0") break;
		int fica=0, carrie = 0;
		size = a.size();
		for(unsigned int i=0; i<(10-size); i++)
			a = "0" + a;
		size = b.size();
		for(unsigned int i=0; i<(10-size); i++)
			b = "0" + b;
		for(int i = 9; i>=0; i--){
			if((a[i]-48)+(b[i]-48)+fica > 9){
				fica = 1;
				carrie++;
			}
			else{
				fica = 0;
			}
		}
		
		if(carrie == 0) printf("No carry operation.\n");
		else if(carrie == 1) printf("1 carry operation.\n");
		else printf("%d carry operations.\n", carrie);
	}
	return 0;
}
