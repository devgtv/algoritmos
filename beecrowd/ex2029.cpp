#include <iostream>
#include <iomanip>
using namespace std;

int main() {


	float volume_mel,diametro_cilindro,raio,pi,altura,area_boca;
	pi = 3.14;
	
	while (cin >> volume_mel >> diametro_cilindro) {
		raio = diametro_cilindro / 2;
		altura = volume_mel	 / (pi * raio * raio)  ;
		area_boca = pi * raio * raio;
		cout << fixed << setprecision(2) << "ALTURA = " << altura << endl;
		cout << fixed << setprecision(2) << "AREA = " << area_boca << endl;
	}



	return 0;
}