#include <iostream>
#include <concepts>

using std::cin;
using std::cout;
using std::endl;
using std::integral;

template <typename T>
    requires integral<T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Hello World" << endl;
    cout << add(1, 3) << endl;

    return 0;
}