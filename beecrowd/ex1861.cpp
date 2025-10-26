#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main() {
   map<string,int> tabela;
   string n1,n2;
   while(cin >> n1 >> n2) {

    tabela[n1]++;
    tabela[n2] = -100;
   }
   cout <<"HALL OF MURDERERS" << endl;
   for(auto it : tabela) {
    if(it.second > 0) {
        cout << it.first << " " << it.second << endl;
    }

   }

    return 0;
}
