#include <iostream>
#include <map>

using namespace std;

int main(){
	string a;
	int cas = 1;
	map<string, string> m;
	m.insert(make_pair("HELLO", "ENGLISH"));
	m.insert(make_pair("HOLA", "SPANISH"));
	m.insert(make_pair("HALLO", "GERMAN"));
	m.insert(make_pair("BONJOUR", "FRENCH"));
	m.insert(make_pair("CIAO", "ITALIAN"));
	m.insert(make_pair("ZDRAVSTVUJTE", "RUSSIAN"));

	while(cin >> a){
		if(a=="#") break;
		if(m.find(a)==m.end())
			cout << "Case " << cas++ << ": UNKNOWN" << endl;
		else
			cout << "Case " << cas++ << ": " << m[a] << endl;
	}
	return 0;
}
