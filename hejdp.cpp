#include <iostream>
#include <string>  // Make sure to include this for the string class
using namespace std;

int main() {
    string response;
    cout << "Enter your response: ";
    getline(cin, response); // Using getline to read the whole line

    for (int x = 0; x < 100; x++) {
        cout << response << endl;
    }

    return 0;
}
