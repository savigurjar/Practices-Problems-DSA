#include<iostream>
#include<vector>
using namespace std;

// Function to search an element in a rotated sorted array
int searchElement(int n, vector<int>& arr, int target) {
    int start = 0, end = n - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        // If the left half is sorted
        if (arr[start] <= arr[mid]) {
            // Check if the target is in the left half
            if (arr[start] <= target && target < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else {
            // If the right half is sorted
            if (arr[mid] < target && target <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1; // Element not found
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int v;
    cout << "Enter element you want to find: ";
    cin >> v;

    int urEle = searchElement(n, arr, v);
    if (urEle != -1) {
        cout << "Element present at index " << urEle << endl;
    } else {
        cout << "Element is not present" << endl;
    }

    return 0;
}

