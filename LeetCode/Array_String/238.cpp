#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int len;
    cin >> len;

    vector<int> nums(len);

    for(int i = 0; i < len; i++) {
        cin >> nums[i];
    }


    int n = nums.size();
    vector<int> result(n, 1);

    // 왼쪽 누적곱 (Perfix)
    int left = 1;
    for (int i = 0; i < n; ++i) {
        result[i] = left;
        left *= nums[i];
    }
    /*
    예시: nums = [1, 2, 3, 4]
    i=0: result[0] = 1, (left=1), left *= 1 -> left = 1
    i=1: result[1] = 1 , (left=1), left *= 2 -> left = 2
    i=2: result[2] = 2 , (left=2), left *= 3 -> left = 6
    i=3: result[3] = 6 , (left=6), left *= 4 -> left = 24
    result = [1, 1, 2, 6]
    */
    
    // 오른쪽 누적곱 (suffix)
    int right = 1;
    for (int i = n - 1; i >= 0; --i) {
        result[i] *= right;
        right *= nums[i];
    }
    /*
    i=3: result[3] *= 1 -> 6, right *= 4 -> right = 4
    i=2: result[2] *= 4 -> 8, right *= 3 -> right = 12
    i=1: result[1] *= 12 -> 12, right *= 2 -> right = 24
    i=0: result[0] *= 24 -> 24, right *= 1 -> right = 24
    result = [24, 12, 8, 6]
    */

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}