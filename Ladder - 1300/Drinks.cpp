#include <iostream>

using namespace std;
int
main(int argc, char* argv[]) {
    // OPTIMISING THE IO FROM CONSOLE
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // TAKING INPUT FROM CONSOLE
    int n;
    cin >> n;
    int arr[n];
    for(int idx = 0 ; idx < n ; idx++)
        cin >> arr[idx];
    
    // PROCESSING OUTPUT
    double ans = 0;
    for(int idx = 0 ; idx < n ; idx++)
        ans += (double)arr[idx] / (double)n;

    // DISPLAYING OUTPUT
    cout << ans << endl;
    return 0;
}