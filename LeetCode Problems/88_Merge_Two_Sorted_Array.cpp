/* We will traverse nums2 array from the end (We are traversing nums2 array as it is given that nums1 array will always be greater than or equal to nums2 array and we will traverse nums2 array from end as the array is sorted and we need largest element to solve the problem).

We will compare the largest element of the nums2 array with the largest element of the nums1 array (stored at m-1 index).

The largest element after comparing both the arrays will be stored at the end of nums1 array (at (nums1.length-1) index).

We will use three variables i,j,k which will work as pointers.
i will point at (m-1) index of the nums1 array and holds the largest element of the nums1 array.
j will point at (n-1) index that is the last position of the nums2 array and holds the largest element of the nums2 array.
k will point at the last position of the nums1 array and we will insert the largest element after comparing both the arrays.

We will traverse the nums2 array and will check the 2 conditions :
1 : If index i is greater than 0 and also the element at i index of nums1 array is greater than the element at j index of nums2 array.
If this condition is true, it means element at i index of nums1 array is largest among both the arrays and will be stored at last index/position of the nums1 array.
After this we will decrease the value of i as we have to compare the other element of nums1 array with element of nums2 array.
We will also decrease the value of k as the last position is filled and now new position is needed.
2 : If condition 1 fails, it means that either the element at j index of nums2 array is greater than the element at i index of nums1 array or there is no element left to compare with the nums1 array and we just have to push the elements of nums2 array in the nums1 array (They are the remaining smallest elements).
We will decrease the value of j for other comparisons and also the value of k to store other elements.

Complexity
Time complexity :
O(m+n) as we are inserting m+n elements in the nums1 array.
Space complexity :
O(1) no extra space required.
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n-1;
        int k = m+n-1; // Because the length of nums1 is m+n.

        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                nums1[k] = nums1[i];
                i--;
                k--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }
    }
};
