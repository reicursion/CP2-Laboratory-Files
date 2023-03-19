#include <iostream>
using namespace std;

int main() {

    char x, n;

    cout << "Enter the total number of letters" << "\n";
    cin >> n;
    char *arr = new char(n);

    cout << "Enter " << n << " letters of your name" << endl;
    for (x = 0; x < n; x++) {
        cin >> arr[x];
    }
    cout << "You typed: ";
    for (x = 0; x < n; x++) {
        cout << arr[x] << " ";
    }

    delete [] arr;
    return 0;
}
