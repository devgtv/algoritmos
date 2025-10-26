#include <iostream>
#include <vector>
using namespace std;

int contador = 0;
void dfs(vector<vector<int>>& a, vector<int>& vis, int at) {
	vis[at] = 1;
	for (auto it : a[at]) {
		if (!vis[it]) {
			dfs(a, vis, it);
		}
	}

}




int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int n1, m, l;
		cin >> n1 >> m >> l;
		contador = 0;
		vector<vector<int>> aretras(n1);
		for (int j = 0; j < m; j++) {
			int a, b;
			cin >> a >> b;
			aretras[a - 1].push_back(b - 1);
		}
		vector<int> vis(n1);
		vector<int> derrubados(l);
		for (int j = 0; j < l; j++) {
			cin >> derrubados[j];
		}

		for (int j = 0; j < l; j++) {
			if(!vis[derrubados[j] -1]) dfs(aretras, vis, derrubados[j] - 1);
					}
		for (int j = 0; j < n1; j++) {
			if (vis[j] != 0) {
				contador++;
			}
		}
		cout << contador << endl;
	}
		return 0;
}