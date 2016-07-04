#include <iostream>
#include <stack>

using namespace std;

int main(){
	string a;
	unsigned int i;
	while(cin >> a){
		stack< pair<string, int> > s;
		for(i=0; i<a.size(); i++){
			if(a[i]=='('){
				if(a[i+1]=='*') s.push(make_pair("(*", i+1));
				else s.push(make_pair("(", i+1));
			}
			else if(a[i]=='[') s.push(make_pair("[", i+1));
			else if(a[i]=='{') s.push(make_pair("{", i+1));
			else if(a[i]=='<') s.push(make_pair("<", i+1));
			else if(a[i]==')'){
				if(s.empty()){
					printf("NO %d\n", i+1);
					break;
				}
				else if(s.top().first != "("){
					printf("NO %d\n", s.top().second);
					break;
				}
				else{
					s.pop();
				}
			}
		}
	}
	return 0;
}
