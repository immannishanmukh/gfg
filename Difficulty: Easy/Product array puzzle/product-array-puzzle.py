#User function Template for python3

class Solution:
    def productExceptSelf(self, nums):
        #code here
        c , m , n , a = 0 , 1 , len(nums) , []
        for i in nums :
            if i == 0 :
                c+=1
            else :
                m = m*i
        if 2<=c:
            a = [0]*n
            return a 
        elif (c==1):
            a = []
            for i in nums :
                if i == 0:
                    a.append(m)
                else:
                    a.append(0)
            return a 
        else :
            for i in nums :
                a.append(m//i)
            return a
        
                

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())

    for _ in range(t):
        n = int(input())
        arr = [int(x) for x in input().split()]

        ans = Solution().productExceptSelf(arr)
        print(*ans)

# } Driver Code Ends