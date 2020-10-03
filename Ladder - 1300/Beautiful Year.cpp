#include <iostream>
#include <iostream>
#include <unordered_set>
#include <sstream>

using namespace std;
bool check(int year) {
    // PARSING INTERGER TO STRING
    stringstream ss;
    string strbuff;
    ss << year;
    ss >> strbuff;

    unordered_set<char> hashset;
    for(char ch : strbuff)
        if(hashset.find(ch) == hashset.end())
            hashset.insert(ch);
        else
            return false;
    return true;
}

int 
main(int argc, char* argv[]) {
    // OPTIMISING IO OPERATIONS
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int year;
    cin >> year;

    while(true) 
        if(check(++year)) {
            cout << year;
            break;
        }

    return 0;
}