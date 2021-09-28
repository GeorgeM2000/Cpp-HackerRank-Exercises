#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n;
    cin >> q;

    vector<vector<int>> vec;

    for(int a=0; a<n; a++){
        int i;
        cin >> i;
        vector<int> nested_vec;
        for(int b=0; b<i; b++){
            int num;
            cin >> num;
            nested_vec.push_back(num);
        }
        vec.push_back(nested_vec);
        
    }

    for(int a=0; a<q; a++){ 
        int i, j;
        cin >> i;
        cin >> j;
        cout << vec.at(i).at(j);
    }


    
    return 0;
}