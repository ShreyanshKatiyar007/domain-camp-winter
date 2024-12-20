// write a array list to take the element from the user and return the element with highest frequency.

#include <iostream>
#include <vector>
#include <unordered_map>

class ArrayList
{
private:
    std::vector<int> array;

public:
    void append(int value)
    {
        array.push_back(value);
    }

    void display() const
    {
        for (int val : array)
        {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    int findHighestFrequency() const
    {
        if (array.empty())
        {
            std::cerr << "Array is empty!" << std::endl;
            return -1;
        }

        std::unordered_map<int, int> frequency;
        for (int val : array)
        {
            frequency[val]++;
        }

        int maxFrequency = 0;
        int mostFrequentElement = array[0];
        for (const auto &pair : frequency)
        {
            if (pair.second > maxFrequency)
            {
                maxFrequency = pair.second;
                mostFrequentElement = pair.first;
            }
        }

        return mostFrequentElement;
    }
};

int main()
{
    ArrayList arrayList;
    int n, element;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i)
    {
        std::cin >> element;
        arrayList.append(element);
    }

    std::cout << "Array List: ";
    arrayList.display();

    int mostFrequent = arrayList.findHighestFrequency();
    if (mostFrequent != -1)
    {
        std::cout << "Element with the highest frequency: " << mostFrequent << std::endl;
    }

    return 0;
}
