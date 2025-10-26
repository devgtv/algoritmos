#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    map<string, string> natal;
    natal["brasil"] = "Feliz Natal!";
    natal["alemanha"] = "Frohliche Weihnachten!";
    natal["austria"] = "Frohe Weihnacht!";
    natal["coreia"] = "Chuk Sung Tan!";
    natal["espanha"] = "Feliz Navidad!";
    natal["grecia"] = "Kala Christougena!";
    natal["estados-unidos"] = "Merry Christmas!";
    natal["inglaterra"] = "Merry Christmas!";
    natal["australia"] = "Merry Christmas!";
    natal["portugal"] = "Feliz Natal!";
    natal["suecia"] = "God Jul!";
    natal["turquia"] = "Mutlu Noeller";
    natal["argentina"] = "Feliz Navidad!";
    natal["chile"] = "Feliz Navidad!";
    natal["mexico"] = "Feliz Navidad!";
    natal["antardida"] = "Merry Christmas!";
    natal["canada"] = "Merry Christmas!";
    natal["irlanda"] = "Nollaig Shona Dhuit!";
    natal["belgica"] = "Zalig Kerstfeest!";
    natal["italia"] = "Buon Natale!";
    natal["libia"] = "Buon Natale!";
    natal["siria"] = "Milad Mubarak!";
    natal["marrocos"] = "Milad Mubarak!";
    natal["japao"] = "Merii Kurisumasu!";

    string pais;
    while (getline(cin, pais)) {
        if (natal.find(pais) != natal.end()) {
            cout << natal[pais] << endl;
        }
        else {
            cout << "--- NOT FOUND ---" << endl;
        }
    }

	return 0;
}