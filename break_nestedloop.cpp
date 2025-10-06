#include <iostream>
using namespace std;

int main() {
    for (int i = 0 ; i < 20; i++){
        for (int j = 1; j <= 100; j++){
            if(j>3)
                break;
            else
                cout << "$";
        }
        cout << endl;
    }
    return 0;
}