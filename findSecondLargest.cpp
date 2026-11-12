
#include <iostream>
#include <vector>


int findSecondLargest(const std::vector<int>& arr)
{
    int largest;
    int secondLargest;

    bool hasLargest = false;
    bool hasSecondLargest = false;

    for (int current : arr)
    {
        if (!hasLargest)
        {
            largest = current;
            hasLargest = true;
        }
        else if (current > largest)
        {
            secondLargest = largest;
            hasSecondLargest = true;
            largest = current;
        }
        else if (current < largest &&
                 (!hasSecondLargest || current > secondLargest))
        {
            secondLargest = current;
            hasSecondLargest = true;
        }
    }

    if (!hasSecondLargest)
    {
        return -1;
    }

    return secondLargest;
}


int main()
{
    std::vector<int> arr = {0, 5, 0, 8, 20, 5};

    int result = findSecondLargest(arr);
    std::cout << result << std::endl;


    return 0;
}
