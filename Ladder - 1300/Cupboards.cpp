#include <iostream>

using namespace std;
int 
main(int argc, char* argv[]) {
    // OPTIMISING IO OPERATIONS
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    // TAKING INPUT FROM CONSOLE
    int n;
    cin >> n;

    int left[n], right[n];
    for(int idx = 0 ; idx < n ; idx++) 
        cin >> left[idx] >> right[idx];

    int lcnt = 0, rcnt = 0;
    for(int idx = 0 ; idx < n ; idx++) {
        if(left[idx] == 1)
            lcnt += 1;
        if(right[idx] == 1)
            rcnt += 1;
    }

    cout << min(n - lcnt, lcnt) + min(n - rcnt, rcnt);
    return 0;
}