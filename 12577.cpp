#include <iostream>

using namespace std;

int main(){
	string a;
	int i=1;
	while(cin >> a){
		if(a=="*") break;
		else if(a=="Hajj") cout << "Case " << i++ << ": Hajj-e-Akbar" << endl;
		else cout << "Case " << i++ << ": Hajj-e-Asghar" << endl;
	}
	return 0;
}
