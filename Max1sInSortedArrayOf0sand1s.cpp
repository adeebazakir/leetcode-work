#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    
    //vector<vector<int>> arr(n, vector<int>(m));  // 2D array to store the sorted binary matrix
    cout << "Enter sorted array of 0s and 1s: " << endl;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> arr1(n, 0);  // Array to store number of 1s in each row
    int max_ones = 0, index = -1;  // Variables to store max number of 1s and the row index

    for (int i = 0; i < n; i++) {
        int col = m;
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 1) {
                arr1[i] = m - j;  // Calculate number of 1s in this row
                break;  // Stop as soon as we find the first 1 (since the rows are sorted)
            }
        }
        if (arr1[i] > max_ones) {
            max_ones = arr1[i];
            index = i;  // Update row index with the highest number of 1s
        }
    }

    if (index != -1) {
        cout << "Row " << index << " has the highest number of 1s." << endl;
    } else {
        cout << "No 1s found in the array." << endl;
    }

    return 0;
}
