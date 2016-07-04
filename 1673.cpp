#include <iostream>

using namespace std;

int main(){
	string a;
	int c=1;
	unsigned int i;	
	while(getline(cin, a)){
		for(i=1; i<a.size(); i++){
			if(a[i-1]!=a[i])
				c++;
			else{
				if(c==1) cout << "1"<< a[i-1] << "1";
				else{
					while(c-9>0){
						cout << "9" << a[i-1];
						c-=9;
					}
					cout << c << a[i-1];
				}
				c = 1;
			}
		}
	  while(c-9>0){
  	  cout << "9" << a[i-1];
  	  c-=9;
    }
    cout << c << a[i-1];
}
	return 0;
}
