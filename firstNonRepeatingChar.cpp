#include <iostream>
#include <vector>
#include <limits>
#include <string>

int firstNonRepeatingChar(const std::string& str)
{
    for (int i = 0; i < str.length(); i++)
    {
        int count = 0;

        for (int j = 0; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    std::string str = "abcba";
    int charIndex = firstNonRepeatingChar(str);
    std::cout << charIndex;

    return 0;
}