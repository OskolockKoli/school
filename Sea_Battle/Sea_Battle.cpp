#include <iostream>
#include <conio.h>

using namespace std;

void fillmap(int** arr) {
    int a, flag, temp;
    char b;
    flag = 0;
    temp = 0;
    while (flag != 2) {
        cout << "Insert coordinates: " << endl;
        flag = 0;
        cin >> b;
        int val = (int)b;
        if ((val < 75) && (val > 64)) {
            flag++;
        }
        cin >> a;
        if ((a < 11) && (a > 0)) {
            flag++;
        }
        if (flag != 2) {
            cout << "Wrong position! Please try again." << endl;
        }
        else {
            if ((arr[val - 64][a] != 1) && (arr[val - 65][a] != 1) && (arr[val - 65][a + 1] != 1) && (arr[val - 64][a + 1] != 1) && (arr[val - 63][a + 1] != 1) && (arr[val - 63][a] != 1) && (arr[val - 63][a - 1] != 1) && (arr[val - 64][a - 1] != 1) && (arr[val - 65][a - 1] != 1)) {
                arr[val - 64][a] = 1;
            }
            else {
                cout << "Too close to over ships or same position! Please try again." << endl;
                flag = 0;
            }
        }
    }
}

void fillmap2(int** arr) {
    int a2, flag, flag2, temp;
    char b2;
    flag = 0;
    temp = 0;
    fillmap(arr);
    flag = 0;
    flag2 = 0;
    while (flag != 2) {
        cout << "Insert coordinates: " << endl;
        flag = 0;
        cin >> b2;
        int val = (int)b2;
        if ((val < 75) && (val > 64)) {
            flag++;
        }
        cin >> a2;
        if ((a2 < 11) && (a2 > 0)) {
            flag++;
        }
        if (flag != 2) {
            cout << "Wrong position! Please try again." << endl;
        }
        else {
            if (arr[val - 64][a2] == 1) {
                cout << "Same position! Please try again." << endl;
                flag = 0;
            }
            if (arr[val - 65][a2] == 1) {
                flag2++;
            }
            if (arr[val - 64][a2 + 1] == 1) {
                flag2++;
            }
            if (arr[val - 63][a2] == 1) {
                flag2++;
            }
            if (arr[val - 64][a2 - 1] == 1) {
                flag2++;
            }
            if (flag2 == 1) {
                if (arr[val - 65][a2 - 1] == 1) {
                    flag2++;
                }
                if (arr[val - 65][a2 + 1] == 1) {
                    flag2++;
                }
                if (arr[val - 63][a2 + 1] == 1) {
                    flag2++;
                }
                if (arr[val - 63][a2 - 1] == 1) {
                    flag2++;
                }
                if (flag2 == 1) {
                    arr[val - 64][a2] = 1;
                }
                else {
                    cout << "Too close to over ships or does not comly with the rules! Please try again.123" << endl;
                    flag2 = 0;
                    flag = 0;
                }
            }
            else {
                cout << "Too close to over ships or does not comly with the rules! Please try again." << endl;
                flag2 = 0;
                flag = 0;
            }
        }
    }
}

void fillmap3(int** arr) {
    int a3, flag, flag3, temp;
    char b3;
    flag = 0;
    temp = 0;
    fillmap2(arr);
    flag = 0;
    flag3 = 0;
    while (flag != 2) {
        cout << "Insert coordinates: " << endl;
        flag = 0;
        cin >> b3;
        int val = (int)b3;
        if ((val < 75) && (val > 64)) {
            flag++;
        }
        cin >> a3;
        if ((a3 < 11) && (a3 > 0)) {
            flag++;
        }
        if (flag != 2) {
            cout << "Wrong position! Please try again." << endl;
        }
        else {
            if (arr[val - 64][a3] == 1) {
                cout << "Same position! Please try again." << endl;
                flag = 0;
            }
            if (arr[val - 65][a3] == 1) {
                flag3++;
            }
            if (arr[val - 64][a3 + 1] == 1) {
                flag3++;
            }
            if (arr[val - 63][a3] == 1) {
                flag3++;
            }
            if (arr[val - 64][a3 - 1] == 1) {
                flag3++;
            }
            if (flag3 == 1) {
                if (arr[val - 65][a3 - 1] == 1) {
                    flag3++;
                }
                if (arr[val - 65][a3 + 1] == 1) {
                    flag3++;
                }
                if (arr[val - 63][a3 + 1] == 1) {
                    flag3++;
                }
                if (arr[val - 63][a3 - 1] == 1) {
                    flag3++;
                }
                if (flag3 == 1) {
                    arr[val - 64][a3] = 1;
                }
                else {
                    cout << "Too close to over ships or does not comly with the rules! Please try again.123" << endl;
                    flag3 = 0;
                    flag = 0;
                }
            }
            else {
                cout << "Too close to over ships or does not comly with the rules! Please try again." << endl;
                flag3 = 0;
                flag = 0;
            }
        }
    }
}

void fillmaphit(int** arr, int a, int b) {
    arr[a][b] = 2;
}

void fillmaphit2(int** arr) {
    int a, flag, temp;
    char b;
    flag = 0;
    temp = 0;
    while (flag != 2) {
        cout << "Insert coordinates: " << endl;
        flag = 0;
        cin >> b;
        int val = (int)b;
        if ((val < 75) && (val > 64)) {
            flag++;
        }
        cin >> a;
        if ((a < 11) && (a > 0)) {
            flag++;
        }
        if (flag != 2) {
            cout << "Wrong position! Please try again." << endl;
        }
        else {
            if (arr[val - 64][a] != 1) {
                arr[val - 64][a] = 1;
            }
            else {
                cout << "Too close to over ships or same position! Please try again." << endl;
                flag = 0;
            }
        }
    }
}

void showmap(int** arr, int n) {
    int c = 65;
    cout << "  ";
    for (int i = 0; i < n - 2; i++) {
        cout << i + 1 << " ";
    }
    cout << endl;
    for (int i = 1; i < n - 1; i++) {
        cout << (char)(c + i - 1) << " ";
        for (int j = 1; j < n - 1; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int hit(int** arr, int** brr, int n) {
    cout << "Time to hit the enemy!" << endl;
    fillmaphit2(arr);
    int temp = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (arr[i][j] == 1) {
                if (brr[i][j] == 1) {
                    if ((brr[i - 1][j] == 1) || (brr[i][j + 1] == 1) || (brr[i + 1][j] == 1) || (brr[i][j - 1] == 1)) {
                        cout << endl << "There is a wound!" << endl;
                        temp = 1;
                        fillmaphit(brr, i, j);
                        fillmaphit(arr, i - 1, j + 1);
                        fillmaphit(arr, i + 1, j + 1);
                        fillmaphit(arr, i + 1, j - 1);
                        fillmaphit(arr, i - 1, j - 1);
                    }
                    else {
                        cout << endl << "There is a destruction!" << endl;
                        temp = 1;
                        for (int i = 1; i < n - 1; i++) {
                            for (int j = 1; j < n - 1; j++) {
                                if (arr[i][j] == 1) {
                                    fillmaphit(arr, i, j);
                                    fillmaphit(arr, i - 1, j + 1);
                                    fillmaphit(arr, i + 1, j + 1);
                                    fillmaphit(arr, i + 1, j - 1);
                                    fillmaphit(arr, i - 1, j - 1);
                                }
                            }
                        }
                        /*fillmaphit(brr, i - 1, j);
                        fillmaphit(brr, i - 1, j + 1);
                        fillmaphit(brr, i, j + 1);
                        fillmaphit(brr, i + 1, j + 1);
                        fillmaphit(brr, i + 1, j);
                        fillmaphit(brr, i + 1, j - 1);
                        fillmaphit(brr, i, j - 1);
                        fillmaphit(brr, i - 1, j - 1);
                        fillmaphit(brr, i, j);

                        fillmaphit(arr, i - 1, j);
                        fillmaphit(arr, i - 1, j + 1);
                        fillmaphit(arr, i, j + 1);
                        fillmaphit(arr, i + 1, j + 1);
                        fillmaphit(arr, i + 1, j);
                        fillmaphit(arr, i + 1, j - 1);
                        fillmaphit(arr, i, j - 1);
                        fillmaphit(arr, i - 1, j - 1);
                        fillmaphit(arr, i, j);*/
                    }
                }
                else {
                    temp = 0;
                    fillmaphit(brr, i, j);
                    fillmaphit(arr, i, j);
                }
            }
        }
    }
    if (temp == 0) {
        cout << endl << "Miss!" << endl;
    }
    return temp;
}

int wincheck(int** arr, int n) {
    int temp = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (arr[i][j] == 1) {
                temp++;
            }
        }
    }
    if (temp == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void game(int** arr, int** brr, int** crr, int** drr, int n) {
    int turn = 1;

    while ((wincheck(arr, n) != 1) && (wincheck(brr, n) != 1)) {
        cout << "Turn " << turn << endl;
        cout << "First player" << endl;

        cout << "Your map now:" << endl;
        cout << endl;
        showmap(arr, n);
        cout << endl;
        cout << "Enemy's map now:" << endl;
        cout << endl;
        showmap(crr, n);
        cout << endl;
        while (hit(crr, brr, n) == 1) {
            showmap(crr, n);
            if (wincheck(brr, n) == 1) {
                break;
            }
        }
        if (wincheck(brr, n) == 1) {
            break;
        }

        cout << endl;
        cout << "Press any key to give control to the Second player." << endl;

        _getch();
        system("cls");

        cout << "Turn " << turn << endl;
        cout << "Second player" << endl;

        cout << "Your map now:" << endl;
        cout << endl;
        showmap(brr, n);
        cout << endl;
        cout << "Enemy's map now:" << endl;
        cout << endl;
        showmap(drr, n);
        cout << endl;
        while (hit(drr, arr, n) == 1) {
            showmap(drr, n);
            if (wincheck(arr, n) == 1) {
            }
        }
        if (wincheck(arr, n) == 1) {
        }

        cout << endl;
        cout << "Press any key to give control to the First player." << endl;

        _getch();
        system("cls");
    }

    if (wincheck(brr, n) == 1) {
        cout << endl << "First player win!" << endl;
    }
    if (wincheck(arr, n) == 1) {
        cout << endl << "Second player win!" << endl;
    }

}

int main()
{
    int n = 12;
    int** m1 = new int* [n];
    int** m2 = new int* [n];
    int** m3 = new int* [n];
    int** m4 = new int* [n];
    for (int i = 0; i < n; i++) {
        m1[i] = new int[n];
        m2[i] = new int[n];
        m3[i] = new int[n];
        m4[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m1[i][j] = 0;
            m2[i][j] = 0;
            m3[i][j] = 0;
            m4[i][j] = 0;
        }
    }

    cout << "Sea Battle." << endl;
    cout << endl;
    cout << "Rules: " << endl;
    cout << "1. Two 1x1 ships, one 2x1 ship and one 3x1 ship for each player." << endl;
    cout << "2. Coordinates should be written as: Letter(A-J) Number(1-10) together or through the enter." << endl;
    cout << "3. If it's First player's turn, Second player shouldn't watch the screen. (Same for Second player)" << endl;
    cout << "4. If you destroied or wounded the enemy's ship, you can hit one more time." << endl;
    cout << endl;
    cout << endl;
    cout << "Things to fix: " << endl;
    cout << "1. Coordinates input still can make an infinity cycle." << endl;
    cout << endl;
    cout << "Press any key to start game." << endl;

    _getch();
    system("cls");

    cout << "Preparation: " << endl;
    cout << "First player." << endl;
    cout << "1x1 ships:" << endl;
    cout << "Enter 2 coordinates for each ship. (Exmample: A1)" << endl;

    for (int i = 0; i < 2; i++) {
        fillmap(m1);
    }

    cout << endl;
    showmap(m1, n);
    cout << endl;

    cout << "2x1 ship:" << endl;
    cout << "Enter 2 coordinates for each ship. (Exmample: A1, A2)" << endl;

    for (int i = 0; i < 1; i++) {
        fillmap2(m1);
    }

    cout << endl;
    showmap(m1, n);
    cout << endl;

    cout << "3x1 ship:" << endl;
    cout << "Enter 3 coordinates for each ship. (Exmample: A1, A2, A3)" << endl;

    for (int i = 0; i < 1; i++) {
        fillmap3(m1);
    }

    cout << endl;
    showmap(m1, n);
    cout << endl;

    cout << endl;
    cout << "Press any key to give control to the Second player." << endl;

    _getch();
    system("cls");

    cout << "Preparation: " << endl;
    cout << "Second player." << endl;
    cout << "Enter 2 coordinates for each ship. (Exmample: A1)" << endl;

    for (int i = 0; i < 2; i++) {
        fillmap(m2);
    }

    cout << endl;
    showmap(m2, n);
    cout << endl;

    cout << "2x1 ship:" << endl;
    cout << "Enter 2 coordinates for each ship. (Exmample: A1, A2)" << endl;

    for (int i = 0; i < 1; i++) {
        fillmap2(m2);
    }

    cout << endl;
    showmap(m2, n);
    cout << endl;


    cout << "3x1 ship:" << endl;
    cout << "Enter 3 coordinates for each ship. (Example: A1, A2, A3)" << endl;

    for (int i = 0; i < 1; i++) {
        fillmap3(m2);
    }

    cout << endl;
    showmap(m2, n);
    cout << endl;

    cout << endl;
    cout << "Press any key to start game." << endl;

    _getch();
    system("cls");

    game(m1, m2, m3, m4, n);

    return 0;
}
