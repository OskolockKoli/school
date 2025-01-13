#include <iostream>
#include <conio.h>

using namespace std;

void showmap(int** arr, int n) {
    int i, j;
    cout << endl;
    cout << "  ";
    for (i = 1; i < n - 1; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (i = 1; i < n - 1; i++) {
        cout << i << " ";
        for (j = 1; j < n - 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void fillmap1(int** arr, int n) {
    int i, j;
    for (i = 1; i < n - 1; i++) {
        for (j = 1; j < n - 1; j++) {
            arr[i][j] = rand() % 2 - 0;
        }
    }
}

int fillmap2(int** arr, int** brr, int n) {
    int i, j, flag;
    flag = 0;
    cin >> i >> j;
    while ((i > n - 2) || (j > n - 2)) {
        cout << "Wrong input, please try again." << endl;
        cin >> i >> j;
    }
    if (brr[i][j] == 2) {
        flag++;
        cout << "Wrong input, please try again." << endl;
    }
    if (brr[i][j] == 1) {
        flag++;
        cout << "Boom!" << endl;
        return 1;
    }
    if (flag == 0) {
        if (brr[i][j + 1] == 1) {
            arr[i][j]++;
        }
        if (brr[i + 1][j + 1] == 1) {
            arr[i][j]++;
        }
        if (brr[i + 1][j] == 1) {
            arr[i][j]++;
        }
        if (brr[i + 1][j - 1] == 1) {
            arr[i][j]++;
        }
        if (brr[i][j - 1] == 1) {
            arr[i][j]++;
        }
        if (brr[i - 1][j - 1] == 1) {
            arr[i][j]++;
        }
        if (brr[i - 1][j] == 1) {
            arr[i][j]++;
        }
        if (brr[i - 1][j + 1] == 1) {
            arr[i][j]++;
        }
        brr[i][j] = 2;

        cout << "Please, tocuh any button to continue." << endl;
        _getch();
        system("cls");

        showmap(arr, n);
        flag = 0;

        return 0;
    }
}

int main()
{
    srand(time(NULL));

    cout << "Saper." << endl;
    cout << "\n\nRules: " << endl;
    cout << "1. Choose the difficulty level - N (number of NxN)" << endl;
    cout << "2. Input coordinates of chosen sector." << endl;
    cout << "3. Try not boom!" << endl;
    cout << endl;

    cout << "Please, tocuh any button to continue." << endl;
    _getch();
    system("cls");

    int n, m, temp;
    temp = 1;
    cout << "Please, input difficulty level - N (NxN): ";
    cin >> m;
    while (m < 2) {
        cout << "Wrong input, please try again." << endl;
        cin >> m;
    }
    n = m + 2;
    int** m1 = new int* [n];
    int** m2 = new int* [n];
    for (int i = 0; i < n; i++) {
        m1[i] = new int[n];
        m2[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m1[i][j] = 0;
            m2[i][j] = 0;
        }
    }

    cout << "Please, tocuh any button to continue." << endl;
    _getch();
    system("cls");

    fillmap1(m2, n);
    //showmap(m2, n);
    showmap(m1, n);

    while (temp != 0) {
        temp = 0;
        for (int i = 1; i < n - 1; i++) {
            for (int j = 1; j < n - 1; j++) {
                if (m2[i][j] == 0) {
                    temp++;
                }
            }
        }
        if (temp != 0) {
            if (fillmap2(m1, m2, n) == 1) {
                break;
            }
        }
        else {
            cout << "You win!" << endl;

            cout << "Please, tocuh any button to continue." << endl;
            _getch();
            system("cls");
        }
    }

    return 0;
}