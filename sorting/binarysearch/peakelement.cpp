#include<iostream>
#include<vector>
using namespace std;

// Function to find the peak element in a mountain array
int peakElement(int n, vector<int>& arr) {
    int start = 0, end = n - 1;
    int mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        // Ensure mid is within the valid range
        if (mid > 0 && mid < n - 1) {
            // Check if mid is the peak element
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            // If mid is in the increasing part of the mountain
            else if (arr[mid] > arr[mid - 1]) {
                start = mid + 1;
            }
            // If mid is in the decreasing part of the mountain
            else {
                end = mid - 1;
            }
        } else {
            break; // mid is at the boundary, which is not a valid peak in a mountain array
        }
    }
    return -1; // Return -1 if no peak element is found
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n < 3) {
        cout << "Array size should be at least 3 to form a mountain array." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int peakIndex = peakElement(n, arr);
    if (peakIndex != -1) {
        cout << "Peak element in the mountain array is at index " << peakIndex << endl;
    } else {
        cout << "Invalid mountain array." << endl;
    }

    return 0;
}

