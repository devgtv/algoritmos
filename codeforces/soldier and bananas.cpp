    #include <iostream>
    using namespace std;
     
     
    int main () {
        long long int k,n,w;
        cin >> k >> n >> w;
        long long int custo = 0;
        for(int i = 1 ; i <= w;i++) {
            custo = (k*i) + custo;
        }
        long long int empresto = custo - n;
        cout << max(0LL,empresto)<< endl;
     
     
        return 0;
    }  