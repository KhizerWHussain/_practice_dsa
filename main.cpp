#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the numer of rows: ";
    cin >> n;

    // int i = 1;

    // while (i <= n) {
    //     int j = 1;

    //     while (j <= n) {
    //         cout << "*";
    //         j += 1;
    //     }
    //     cout << endl;

    //     i += 1;
    // }

    // int i = 1;

    // while (i <= n) {
    //     int j = 1;

    //     while (j <= n) {
    //         cout << i;
    //         j += 1;
    //     }
    //     cout << endl;

    //     i += 1;
    // }

     int i = 1;

    while (i <= n) {
        int j = 1;

        while (j <= n) {
            // cout << j;
            cout << n - j + 1;
            j += 1;
        }
        cout << endl;

        i += 1;
    }


    return 0;
}