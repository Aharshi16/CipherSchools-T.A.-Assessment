#include <bits/stdc++.h>
using namespace std;

int solution(vector<int>& arr, int target)
{

    sort(arr.begin(), arr.end());

    int closestSum = 1000000000;

    for (int i = 0; i < arr.size() - 2; i++) {

        int ptr1 = i + 1, ptr2 = arr.size() - 1;

        while (ptr1 < ptr2) {

            int sum = arr[i] + arr[ptr1] + arr[ptr2];
            
              if (sum == target)
              return sum;
            if (abs(target - sum) < abs(target - closestSum)) {
                closestSum = sum;
            }
            if (sum > target) {
                ptr2--;
            }
            else {
                ptr1++;
            }
        }
    }

    return closestSum;
}

int main()
{
    int a[] = { -1, 2, 1, -4 };
    int n = sizeof(a)/sizeof(a[0]);
    int target = 1;
    vector<int> vect(a,a+n);
    cout << solution(vect, target);

    return 0;
}
