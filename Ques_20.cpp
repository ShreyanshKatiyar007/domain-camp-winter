// write a code to check wheather array list contain cycle or not.

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool containsCycle(const vector<int>& array) {

    unordered_map<int, bool> visited;

    int currentIndex = 0;

    while (currentIndex >= 0 && currentIndex < array.size()) {
        if (visited[currentIndex]) {
            return true;
        }

        visited[currentIndex] = true;

        currentIndex = array[currentIndex];
    }

    return false;
}

int main() {
    int n, value;
    vector<int> array;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        array.push_back(value);
    }

    if (containsCycle(array)) {
        cout << "The array list contains a cycle." << endl;
    } else {
        cout << "The array list does not contain a cycle." << endl;
    }

    return 0;
}
