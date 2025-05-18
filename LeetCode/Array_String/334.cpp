#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() 
{
    int len;
    cin >> len;

    vector<int> nums(len);
    for(int i = 0; i < len; i++) {
        cin >> nums[i];
    }


    bool result;
    int first = INT_MAX, second = INT_MAX;
    
    for(int i = 0; i < nums.size(); ++i) {
        if(nums[i] <= first) {  // nums이 fisrt 보다 작으면
            first = nums[i];
        }
        else if(nums[i] <= second) {  // nums이 second 보다 작으면 
            second = nums[i];
        }
        else {  // first < second < nums[i] 찾음
            result = true;
            break;
        }
    }
    
    cout << result;

    return 0;
}