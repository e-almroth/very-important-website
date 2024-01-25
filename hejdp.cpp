#include <iostream>
#include <string>
using namespace std;

int main() {
    string response;
    int repeatCount;

    cout << "Enter your response (type 'exit' to quit): ";
    getline(cin, response);

    // Check for exit condition
    if(response == "exit") {
        cout << "Program exited." << endl;
        return 0;
    }

    cout << "How many times would you like to repeat your response? ";
    while(!(cin >> repeatCount) || repeatCount < 1) {
        cout << "Please enter a valid, positive number: ";
        cin.clear(); // Clear the error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the input
    }

    for (int x = 0; x < repeatCount; x++) {
        cout << response << endl;
    }

    return 0;
}
