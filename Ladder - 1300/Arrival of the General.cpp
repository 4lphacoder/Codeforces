#include <iostream>
#include <algorithm>

using namespace std;

void
swap(int arr[], int idx1, int idx2) {
    int tmp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = tmp;
}

int 
main(int argc, char* argv[]) {
    // OPTIMISING THE IO OPERATIONS
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for(int idx = 0 ; idx < n ;idx++)
        cin >> arr[idx];

    int cnt = 0 ;
    int minpos = 0;
    for(int idx = 1 ; idx < n ; idx++)
        if(arr[idx] <= arr[minpos])
            minpos = idx;

    cnt = n - minpos - 1;
    for(int iter = minpos + 1 ; iter < n ; iter ++)
        swap(arr, iter - 1, iter);

    int maxpos = 0;
    for(int idx = 1 ; idx < n ; idx++)
        if(arr[idx] > arr[maxpos])
            maxpos = idx;
    
    cnt += maxpos;
    cout << cnt << endl;
    return 0;
}