#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


int main () {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int n;
    cin >> n;
    
    vector<int> h(n);
    
    for(int i = 0 ; i < n;i++) {
        cin >> h[i];
    }
    
    
    unordered_map<int,int> frecha;
    int frecagasto = 0;
    for(int i = 0 ; i < n;i++) {
        int altura = h[i];
        
        
        if(frecha[h[i]] > 0) {
            frecha[h[i]]--;
        } else {
            frecagasto++;
        }
        frecha[altura - 1]++;
    }
    cout << frecagasto << endl;
} 