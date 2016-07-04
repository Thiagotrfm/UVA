#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int t, n, a;
	scanf("%d", &t);
	for(int o=1; 0<=t; o++){
		map<int, int> m1, m2, m3;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a);
			m1.insert(make_pair(a, a));
		}
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a);
			if(m1.find(a)==m1.end())
				m2.insert(make_pair(a,a));
			else
				m1.erase(a);
		}
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &a);
			if(m1.find(a)!=m1.end()) m1.erase(a);
			if(m2.find(a)!=m2.end()) m2.erase(a);
			if(m1.find(a)==m1.end() && m2.find(a)==m2.end()) m3.insert(make_pair(a, a));
		}

		vector<int> v;
		for(auto it : m1)
			v.push_back(it.second);
		for(auto it : m2)
			v.push_back(it.second);
		for(auto it : m3)
			v.push_back(it.second);
		sort(v.begin(), v.end());
		cout << "Case #" << o << ":" << endl;
		if(m1.size() > m2.size() && m1.size() > m3.size()){
			cout << "1";
		}
		if(m2.size() > m1.size() && m2.size() > m3.size()){
			cout << "2";
		}
		if(m3.size() > m1.size() && m3.size() > m2.size()){
			cout << "3";
		}
		for(auto it : v)
			cout << " " << it;
		cout << endl;
	}
	return 0;
}
