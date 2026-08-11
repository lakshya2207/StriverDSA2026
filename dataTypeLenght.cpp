#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Data Type Ranges in C++\n\n";

    cout << "char:          "
         << (int)numeric_limits<char>::min() << " to "
         << (int)numeric_limits<char>::max() << endl;

    cout << "signed char:   "
         << (int)numeric_limits<signed char>::min() << " to "
         << (int)numeric_limits<signed char>::max() << endl;

    cout << "unsigned char: 0 to "
         << (int)numeric_limits<unsigned char>::max() << endl;

    cout << "short:         "
         << numeric_limits<short>::min() << " to "
         << numeric_limits<short>::max() << endl;

    cout << "unsigned short: 0 to "
         << numeric_limits<unsigned short>::max() << endl;

    cout << "int:           "
         << numeric_limits<int>::min() << " to "
         << numeric_limits<int>::max() << endl;

    cout << "unsigned int:  0 to "
         << numeric_limits<unsigned int>::max() << endl;

    cout << "long:          "
         << numeric_limits<long>::min() << " to "
         << numeric_limits<long>::max() << endl;

    cout << "unsigned long: 0 to "
         << numeric_limits<unsigned long>::max() << endl;

    cout << "long long:     "
         << numeric_limits<long long>::min() << " to "
         << numeric_limits<long long>::max() << endl;

    cout << "unsigned long long: 0 to "
         << numeric_limits<unsigned long long>::max() << endl;

    cout << "float:         "
         << numeric_limits<float>::lowest() << " to "
         << numeric_limits<float>::max() << endl;

    cout << "double:        "
         << numeric_limits<double>::lowest() << " to "
         << numeric_limits<double>::max() << endl;

    cout << "long double:   "
         << numeric_limits<long double>::lowest() << " to "
         << numeric_limits<long double>::max() << endl;

    return 0;
}