#include <iostream>
#include <vector>
#include <cmath> // For abs()
using namespace std;

void sortedSquareArray(vector<int> array, int size) {
    vector<int> arrayOfSquare(size);
    int i = 0;
    int j = size - 1;
    int k = size - 1;  // Pointer for the result array, starting from the end

    // Two-pointer approach to fill arrayOfSquare
    while (i <= j) {
        if (abs(array[i]) > abs(array[j])) {
            arrayOfSquare[k] = array[i] * array[i];
            i++;
        } else {
            arrayOfSquare[k] = array[j] * array[j];
            j--;
        }
        k--;  // Move the pointer for the result array leftwards
    }

    // Output the sorted square array
    for (int i = 0; i < size; i++) {
        cout << arrayOfSquare[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    vector<int> array(size);
    cout << "Enter elements of the array in ascending order (can include negative numbers):" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

	sortedSquareArray(array,size);
	
	//doesnt gave correct answer when given negative integers
	/*for(int i=0;i<size;i++)
	{
		squareArray[i]=array[i]*array[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<squareArray[i]<<" ";
	}*/
}
