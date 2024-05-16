#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char randGen[] = "0123456789" "!@#$%^&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
int size = sizeof(randGen) - 1;

int main() {
    char choice;
    int length;

    do {

        cout << endl;
        cout << "Please input the length of the password you want to generate: ";
        cin >> length;

        srand(time(0));

        cout << endl;
        cout << "Generated Password: ";
        for (int i = 0; i < length; i++) {
            cout << randGen[rand() % ::size];
        }
		cout << endl;

        do {
        	cout << endl;
            cout << "Do you want to generate another password? (Y/N): ";
            cin >> choice;

            if (choice != 'Y' && choice != 'N') {
                cout << "Please enter Y or N." << endl;
            }
        } while (choice != 'Y' && choice != 'N');

    } while (choice == 'Y');

    return 0;
}
