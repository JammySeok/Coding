#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    string s;
    cin >> s;


    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        while (left < right && vowels.find(s[left]) == vowels.end()) {
            left++;
        }
        while (left < right && vowels.find(s[right]) == vowels.end()) {
            right--;
        }

        swap(s[left], s[right]);
        left++;
        right--;
    }

    cout << s;

    return 0;
}
