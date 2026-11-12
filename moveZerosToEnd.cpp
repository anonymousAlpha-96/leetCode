
#include <iostream>
#include <vector>

void moveZerosToEnd(std::vector<int>& arr)
{
    int nextPosition = 0;

    for (int currentValue : arr)
    {
        if (currentValue != 0)
        {
            arr[nextPosition] = currentValue;
            nextPosition++;
        }
    }

    for (int i = nextPosition; i < arr.size(); i++)
    {
        arr[i] = 0;
    }

    for (auto value : arr)
    {
        std::cout << value << " ";
    }
}

int main()
{
    std::vector<int> arr = {0, 5, 0, 8, 20, 5};

    moveZerosToEnd(arr);

    return 0;
}