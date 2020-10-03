#include <iostream>
#include <unordered_map>

using namespace std;
int 
main(int argc, char* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // TAKING INPUT FROM CONSOLE
    int n;
    cin >> n;
    int a[n], b[n];
    for(int idx = 0 ; idx < n ; idx++) 
        cin >> a[idx] >> b[idx];

    // BUILDING UNORDERED MAP OF BOTTLES AVAILABLE
    unordered_map<int, int> hm;
    for(int idx = 0 ; idx < n ; idx++)  {
        int bottle = a[idx];
        if(hm.find(bottle) == hm.end())
            hm.emplace(bottle, 1);
        else
            hm.at(bottle) += 1 ;
    }

    // REMOVING THOSE BOTTLES WHICH CAN BE OPENED
    for(int idx = 0 ; idx < n ; idx++)
        if(a[idx] == b[idx] && hm.find(b[idx]) != hm.end() 
                            && hm.at(a[idx]) > 1 ) 
            hm.erase(b[idx]);
        else if(a[idx] != b[idx] && hm.find(b[idx]) != hm.end())
            hm.erase(b[idx]);

    // DISPLAYING LEFT BOTTLES
    int cnt = 0;
    for(auto iter = hm.begin() ; iter != hm.end() ; iter ++)
        cnt += iter->second;
    cout << cnt << endl;
}