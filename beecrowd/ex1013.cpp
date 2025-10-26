#include <iostream>
#include <cstdlib>  
using namespace std;

int main() {
    int a, b, c;
    
    
    cin >> a >> b >> c;
    
    
    int maior_ab = (a + b + abs(a - b)) / 2;
    
    
    int maior = (maior_ab + c + abs(maior_ab - c)) / 2;
    
    
    cout << maior << " eh o maior" << endl;
    
    return 0;
}

