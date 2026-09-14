#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            for (int k = j + 1; k < n; k++) {

                if (arr[i] + arr[j] + arr[k] == K) {

                    vector<int> temp;

                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    sort(temp.begin(), temp.end());

                    bool alreadyPresent = false;

                    for (int x = 0; x < ans.size(); x++) {

                        if (ans[x] == temp) {
                            alreadyPresent = true;
                            break;
                        }
                    }

                    if (!alreadyPresent) {
                        ans.push_back(temp);
                    }
                }
            }
        }
    }

    sort(ans.begin(), ans.end());

    return ans;
}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int K;

    cout << "Enter target sum: ";
    cin >> K;

    vector<vector<int>> ans = findTriplets(arr, n, K);

    cout << "\nDistinct triplets are:\n";

    for (int i = 0; i < ans.size(); i++) {

        cout << "[" 
             << ans[i][0] << ", "
             << ans[i][1] << ", "
             << ans[i][2] << "]" 
             << endl;
    }

    return 0;
}