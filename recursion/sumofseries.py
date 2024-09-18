class Solution:
    def sumOfSeries(self,n):
        #code here
        if n<=0:
            return 0
        else:
            return (n * (n + 1) // 2) ** 2    #No TLE 