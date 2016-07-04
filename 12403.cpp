#include <iostream>

using namespace std;

int main(){
	int a, valor;
	long long conta=0;
	string c;
	scanf("%d", &a);
	while(a--){
		cin >> c;
		if(c=="donate"){
			cin >> valor;
			conta+=valor;
		}
		else
			cout << conta << endl;
	}
	return 0;
}
