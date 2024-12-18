#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    string roman = "";

    for (; num >= 1000; num -= 1000) roman += "M";
    for (; num >= 900; num -= 900) roman += "CM";
    for (; num >= 500; num -= 500) roman += "D";
    for (; num >= 400; num -= 400) roman += "CD";
    for (; num >= 100; num -= 100) roman += "C";
    for (; num >= 90; num -= 90) roman += "XC";
    for (; num >= 50; num -= 50) roman += "L";
    for (; num >= 40; num -= 40) roman += "XL";
    for (; num >= 10; num -= 10) roman += "X";
    for (; num >= 9; num -= 9) roman += "IX";
    for (; num >= 5; num -= 5) roman += "V";
    for (; num >= 4; num -= 4) roman += "IV";
    for (; num >= 1; num -= 1) roman += "I";

    cout << "Output: " << roman << endl;

    return 0;
}
