#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n){
    int left =0, right= n-1;

    while(left < right){
        if(arr[left] == 0){
            left++;
        }
        else if(arr[right] == 1){
            right--;
        }
        else{
            swap(arr[left], arr[right]);
            left++;
            right--;
        }

    }
}
void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, arr[100];
    cout<<"enyer size of array: ";
    cin>>n; 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sortArray(arr, n);
    PrintArray(arr, n);
}