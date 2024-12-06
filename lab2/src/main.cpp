#include <iostream>
#include <vector>
#include <windows.h>
#include <limits>
#include <numeric>
std::vector<int> array;
int min_val;
int max_val;
double average_val = 0.0;

// функция для потока min_max
DWORD WINAPI MinMaxThread(LPVOID lpParam) {
    min_val = (std::numeric_limits<int>::max)();
    max_val = (std::numeric_limits<int>::min)();
    for (int num : array) {
        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
        Sleep(7); // спать 7 мс после каждого сравнения
    }
    std::cout << "Min: " << min_val << ", Max: " << max_val << std::endl;
    return 0;
}

// функция для потока average
DWORD WINAPI AverageThread(LPVOID lpParam) {
    int sum = 0;
    for (int num : array) {
        sum += num;
        Sleep(12); // спать 12 мс после каждого суммирования
    }
    average_val = static_cast<double>(sum) / array.size();
    std::cout << "Average: " << average_val << std::endl;
    return 0;
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    array.resize(n);
    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }
    HANDLE hMinMax = CreateThread(nullptr, 0, MinMaxThread, nullptr, 0, nullptr);
    HANDLE hAverage = CreateThread(nullptr, 0, AverageThread, nullptr, 0, nullptr);
    WaitForSingleObject(hMinMax, INFINITE);
    WaitForSingleObject(hAverage, INFINITE);
    for (int& num : array) {
        if (num == min_val || num == max_val) {
            num = static_cast<int>(average_val);
        }
    }
    std::cout << "Modified array: ";
    for (int num : array) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    CloseHandle(hMinMax);
    CloseHandle(hAverage);
    return 0;
}
