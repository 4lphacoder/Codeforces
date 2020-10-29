#include <iostream>

using namespace std;
int 
main(int argc, char* argv[]) {
    // OPTIMISING IO OPERATIONS
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // ATTACHING IO TO FILES
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // TAKING INPUT FROM CONSOLE
    int n;
    cin >> n;
    int arr[n];
    for(int idx = 0 ; idx < n ; idx++)
        cin >> arr[idx];

    int minele, maxele, cnt = 0;
    minele = maxele = arr[0];
    for(int idx = 1; idx < n ; idx++) {
        if(arr[idx] > maxele) {
            maxele = arr[idx];
            cnt ++;
        }
        if(arr[idx] < minele) {
            minele = arr[idx];
            cnt ++;
        }
    }

    cout << cnt ;
    return 0;
}