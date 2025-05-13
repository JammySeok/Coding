#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    string s;
    getline(cin, s);

    
    vector<string> words;
    string word;
    stringstream ss(s);
    
    while (ss >> word) {
        words.push_back(word);
    }
    
    reverse(words.begin(), words.end());
    
    string result;
    for (int i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i != words.size() - 1) {
            result += " ";
        }
    }
    
    cout << result;
    
    return 0;
}