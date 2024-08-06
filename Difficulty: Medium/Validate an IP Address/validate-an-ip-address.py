#User function Template for python3
class Solution:
    def isValid(self, s):
        #code here
        ss = ""
        c=0
        if (16<len(s)):
            return False
        for i in s:
            if i == '.':
                if (ss == ''):
                   return False 
                else:
                    if (2<=len(ss)):
                        if (ss[0]=='0'):
                            return False
                    ss = int (ss) 
                    if (0<=ss and ss<=255):
                        ss = ""
                        c+=1
                    else:
                        return False
            else :
                ss = ss + i
        if c==3:
            if (2<=len(ss)):
                if (ss[0]=='0'):
                    return False
            ss = int (ss) 
            if (0<=ss and ss<=255):
               return True
            else:
                return False



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(0, t):
        s = input()
        ob = Solution()
        if (ob.isValid(s)):
            print("true")
        else:
            print("false")

# } Driver Code Ends