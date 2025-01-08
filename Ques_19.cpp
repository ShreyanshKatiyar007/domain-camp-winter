//merge two sorted array list using merge sort.

#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> mergedArray;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            mergedArray.push_back(arr1[i]);
            i++;
        } else {
            mergedArray.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size()) {
        mergedArray.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        mergedArray.push_back(arr2[j]);
        j++;
    }

    return mergedArray;
}

int main() {
    vector<int> arr1, arr2;
    int n1, n2, value;

    cout << "Enter the number of elements in the first sorted array: ";
    cin >> n1;
    cout << "Enter the elements of the first sorted array in ascending order:" << endl;
    for (int i = 0; i < n1; ++i) {
        cin >> value;
        arr1.push_back(value);
    }

    cout << "Enter the number of elements in the second sorted array: ";
    cin >> n2;
    cout << "Enter the elements of the second sorted array in ascending order:" << endl;
    for (int i = 0; i < n2; ++i) {
        cin >> value;
        arr2.push_back(value);
    }

    vector<int> mergedArray = mergeSortedArrays(arr1, arr2);

    cout << "Merged Sorted Array: ";
    for (int val : mergedArray) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
