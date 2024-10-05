#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> triangle(n); // initializing with n rows
    for (int i = 0; i < n; i++)
    {
        triangle[i].resize(i + 1); // Resize ith row to hold i + 1 elements
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                triangle[i][j] = 1; // First and last elements of each row are 1
            }
            else
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; // Pascal's rule
            }
        }
    }
    return triangle;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans; // 2D vector
    ans = pascalTriangle(n);  // Call the function
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

