class Solution:
    def printGfg(self, n):
        if n<=0:
            return
        self.printGfg(n-1)
        print("GFG", end=' ')
