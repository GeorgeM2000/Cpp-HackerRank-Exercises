#include <iostream>
#include <deque> 
#include <array>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    int i = 0;
    bool valid = true;
    std::deque<int*> deque;

    while(valid != false){

        // Create the sub array
        int sub_array[k], temp_i = i;
        for(int j{0}; j<k; j++){
            if(temp_i > n-1){ valid = false; break; }
            sub_array[j] = arr[temp_i];
            temp_i++;
        }

        if(valid) {

            // Push the sub array back into the deque
            deque.push_back(sub_array);

            // Find the maximum value in the sub array
            int max = *(deque.at(i)+0);
            for(int j = 1; j<k; j++){
                if((*(deque.at(i)+j)) > max) max = (*(deque.at(i)+j));
            }

            // Print the max value
            cout << max << " ";
            i++;
        }
    }
    cout << endl;
    

}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}