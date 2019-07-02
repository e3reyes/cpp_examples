#include <iostream>
// #define NDEBUG
#include <cassert>
/*
 * To disable asserts without needing to delete add the directive
 * #define NDEBUG before #include <cassert>
 */
using namespace std;

int main(){
    int denominator = 0,
        numerator = 10;
    assert(denominator);
    int quotient = numerator / denominator;
    return 0;
}
