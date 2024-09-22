#include <iostream>
#include <climits>
int findMax(int arr[], int start, int end) {
    if (start == end) {
        return arr[start];
    }
    int mid = start + (end - start) / 2;
    int leftMax = findMax(arr, start, mid);
    int rightMax = findMax(arr, mid + 1, end);
    return (leftMax > rightMax) ? leftMax : rightMax;
}
int findMin(int arr[], int start, int end) {
    if (start == end) {
        return arr[start];
    }
    int mid = start + (end - start) / 2;
    int leftMin = findMin(arr, start, mid);
    int rightMin = findMin(arr, mid + 1, end);
    return (leftMin < rightMin) ? leftMin : rightMin;
}
int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    int maxElement = findMax(arr, 0, n - 1);
    int minElement = findMin(arr, 0, n - 1);
    std::cout << "Maximum element: " << maxElement << std::endl;
    std::cout << "Minimum element: " << minElement << std::endl;
    return 0;
}

