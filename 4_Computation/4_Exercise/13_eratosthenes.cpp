//A variation of Sieve of Eratosthenes
#include "../../std_lib_facilities.h"

int main() {
    list <int> nums {1};
    for (int i = 2; i <= 100; ++i) {nums.push_back(i);}

    for (int p = 2; p <= 10; ++p)
    {nums.remove_if([p] (int i) {return !(i%p);});}

    for(auto x: nums) { cout << x << " ";}

    cout << "\n";

    return 0;

}