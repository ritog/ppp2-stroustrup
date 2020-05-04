#include "../../std_lib_facilities.h"

int main() {
    list <int> nums {};
    for (int i = 2; i <= 100; ++i) {nums.push_back(i);}

    int p = 2;

    while (p <= 100) {
        auto it = find(begin(nums), end(nums), p);
        if (it != end(nums)) {
            int m = 2;
            while (p * m <= 100) {
                if (p * m >= p * p)
                {nums.remove(p*m);}
                ++m;
            }
        }
        ++p;
    }
    for (auto x: nums) {cout << x << " ";}

    return 0;

}