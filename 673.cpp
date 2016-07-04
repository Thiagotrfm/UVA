#include <iostream>
#include <stack>

using namespace std;

bool exp(string a){
	stack<char>s;
	for(unsigned int i=0; i<a.size(); i++){
		if(a[i]=='(' || a[i]=='[') s.push(a[i]);
		if(a[i]==')'){
			if(s.empty()) return false;
			if(s.top() != '(') return false;
			else s.pop();
		}
		if(a[i]==']'){
			if(s.empty()) return false;
			if(s.top() != '[') return false;
			else s.pop();
		}
	}
	if(a.size()==0) return true;
	if(!s.empty()) return false;
	return true;
}
int main(){
	int t;
	string a;
	bool ans;

	scanf("%d", &t);
	getchar();
	while(t--){
		getline(cin, a);
		ans = exp(a);
		if(ans) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
