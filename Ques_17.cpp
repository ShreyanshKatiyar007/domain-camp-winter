//write a array list code in c++ to take the element from the user and return the element with lowset frequency.

#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>

using namespace std;

class ArrayList {
private:
    vector<int> array;

public:
    void append(int value) {
        array.push_back(value);
    }

    int findLowestFrequencyElement() {
        if (array.empty()) {
            cout << "Array is empty!" << endl;
            return -1;
        }

        unordered_map<int, int> frequencyMap;
        for (int val : array) {
            frequencyMap[val]++;
        }

        int minFrequency = numeric_limits<int>::max();
        int result = -1;
        for (const auto& pair : frequencyMap) {
            if (pair.second < minFrequency) {
                minFrequency = pair.second;
                result = pair.first;
            }
        }

        return result;
    }

    void display() const {
        for (int val : array) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayList arrayList;
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        arrayList.append(value);
    }

    cout << "Array List: ";
    arrayList.display();

    int lowestFrequencyElement = arrayList.findLowestFrequencyElement();
    if (lowestFrequencyElement != -1) {
        cout << "Element with the lowest frequency: " << lowestFrequencyElement << endl;
    }

    return 0;
}
