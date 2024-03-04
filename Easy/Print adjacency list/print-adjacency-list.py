
from typing import List


class Solution:
    def printGraph(self, V : int, e : List[List[int]]) -> List[List[int]]:
        # code here
        d={}
        a=[]
        x = []
        for i in e:
           for j in range (2):
                if j==0:
                    if i[j] not in d:
                       x=[]
                       x.append(i[1])
                       d[i[j]] = x
                    else:
                        x=[]
                        x = d[i[j]]
                        x.append(i[1])
                        d[i[j]] = x
                if j==1:
                    if i[j] not in d:
                       x=[]
                       x.append(i[0])
                       d[i[j]] = x
                    else:
                        x=[]
                        x = d[i[j]]
                        x.append(i[0])
                        d[i[j]] = x
        
       
        for i in range(V):
            if i not in d:
                a.append([])
            else:
                a.append(d[i])
        return a


#{ 
 # Driver Code Starts

class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()



class IntMatrix:
    def __init__(self) -> None:
        pass
    def Input(self,n,m):
        matrix=[]
        #matrix input
        for _ in range(n):
            matrix.append([int(i) for i in input().strip().split()])
        return matrix
    def Print(self,arr):
        for i in arr:
            for j in i:
                print(j,end=" ")
            print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        V,E=IntArray().Input()
        
        
        edges=IntMatrix().Input(E, 2)
        
        obj = Solution()
        res = obj.printGraph(V, edges)
        
        for row in res:
            print(*sorted(row))
# } Driver Code Ends