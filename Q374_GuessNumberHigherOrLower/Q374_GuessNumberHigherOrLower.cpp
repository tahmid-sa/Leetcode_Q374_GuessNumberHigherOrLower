#include <iostream>

using namespace std;

int guess(int num);

int guessNumber(int n) {
    int low = 1;
    int high = n;
    int mid = 0;

    while (low <= high) {
        mid = low + (high - low) / 2;
        int correct = guess(mid);

        if (correct == 0) {
            return mid;
        }
        else if (correct == -1) {
            high = mid - 1;
        }
        else if (correct == 1) {
            low = mid + 1;
        }
    }

    return mid;
}

int main()
{
    cout << guessNumber(10);

    return 0;
}