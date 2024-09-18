class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        is_negative = x<0
        x_str=str(abs(x))
        rev=x_str[::-1]
        rev_int=int(rev)

        if is_negative: 
            rev_int=-rev_int

        if rev_int < -2**31 or rev_int > 2**31 - 1:
            return 0
            
        return rev_int