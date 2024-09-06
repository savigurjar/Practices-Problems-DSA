#include<iostream>
#include<vector>
using namespace std;

// Function to find the minimum element in a rotated sorted array
int minElement(int n, vector<int>& arr) {
    int start = 0, end = n - 1;
    int mid, ans = arr[0];

    while (start <= end) {
        mid = start + (end - start) / 2;

        // If the middle element is greater than or equal to the first element
        // it means the smallest element is to the right
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            // Otherwise, it is to the left or might be the mid itself
            ans = arr[mid];
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size." << endl;
//        return 0;
    }

    vector<int> arr(n);
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minElementValue = minElement(n, arr);

    cout << "Minimum element in the rotated array is " << minElementValue << endl;

    return 0;
}

