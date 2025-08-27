#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
	int n;
	cin >> n;
	double l;
	cin >> l;
	float q;
	cin >> q;
	vector<string> pessoas(n);
	for (int i = 0;i < n;i++) {
		cin >> pessoas[i];
	}
	int totcuias = l / q;
	float sobra = l - (totcuias * q);
	
	if (sobra > 0.0) {
		totcuias = totcuias + 1;
	}
	int riqueza = (totcuias - 1) % n;
	float ultcuia;

	if (sobra == 0.0) {
		ultcuia = q;
	}
	else {
		ultcuia = sobra;
	}
	cout << fixed << setprecision(1);
	cout << pessoas[riqueza] << " " << ultcuia << endl;

	return 0;
}