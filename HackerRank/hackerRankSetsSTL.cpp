#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    set<int> set;
    cin >> n;
    for(int i=0; i<n; i++){
        int y, x;
        cin >> y >> x;
        if(y==1){
            set.insert(x);
        } else if(y==2){
            try{
                set.erase(x);
            } catch(...){
                continue;
            }
        } else if(y==3){
            std::set<int>::iterator itr = set.find(x);
            if(itr != set.end()) cout << "Yes" << endl;
            else {
                cout << "No" << endl;
            }
            
        }
    }
    
    return 0;
}



