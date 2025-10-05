#include <iostream>
#include <string>
#include <algorithm> // For std::reverse

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Method 1: Using std::reverse from <algorithm>
    string revStr = str;
    reverse(revStr.begin(), revStr.end());

    cout << "Reversed string (method 1): " << revStr << endl;

    // Method 2: Manual swapping
    string manualRev = str;
    int n = manualRev.length();
    for (int i = 0; i < n / 2; i++) {
        swap(manualRev[i], manualRev[n - i - 1]);
    }

    cout << "Reversed string (method 2): " << manualRev << endl;

    return 0;
}
