#include <iostream>
#include <queue>

using namespace std;

struct Posicao
{
	int x, y;
	int passos;

};

int dx[] = { 1,2,2,1,-1,-2,-2,-1 };
int dy[] = { 2, 1, -1, -2, -2, -1, 1, 2 };

bool dentroTabuleiro(int x, int y) {
	if (x < 0 || x >= 8) {
		return false;
	}
	if (y < 0 || y >= 8) {
		return false;
	}
	return true;
}

Posicao converter(const string& pos) {
	Posicao p;
	p.x = pos[0] - 'a';
	p.y = pos[1] - '1';
	p.passos = 0;
	return p;
}

int bfs(const string& origemF, const string& destinoF) {
	bool visitado[8][8] = { false };
	Posicao origem = converter(origemF);
	Posicao  destino = converter(destinoF);

	if (origem.x == destino.x && origem.y == destino.y) {
		return 0;
	}

	queue<Posicao> fila;
	fila.push(origem);
	visitado[origem.x][origem.y] = true;
	while (!fila.empty()) {
		Posicao atual = fila.front();
		fila.pop();

		for (int i = 0; i < 8; i++) {
			int nx = atual.x + dx[i];
			int ny = atual.y + dy[i];

			if (dentroTabuleiro(nx, ny) && !visitado[nx][ny]) {
				visitado[nx][ny] = true;
				Posicao proximo = { nx,ny,atual.passos + 1 };
				if (nx == destino.x && ny == destino.y) {
					return proximo.passos;
				}
				fila.push(proximo);

			}
		}
	}
	return -1;
}

int main() {
	string casa1, casa2;
	while (cin >> casa1 >> casa2) {
		int resultado = bfs(casa1,casa2);
		cout << "To get from " << casa1 << " to " << casa2 << " takes " << resultado << " knight moves." << endl;

	}
	return 0;
}
