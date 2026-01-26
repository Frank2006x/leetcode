# Last updated: 1/26/2026, 8:38:43 AM
class Solution(object):
    def findKthPositive(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: int
        """
        l,r=0,len(arr)-1
        while r>=l:
            mid=(l+r)//2
            missing_terms=arr[mid]-mid-1
           
            if missing_terms<k:
                l=mid+1
            else:
                r=mid-1
        return r+k+1
        