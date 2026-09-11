#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    // XOR all array elements
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    // XOR numbers from 1 to n-1
    for(int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int answer = findDuplicate(arr);

    cout << "Duplicate number is: " << answer << endl;

    return 0;
}