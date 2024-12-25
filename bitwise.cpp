#include <iostream>
#include <math.h>
using namespace std;

int reverse (int value) {
    int temp = 0;

    while (value != 0) {
        int remain = value % 10;
        temp = temp * 10 + remain;

        value = value / 10;
    }

    return temp;
}

int getBinaryRepresentation (int value) {
    int temp = 0;
    int i = 0;

    while (value != 0)
    {
        int bit = value&1;
        temp = (bit * pow(10, i)) + temp;

        value = value >> 1;
        i++;
    }

    return temp;
}

int getReverseRepresentation (int value) {
    int temp = 0;

    while (value != 0) {
        int digit = value % 10;

        temp = temp * 10 + digit;

        value = value / 10;
    }

    return temp;
}

int getDecimalRepresentation (int binaryCode) {
    int decimal = 0;
    int i = 0;

    while (binaryCode != 0) {
        int digit = binaryCode % 10; // 1010 --> 0

        if (digit == 1) {
            decimal = decimal + pow(2, i); // 0 = 0 + 2 powers 1 = 1 --> 1
        }

        binaryCode = binaryCode / 10;
        i++;
    }

    return decimal;
}

int main () {
    // int a = 4;
    // int b = 6;

    // cout << "a & b " << (a&b) << endl;
    // cout << "a | b " << (a|b) << endl;
    // cout << "~a " << ~a << endl;
    // cout << "~b " << ~b << endl;
    // cout << "a ^ b " << (a^b) << endl;

    // cout << (17>>1) <<endl;
    // cout << (17>>2) <<endl;

    // cout << (19<<1) <<endl;
    // cout << (19<<2) <<endl;
    // cout << (21<<2) <<endl;

    // int a, b = 1;
    // a = 10;

    // if (++a) {
    //     cout << "a is " << a << endl;
    //     cout << b;
    // }
    // else {
    //     cout << ++b;
    // }

    // int a = 1;
    // int b = 2;

    // if (a-- > 0 && ++b > 2) {
    //     cout << "Stage 1 - inside if??" << endl;
    // }
    // else {
    //     cout << "Stage 2 - inside else" << endl;
    // }

    // cout << a << " " << b << endl;

    // int number = 3;
    // cout << (25 * (++number)) << endl;

    // int a = 1;
    // int b = ++a;
    // int c = ++a;

    // cout << b << endl;
    // cout << c << endl;

    // int n;
    // cout << "Enter the number of n " << endl;
    // cin >> n;

    // int sum = 0;

    // for (int i = 1; i <= n; i++) {
    //     sum += i;
    // }

    // cout << sum;

    // int n;
    // cout << "Enter the number of n ";
    // cin >> n;

    // int a = 0;
    // int b = 1;

    // cout << a << " " << b << " ";

    // for (int i = 1; i <= n; i++) {
    //     int next = a + b;
    //     cout << next << " ";
    //     a = b;
    //     b = next;
    // }

    // int n;
    // cout << "enter the value: ";
    // cin >> n;

    // bool isPrime = 1;

    // for (int i = 2; i < n; i++) {
    //     if (n % i == 0) {
    //         isPrime = 0;
    //         break;
    //     }
    // }

    // if (isPrime == 0) {
    //   cout << "not a prime number" << endl;
    // }
    // else {
    //     cout << "its a prime number" << endl;
    // }

    // for (int i = 0; i < 3; i++) {
    //     cout << "is is ";
    //     cout << i;
    //     cout << endl;
    //     continue;
    //     cout << "after continue";
    // }

    // for (int i = 0; i <= 5; i++) {
    //     cout << i << " ";
    //     i++;
    // }

    // int a;
    // cout << a;

    // int n;
    // cout << "enter number: ";
    // cin >> n;

    // int prod = 1;
    // int sum = 0;

    // while (n != 0) {
    //     int remain = n % 10;
    //     prod *= remain;
    //     sum += remain;

    //     n = n / 10;
    // }

    // int answer = prod - sum;
    // cout << answer << endl;


    // int result = reverse(4516);
    // cout << result << endl;

    int n;
    // cout << "enter decimal number: ";
    cout << "enter binary code: ";
    cin >> n;

    // cout << getBinaryRepresentation(n) << endl;
    // cout << getReverseRepresentation(n) << endl;
    cout << getDecimalRepresentation(n) << endl;

    cout << endl;

    return 0;
}

