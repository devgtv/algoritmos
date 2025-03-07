#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	 float vetor[100];

	for (int i = 0; i < 100; ++i) {
		cin >> vetor[i];
		if (vetor[i] <= 10) {
			cout << "A[" << i << "] = "  << fixed << setprecision(1) << vetor[i] << endl;
		}
	}


	return 0;
}