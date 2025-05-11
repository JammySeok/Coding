#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int main () 
{
    string str1, str2;
    cin >> str1 >> str2;


    string result;

    if((str1 + str2) == (str2 + str1)) {
        int gcdLen = gcd(str1.size(), str2.size());
        result = str1.substr(0, gcdLen);
    }
    else result = "";

    cout << result;
    
    return 0;
}