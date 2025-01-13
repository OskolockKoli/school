#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void showplaces(int** arr, int n, int m) {
    int i, j;
    int count = 0;
    int count2 = 0;
    cout << "    ";
    for (j = 0; j < m; j++) {
        if (j == 10) {
            cout << "     ";
        }
        if (j > 9) {
            cout << j + 1 << " ";
        }
        else {
            cout << j + 1 << "  ";
        }
    }
    cout << endl;
    for (i = 0; i < n; i++) {
        count2++;
        if (count2 == 10) {
            cout << i + 1 << "  ";
        }
        else {
            cout << i + 1 << "   ";
        }
        for (j = 0; j < n; j++) {
            cout << arr[i][j] << "  ";
        }
        cout << "      ";
        for (j = 10; j < m; j++) {
            cout << arr[i][j] << "  ";
        }
        count = 0;
        cout << endl;
    }
}

void orderticket(int** arr, int a, int b) {
    int flag = 0;
    cout << "Please, enter the place and the row you like:" << endl;
    while (flag != 1) {
        cout << "Place: ";
        cin >> a;
        if ((a < 1) || (a > 20)) {
            cout << "Plese, try again and enter correct number of place." << endl;
        }
        else {
            flag++;
        }
    }
    flag = 0;
    while (flag != 1) {
        cout << "Row: ";
        cin >> b;
        if ((b < 1) || (b > 10)) {
            cout << "Plese, try again and enter correct number of row." << endl;
        }
        else {
            flag++;
        }
    }
    if (arr[b - 1][a - 1] == 1) {
        cout << "Sorry, this seat is already taken, but you can choose another seat." << endl;
    }
    else {
        arr[b - 1][a - 1] = 1;
        cout << "Success!" << endl;
    }
}

int main()
{
    ifstream file("note.txt");
    int flag = 0;
    int temp;
    int place;
    int i, j;
    int a, b;
    a = b = 0;
    int n = 10;
    int m = 20;
    int** hall = new int* [n];
    for (i = 0; i < m; i++) {
        hall[i] = new int[m];
    }

    if (file.is_open()) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                file >> place;
                hall[i][j] = place;
            }
        }
        cout << "Welcome to the Fake Cinema! Order tickets, pay money and see why it's Fake!" << endl;
        cout << endl;
        cout << endl;
        cout << "Please, choose your places." << endl;
        cout << endl;
        cout << endl;
        showplaces(hall, n, m);
        cout << endl;
        cout << endl;
        orderticket(hall, a, b);
        while (flag == 0) {
            cout << "If you want buy one more ticket, enter '1' now. If you want to exit, enter '0' now." << endl;
            cin >> temp;
            if (temp == 0) {
                flag = 1;
            }
            if (temp == 1) {
                orderticket(hall, a, b);
            }
            if ((temp != 0) && (temp != 1)) {
                cout << "Please, enter '1' or '0'." << endl;
            }
        }
    }
    else {
        cout << "Error! File is not open!" << endl;
    }

    file.close();

    ofstream file2("note.txt");

    if (file2.is_open()) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                file2 << hall[i][j] << " ";
            }
            file2 << endl;
        }
    }
    else {
        cout << "Error! File is not open!" << endl;
    }

    file2.close();

    return 0;
}
