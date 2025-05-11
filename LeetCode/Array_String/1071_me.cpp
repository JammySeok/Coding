#include <iostream>
#include <string>
#include <set>

using namespace std;

int main () 
{
    string str1, str2;
    cin >> str1 >> str2;

    
    string result;
    set<char> vali;
    
    if((str1 + str2) == (str2 + str1)) {
        for(int i = 0; i <= str1.length(); i++) {
            if(vali.find(str1[i]) == vali.end()){
                result += str1[i];
                vali.insert(str1[i]);
            }
        }
    }
    cout << result;
    
    return 0;
}