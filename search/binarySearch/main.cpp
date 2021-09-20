#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int binarySearch(const vector<int>& arr, int value, int left, int right) {
    if (right < left) {
        return -1;
    }

    int mid = floor((left+right)/2);

    if (arr[mid] < value) {
        return binarySearch(arr, value, mid+1, right);
    } else if (arr[mid] > value) {
        return binarySearch(arr, value, left, mid-1);
    } else {
        return mid;
    }
}

int main() {
    vector<int> arr = {0,1,2,3,4,5,6,7,8,9};

    cout << binarySearch(arr, 10, 0, 9) << endl;

    return 0;
}