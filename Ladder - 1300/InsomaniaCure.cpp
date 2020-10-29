#include <iostream>

using namespace std;
int 
main(int argc, char* argv[]) {
    // OPTIMISING INPUT/OUTPUT FROM CONSOLE
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // TAKING INPUT FROM CONSOLE
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    // PROCESSING OUTPUT
    int harmcnt = 0;
    for(int iter = 1; iter <= d ; iter ++)
        if(iter % k == 0 || iter % l == 0 || iter % m == 0 || iter % n == 0)
            harmcnt ++;

    cout << harmcnt;
    return 0;
}