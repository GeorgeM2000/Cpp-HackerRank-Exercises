#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void reverse(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    int array[N];

    for(int i=0; i<N; i++){
        int integer;
        cin >> integer;
        array[i] = integer;
    }

    reverse(array, N);
    return 0;
}
