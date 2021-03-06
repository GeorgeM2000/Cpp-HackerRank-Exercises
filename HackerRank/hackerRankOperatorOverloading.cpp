#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix{
    public:
        vector<vector<int>> a;
        Matrix operator+(Matrix ma);
};

Matrix Matrix::operator+(Matrix ma){
    Matrix temp;

    for(int i=0; i<this->a.size(); i++){
        vector<int> v1;
        for(int j=0; j<this->a[i].size(); j++){
            int sum = this->a[i][j] + ma.a[i][j];
            v1.push_back(sum);
        }
        temp.a.push_back(v1);
    }

    return temp;
}

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
