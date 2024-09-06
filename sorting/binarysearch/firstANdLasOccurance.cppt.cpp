#include<iostream>
#include<vector>
using namespace std;

pair<int, int> FirstAndLastOcc(int n, vector<int>& arr, int v) {
    int start = 0, end = n - 1;
    int first = -1, last = -1;
    int mid, target = v;
    
    // First occurrence
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            first = mid;
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    // Last occurrence
    start = 0;
    end = n - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            last = mid;
            start = mid + 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
//    return {first, last};
 cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;
}

int main() {
    int n;
    cout << "Enter size of sorted array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int v;
    cout << "Enter element you want to find first and last occurrence: ";
    cin >> v;
    
    FirstAndLastOcc(n, arr, v);
//    pair<int, int> result = FirstAndLastOcc(n, arr, v);
//    cout << "First occurrence: " << result.first << endl;
//    cout << "Last occurrence: " << result.second << endl;
    
    return 0;
}

