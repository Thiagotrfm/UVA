//Prim's Algorithm

#include <iostream>
#define MAX 110
#include <bitset>
#include <cmath>
#include <queue>

using namespace std;
using dd = pair<double, double>;
using di = pair<double, int>;

dd vertices[MAX];
double dist[MAX][MAX];
bitset<MAX> taken;

double prim(int v){
	priority_queue<di> pq;
	taken.reset();

	int u = 0;
	taken[0] = true;

	for(int V=0; V<v; V++){
		if(u==V) continue;
		pq.push(di(-dist[u][V], V));
	}

	double D = 0;

	while(!pq.empty()){
		auto e = pq.top();
		pq.pop();
		
		double w = -e.first;
		u = e.second;
		if(not taken[u]){		
			taken[u] = true;
			D+=w;

			for(int V=0; V<v; ++V){
				if(u==V or taken[V]) continue;
				pq.push(di(-dist[u][V], V));
			}
		}
	}
	return D;
}

int main(){
	int t, n;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		if(i) printf("\n");
		scanf("%d", &n);
		for(int j=0; j<n; j++){
			scanf("%lf %lf", &vertices[j].first, &vertices[j].second);
			
		}
		
		for(int j=0; j<n; j++)
			for(int k=0; k<n; k++)
				dist[j][k] = hypot(vertices[j].first - vertices[k].first, vertices[j].second - vertices[k].second);
		double D = prim(n);
		printf("%.2f\n", D);
	}
	return 0;
}
