#include <iostream>
#include <vector>
#include <queue>
using namespace std;


struct a
{
   int x;
   int y;
   int z;
   int dist ;
  a(int b,int c, int d, int e){
  x = b;
 y = c;
 z = d;
 dist = e;
}
};



int main () {
   int r,l,c;
   
   while(cin >> r >> l >> c && l !=0 && r!=0 && c !=0) {
      vector<vector<vector<char>>> dangion(r,vector<vector<char>> (l,vector<char>(c)));
      queue<a>fila;
      for(int i = 0 ; i < r;i++) {
         for(int j = 0 ; j< l;j++) {
            for(int k = 0; k < c;k++) {
               cin >> dangion[i][j][k];
               if(dangion[i][j][k] == 'S') {
                  fila.push({i,j,k,0});
               }
            }
         }
      }
      int distancia = -1;
      while(!fila.empty()) {
         int dx[] = {0,0,-1,1,0,0};
         int dy[] = {1,-1,0,0,0,0};
         int dz[] = {0,0,0,0,1,-1};
         a bomba = fila.front();
         fila.pop();
         for(int i =0 ; i < 6;i++) {
            int nx,ny,nz;
            nx = bomba.x + dx[i];
            ny = bomba.y + dy[i];
            nz = bomba.z + dz[i];

            if(nx < r && nx >= 0 && ny < l && ny >=0 && nz < c && nz >= 0) {
               if(dangion[nx][ny][nz] == 'E') {
                 distancia = bomba.dist + 1;
               }
               if(dangion[nx][ny][nz] == '.') {
                  fila.push({nx,ny,nz,bomba.dist+1});
                  dangion[nx][ny][nz] = '#';
               }
            }
         }
      }
      if(distancia == -1) {
         cout << "Trapped!" << endl;
      } else {
         cout << "Escaped in " << distancia << " minute(s)." << endl;
      }
   }

   return 0;
}