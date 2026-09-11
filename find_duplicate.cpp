#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int size)
{
    int ans = 0;

    // XOR all array elements
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }

    // XOR numbers from 1 to size-2
    for(int i = 1; i < size - 1; i++) {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements: ";

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int answer = duplicateNumber(arr, size);

    cout << "Duplicate number is: " << answer << endl;

    return 0;
}