#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;
int
main(int argc, char* argv[]) {
    string strbuff;
    cin >> strbuff;

    int uppercnt = 0, lowercnt = 0;
    for(char ch : strbuff)
        if(isupper(ch)) uppercnt ++;
        else lowercnt ++;

    if(uppercnt <= lowercnt)  
    transform(strbuff.begin(), strbuff.end(), strbuff.begin(), ::tolower);
        
    else 
    transform(strbuff.begin(), strbuff.end(), strbuff.begin(), ::toupper);
    cout << strbuff ;
    return 0;
}