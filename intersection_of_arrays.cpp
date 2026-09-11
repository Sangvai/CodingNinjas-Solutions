#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int manimau = -12345432;
    vector<int> ans;

    for(int i = 0; i < n; i++) {

        int element = arr1[i];

        for(int j = 0; j < m; j++) {

            if(element == arr2[j]) {
                ans.push_back(element);

                arr2[j] = manimau;

                break;
            }
        }
    }

    return ans;
}

int main()
{
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    vector<int> arr1(n);

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    vector<int> arr2(m);

    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> result = findArrayIntersection(arr1, n, arr2, m);

    cout << "Intersection of arrays: ";

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}