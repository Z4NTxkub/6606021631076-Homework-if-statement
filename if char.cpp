#include <iostream>
using namespace std;
int main()
{
    char char1, char2, char3;
    int value1, value2, value3, sum;

    cout << "Enter Character (A,B,C) : ";
    cin >> char1;

    if (char1 == 'A') {
        value1 = 10;
    } else if (char1 == 'B') {
        value1 = 20;
    } else if (char1 == 'C') {
        value1 = 30;
    } else {
        value1 = 0;
    }

    cout << "Enter Character (A,B,C) : ";
    cin >> char2;

    if (char2 == 'A') {
        value2 = 10;
    } else if (char2 == 'B') {
        value2 = 20;
    } else if (char2 == 'C') {
        value2 = 30;
    } else {
        value2 = 0;
    }

    cout << "Enter Character (A,B,C) : ";
    cin >> char3;

    if (char3 == 'A') {
        value3 = 10;
    } else if (char3 == 'B') {
        value3 = 20;
    } else if (char3 == 'C') {
        value3 = 30;
    } else {
        value3 = 0;
    }

    sum = value1 + value2 + value3;

    cout << "A = " << value1 << " , B = " << value2 << " , C = " << value3 << endl;
    cout << "A + B + C = " << value1 << " + " << value2 << " + " << value3 << " = " << sum << endl;

	system("pause");
    return 0;
}