#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(){
	int t, n, k, var, s;
	char op;
	scanf("%d", &t);
	while(t--){
		cout << "Caso " << t << endl << endl;
		array<int, 110>a;
		a.fill(0);
		scanf("%d %d", &n, &k);
		for(int j=0; j<k; j++){
			vector<int>left, right;
			scanf("%d", &s);
			for(int i=0; i<s; i++){
				scanf("%d", &var);
				left.push_back(var);
			}
			for(int i=0; i<s; i++){
				scanf("%d", &var);
				right.push_back(var);
			}
			scanf("%c\n", &op);
			if(op=='='){
				for(int i=0; i<s; i++){
					a[left[i]] = 0;
					a[right[i]] = 0;
				}
			}
			else if(op=='<'){
				for(unsigned int i=0; i<right.size(); i++)
					a[right[i]]++;
			}
			else{
				for(unsigned int i=0; i<left.size(); i++)
					a[left[i]]++;
			}
			int res=0, num=0;
			for(int i=0; i<n; i++){
				cout << "a[" << i << "] = " << a[i] << endl;
				if(a[i]>res){
					res = i;
					num = 0;
				}
				else if(a[i]==res)
					num++;
			}
		}
	}
	return 0;
}	
