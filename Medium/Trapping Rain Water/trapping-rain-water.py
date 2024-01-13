class Solution:
    def trappingWater(self, arr,n):
        #Code here
        l=0
        r=len(arr)-1
        m1=arr[l]
        m2=arr[r]
        ans=0
        while l<r:
            m1=max(m1,arr[l])
            m2=max(m2,arr[r])
            if m1<m2:
                ans+=m1-arr[l]
                l+=1
            else:
                ans+=m2-arr[r]
                r-=1
        return ans
 # Driver Code Starts
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            obj = Solution()
            print(obj.trappingWater(arr,n))
            
            
            T-=1


if __name__ == "__main__":
    main()



# } Driver Code Ends