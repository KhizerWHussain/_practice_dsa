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

    //  int i = 1;

    // while (i <= n) {
    //     int j = 1;

    //     while (j <= n) {
    //         // cout << j;
    //         cout << n - j + 1;
    //         j += 1;
    //     }
    //     cout << endl;

    //     i += 1;
    // }

    //  int i = 1;

    // while (i <= n) {
    //     int j = 1;

    //     while (j <= n) {
    //         char value = 'A' + i - 1;
    //         cout << value;
    //         j += 1;
    //     }
    //     cout << endl;

    //     i += 1;
    // }

    // int i = 1;

    // while (i <= n) {
    //     int j = 1;

    //     while (j <= n) {
    //         char value = 'A' + j - 1;
    //         cout << value;
    //         j += 1;
    //     }
    //     cout << endl;

    //     i += 1;
    // }

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n) {
    //         char value = 'A' + i + j - 2;
    //         cout << value;
    //         j += 1;
    //     }
    //     cout << endl;

    //     i += 1;
    // }

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= i) {
    //         char value = 'A' + i - 1;
    //         cout << value;
    //         j += 1;
    //     }
    //     cout << endl;

    //     i += 1;
    // }

    // int i = 1;

    // while (i <= n) {
    //     int j = 1;

    //     char val = 'A';

    //     while (j <= i) {
    //         char result = val + i + j - 2; 
    //         cout << result;
    //         j += 1;
    //     }
    //     val += 1;

    //     cout << endl;
    //     i += 1;
    // }

    // int row = 1;

    // while (row <= n) {
    //     int col = 1;

    //     char start = 'A' + n - row;

    //     while (col <= row) {
    //         cout << start;
    //         start += 1;
    //         col += 1;
    //     }
    //     cout << endl;

    //     row += 1;
    // }

    // int row = 1;

    // while (row <= n) {
    //     int col = 1;

    //     while (col <= n) {
    //         if (col > row) {
    //             cout << "*";
    //         }
    //         else {
    //             cout << " ";
    //         }

    //         col++;
    //     }

    //     cout << endl;

    //     row++;
    // }



    // int row = 1;

    // while (row <= n) {
    //     int col = 1;

    //     while (col <= n) {

    //         if (col <= n - row) {
    //             cout << " ";
    //         }
    //         else {
    //             cout << "*";
    //         }
            
    //         col++;
    //     }

    //     cout << endl;

    //     row++;
    // }


    // int row = 1;

    // while (row <= n) {
    //     int col = 1;

    //     while (col <= n) {

    //         if (col <= n - row + 1) {
    //             cout << "*";
    //         }
    //         else {
    //             cout << " ";
    //         }
            
    //         col++;
    //     }

    //     cout << endl;

    //     row++;
    // }

    //  int row = 1;
    // int number = 1;

    // while (row <= n) {
    //     int col = 1;
    
    //     while (col <= n) {
    //         if (col < row) {
    //             cout << " ";
    //         }
    //         else {
    //             cout << row;
    //         }
    //         col++;
    //     }

    //     cout << endl;

    //     row++;
    // }


    // int row = 1;
    // while (row <= n) {
    //     int col = 1;
    //     int number = 1;
    //     int k = 1;

    //     while (col <= n) {
    //         if (col <= n - row) {
    //             cout << " ";
    //         }
    //         else {
    //             cout << number;
    //             number++;
    //         }
    //         col++;
    //     }

    //     while (k <= row - 1 ) {
    //         cout << row - k;
    //         k++;
    //     }

    //     cout << endl;

    //     row++;
    // }

    // int row = 1;

    // while (row <= n) {
    //     int col = 1;
    //     int k = 1;

    //     while (col <=n ) {
    //         if (col <= n + 1 - row) {
    //             cout << col;
    //         }
    //          else {
    //              cout << "*";
    //          }
    //          col++;
    //     }

    //     while (k <= n) {
    //         if (k <= row - 1) {
    //             cout << "*";
    //         }
    //         else {
    //             cout << n + 1 - k;
    //         }
    //         k++;
    //     }

    //     cout << endl;
    //     row++;
    // }

        // result 
        // 1234554321
        // 1234**4321
        // 123****321
        // 12******21
        // 1********1

    return 0;
}