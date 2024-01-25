#include <iostream>
using namespace std;

int main() {
    string response;
    cout << "Enter your response: ";
    cin >> response;

    for (int x = 0; x < 100; x++) {
        cout << response << endl;
    }

    return 0;
}
