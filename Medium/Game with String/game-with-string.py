#User function Template for python3

class Solution:
    def minValue(self, s, k):
        # code here
        d = {}
        for i in s:
            if i not in d:
                d[i] = 1
            else :
                d[i] = d[i]+1
        for _ in range (k):
            c = -1
            for i in d:
                if ( c < d[i] ):
                    c = d[i]
                    j = i
            d[j] = c-1
        s = 0
        # print (d)
        for i in d:
            s = s + ( d[i] * d[i])
        
        return s

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input()
        k = int(input())
        
        ob = Solution()
        print(ob.minValue(s, k))
# } Driver Code Ends