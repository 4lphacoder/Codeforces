#include <iostream>
#include <algorithm>

using namespace std;
int 
main(int argc, char* argv[] ){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // TAKING INPUT FROM USER
    int a, b;
    cin >> a >> b;
    int nextprime = -1;
    // BUILDING SIEVE OF PRIMES
    int dp[b + 1] = { 0, 0, 1 };
    fill_n(dp + 2, b - 1, 1);
    for(int num = 2 ; num*num <= b + 1; num++)
        if(num) 
            for(int factor = 1; factor <= b / num ; factor ++)
            dp[num * factor] = 0;

    // CALCULATING NEXTPRIME
    for(int iter = a + 1; iter <= b ; iter ++)
        if(dp[iter]) {
            nextprime = iter ;
            break;
        }

    // CHECKING WHETHER NEXT PRIME IS B
    if(nextprime == b)
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}