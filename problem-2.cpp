#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int left_arr[n1];
    int right_arr[n2];

    for (int i = 0; i < n1; i++)
        left_arr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        right_arr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];
            i++;
        } else {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

void merge_sort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> input_array(n);

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> input_array[i];
    }

    std::cout << "Original Array: ";
    for (int num : input_array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    merge_sort(input_array, 0, n - 1);

    std::cout << "Sorted Array: ";
    for (int num : input_array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
