class Solution:
    def factorialNumbers(self, n):
        if n < 0:
            return None  
        
        elif n == 0 or n == 1:
            return 1
        else:
            return n * self.factorialNumbers(n - 1)