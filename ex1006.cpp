#include <iostream>
#include  <iomanip>
using namespace std; 

int main() {

double A,B,C,media;
cin >> A >> B >> C;
media = (A * 2 + B * 3 + C * 5) / 10;
cout << "MEDIA = " << fixed << setprecision(1) << media << "\n";
    return 0;
}
