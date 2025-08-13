#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter No. of Elements you want in your array: ";
    int index;
    cin >> index;

    vector<int> arr(index); 
    cout << "Enter Array elements:\n";
    for (int i = 0; i < index; ++i) {
        cin >> arr[i];
    }

    double sum = 0;
    for (int i = 0; i < index; ++i) {
        sum += arr[i];
    }

    cout << "Total Sum of Array is: " << sum << endl;

    double avg =sum / index;
    cout << "The Average of Array Elements is: " << avg << endl;

    return 0;
}
