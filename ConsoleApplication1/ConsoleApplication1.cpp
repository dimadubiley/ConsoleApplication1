#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));

    int ageFriends[] = { 16, 15, 17, 14, 18 };
    reverse(begin(ageFriends), end(ageFriends));

    cout << "Normal: ";
    for (int i : ageFriends) {
        cout << i << " ";
    }

    cout << "\nReversed: ";
    for (int i : ageFriends) {
        cout << i << " ";
    }

    cout << "\n===============================================\n";

    // 2
    int min = -99, max = 99;
    int mass[20];

    for (int i = 0; i < 20; i++) {
        mass[i] = min + rand() % (max - min + 1);
    }

    cout << "\nNormal massive: ";
    for (int i = 0; i < 20; i++) {
        cout << mass[i] << ", ";
    }

    cout << "\nEven elements in massive: ";
    for (int i = 0; i < 20; i++) {
        if (mass[i] % 2 == 0) {
            cout << mass[i] << " ";
        }
    }

    cout << "\n===============================================\n";

    // 3
    min = -20, max = 20;
    int mass2[10];

    for (int i = 0; i < 10; i++) {
        mass2[i] = min + rand() % (max - min + 1);
    }

    cout << "\nMassive: ";
    for (int i : mass2) {
        cout << i << " ";
    }
    cout << endl;

    int newMass = 0;
    for (int i : mass2) {
        newMass += i;
    }

    cout << "Average of massive: " << static_cast<double>(newMass) / 10 << endl;

    cout << "===============================================\n";

    // 4
    min = -5, max = 5;
    int mass3[10];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (int i = 0; i < 10; i++) {
        mass3[i] = min + rand() % (max - min + 1);
    }

    cout << "\nMassive: ";
    for (int i : mass3) {
        cout << i << " ";
    }
    cout << endl;

    for (int i : mass3) {
        if (i > 0) {
            positiveCount++;
        }
        else if (i < 0) {
            negativeCount++;
        }
        else {
            zeroCount++;
        }
    }

    cout << "+ count: " << positiveCount << endl;
    cout << "- count: " << negativeCount << endl;
    cout << "0 count: " << zeroCount << endl;

    //
    min = -99, max = 99;
    int mass4[10];
    int evenSum = 0, oddSum = 0, oddCount = 0;

    for (int i = 0; i < 10; i++) {
        mass4[i] = min + rand() % (max - min + 1);
    }

    cout << "\nMassive: ";
    for (int i : mass4) {
        cout << i << " ";
    }
    cout << endl;

    for (int i : mass4) {
        if (i % 2 == 0) {
            evenSum += i;
        }
        else {
            oddSum += i;
            oddCount++;
        }
    }

    cout << "Sum of even numbers: " << evenSum << endl;
    if (oddCount > 0) {
        cout << "Average of odd numbers: " << static_cast<double>(oddSum) / oddCount << endl;
    }
    else {
        cout << "No odd numbers" << endl;
    }

    return 0;
}
