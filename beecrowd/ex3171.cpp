#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int maximo = 105;
vector<int> grafo[maximo];
bool visitado[maximo];

void bfs(int inicio) {
	queue<int> fila;
	fila.push(inicio);
	visitado[inicio] = true;

	while(!fila.empty()) {
		int atual = fila.front();
		fila.pop();
		for(int vizinho : grafo[atual]) {
			if(!visitado[vizinho]) {
				visitado[vizinho] = true;
				fila.push(vizinho);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
	int n,l;
	cin >> n >> l;
	for(int i = 0 ; i < l;i++) {
		int x,y;
		cin >> x >> y;
		grafo[x].push_back(y);
		grafo[y].push_back(x);
	}
	bfs(1);

	bool completo = true;
	for(int i = 1;i <= n;i++) {
		if(!visitado[i]) {
			completo = false;
			break;
		}
	}
	if(completo) {
		cout << "COMPLETO" << endl;
	} else {
		cout << "INCOMPLETO" << endl;
	}
}