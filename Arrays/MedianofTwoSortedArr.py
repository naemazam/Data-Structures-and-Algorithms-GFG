# Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

# The overall run time complexity should be O(log (m+n)).

import sys
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        m, n = len(nums1), len(nums2)
        if m > n:
            nums2, nums1 = nums1, nums2
            m, n = len(nums1), len(nums2)
        low, high = 0, m
        
        while(low <= high):
            p1 = (low + high) >> 1
            p2 = (m + n + 1) // 2 - p1
            
            l1, l2 = -sys.maxsize - 1 if p1 == 0 else nums1[p1-1], -sys.maxsize - 1 if p2 == 0 else nums2[p2-1]
            r1, r2 = sys.maxsize if p1 == m else nums1[p1], sys.maxsize if p2 == n else nums2[p2]
            
            if l1 <= r2 and l2 <= r1:
                if (m + n) % 2 == 0 :
                    return (max(l1, l2) + min(r1, r2)) / 2.0
                else :
                    return max(l1, l2)
            elif l1 > r2:
                high = p1 - 1; 
            else :
                low = p1 + 1; 
                
        return 0.0; 