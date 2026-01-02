#include <iostream>
using namespace std;

class Array {
private:
    int *arr;
    int n;

public:
    // Constructor
    Array(int size) {
        n = size;
        arr = new int[n];
    }

    // Input function
    void input() {
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    // Linear search function
    void linearSearch(int ele) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == ele) {
                cout << "Element found at index " << i << endl;
                return;
            }
        }
        cout << "Element not found" << endl;
    }

    // Destructor
    ~Array() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    Array obj(n);   // Object created

    obj.input();

    int ele;
    cout << "Enter element to search: ";
    cin >> ele;

    obj.linearSearch(ele);

    return 0;
}

