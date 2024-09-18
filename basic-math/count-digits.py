def countDigits(n: int) -> int:
    n_str=str(n)
    count=0
    for digit in n_str:
        digit_int=int(digit)
        if(digit_int!=0 and n%digit_int==0):
            count+=1
    return count
    pass