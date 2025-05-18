#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string word1;
    string word2;
    cin >> word1;
    cin >> word2;

    
    int len1 = word1.length();
    int len2 = word2.length();
    int len = (len1 >= len2) ? len1 : len2;

    string result;
    for(int i = 0; i <= len; i++) {
        if(i < len1) result += word1[i];
        if(i < len2) result += word2[i];
    }
    
    cout << result;
    
    return 0;
}


