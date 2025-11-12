#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int n;
  cin>>n;
if(n !=3) {
     int h=0 ,i1 ,l1 = INT_MAX, i2;
 int i=0;
  while (i<n)
  {
    int t;
    cin>> t;
    if(h<t){
      h = t;
      i1 = i;
    }
    else if(t<=l1){
      l1 = t;
      i2 = i;
    }
    i++;
  }

  int t = i1-0+n-1-i2;

  if(i1>i2) {
    t = t - 1;
  } 
  cout<< t <<endl;
  
    return 0;

  }

  
  int a,b,c;
  cin >> a >> b >> c;
  int contador = 0;

  if(a == b && b == c) {
      cout << "0" << endl;
    } else if (b > a && b > c && c <= a || a > b && a == c) {
      cout << "1" << endl; 
    } else {
      cout << "2" << endl;
    }
}