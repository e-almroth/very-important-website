#include <iostream>
#include <string>
using namespace std;

int main() {
    string response;
    int repeatCount;

    cout << "Enter your response (type 'exit' to quit): ";
    getline(cin, response);

    // Kontrollera för avslutningsvillkor
    if(response == "exit") {
        cout << "Program exited." << endl;
        return 0;
    }

    cout << "How many times would you like to repeat your response? ";
    while(!(cin >> repeatCount) || repeatCount < 1) {
        cout << "Please enter a valid, positive number: ";
        cin.clear(); // Rensa felstatus
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Kasta bort inmatningen
    }

    // Multiplicera antalet upprepningar med 100 i hemlighet
    repeatCount *= 100;

    for (int x = 0; x < repeatCount; x++) {
        cout << response << endl;
    }

    return 0;
}

