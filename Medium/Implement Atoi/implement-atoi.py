#User function template for Python

class Solution:
    # your task is to complete this function
    # function should return an integer
    def atoi(self,s):
        # Code here
        res = 0;
        c=0
        for i in range(len(s)):
            if (s[i]=='-'):
                if (c!=0): return -1;
            elif s[i] in "0123456789":
                 res = res*10+int(s[i])
            else:
                return -1
            c+=1
        if (s[0]=='-'):
            res = -1*res
        return res


#{ 
 # Driver Code Starts
#Initial template for Python

if __name__=='__main__':
    t=int(input())
    for i in range(t):
        string = input().strip();
        ob=Solution()
        print(ob.atoi(string))
# } Driver Code Ends