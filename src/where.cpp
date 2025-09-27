#include <string>
#include <iostream>
#include "where.hpp"
using namespace std;

int find(const string& input, char target) {
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == target) {
            return i;
        }
    }
    return -1;
}
int find(const string& input, const string& target) {
    int inputLength = input.length();
    int targetLength = target.length();

    if (targetLength == 0 || targetLength > inputLength) {
        return -1;
    }

    for (int i = 0; i <= inputLength - targetLength; ++i) {
        int j = 0;
        while (j < targetLength && input[i + j] == target[j]) {
            ++j;
        }
        if (j == targetLength) {
            return i;
        }
    }
    return -1;
}
