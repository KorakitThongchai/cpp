#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter Your Score here\n";
    cin >> x;
    
    if (x <= 49) {
        cout << "Grade : 0\n";
        cout << "Congratulations! You're failed.";
    }
    else if (x >= 50 and x <= 54) {
        cout << "Grade : 1\n";
        cout << "Congratulations! You're failed.";
    }
    else if (x >= 55 and x <= 59) {
        cout << "Grade : 1.5\n";
        cout << "Congratulations! You're almost there.";
    }
    else if (x >= 60 and x <= 64) {
        cout << "Grade : 2\n";
        cout << "Congratulations! You're pass.";
    }
    else if (x >= 65 and x <= 69) {
        cout << "Grade : 2.5\n";
        cout << "Congratulations! You're pass.";
    }
    else if (x >= 70 and x <= 74) {
        cout << "Grade : 3\n";
        cout << "Congratulations! You're did well.";
    }
    else if (x >= 75 and x <= 79) {
        cout << "Grade : 3.5\n";
        cout << "Impressive! You're almost success.";
    }
    else if (x >= 80 and x <= 100) {
        cout << "Grade : 4\n";
        cout << "Excellent! You're success.";
    }
    else{
        cout << "Invalid data, please try agian...";
    }
    
    return 0;
}
