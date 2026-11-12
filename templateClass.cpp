
#include <iostream>
#include <string>

// Class template with two different types
template <typename T, typename U>
class PairBox
{
private:
    T firstValue;
    U secondValue;

public:
    PairBox(T first, U second)
        : firstValue(first), secondValue(second)
    {
        // Member initialization using initializer list
    }

    void printValues() const
    {
        std::cout << firstValue << " " << secondValue << std::endl;
    }
};

// Class template with default template parameter
template <typename T, typename U = int>
class Calculator
{
private:
    T first;
    U second;

public:
    Calculator()
    {
        std::cout << "Calculator starts\n";
    }

    Calculator(T fValue, U sValue)
        : first(fValue), second(sValue)
    {
    }

    void printValues() const
    {
        std::cout << first << " " << second << std::endl;
    }
};

// Function template with auto return type
template <typename T, typename U>
auto addValues(T first, U second)
{
    auto sum = first + second;
    return sum;
}

// Generic function template
template <typename T>
void printValue(T val)
{
    std::cout << "Generic : " << val << std::endl;
}

// Explicit template specialization for std::string
template <>
void printValue<std::string>(std::string str)
{
    std::cout << "String : " << str << std::endl;
}

int main()
{
    PairBox<int, std::string> intPair(12, "24");
    intPair.printValues();

    PairBox<int, std::string> strPair(105, "cpp coding");
    strPair.printValues();

    Calculator<double> c2;

    Calculator<int, int> c1(12, 24);
    c1.printValues();

    std::cout << "Values when added : "<< addValues(10, 20) << "\n";

    printValue(30);

    std::string msg = "happy C++ coding";
    printValue(msg);

    return 0;
}
