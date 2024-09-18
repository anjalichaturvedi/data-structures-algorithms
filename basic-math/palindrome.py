class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        x_str=str(abs(x))
        rev_str=x_str[::-1]
        rev_int=int(rev_str)
        if (rev_int==x):
            return True
        