#include <iostream>

using std::cout;
using std::endl;

constexpr int SIZE = 10;

int main()
{
    char *arr = new char[SIZE];

    for(int i = 0; i < SIZE; ++i) {
        arr[i] = (char)(65 + i);
        cout << arr[i] << "; ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}