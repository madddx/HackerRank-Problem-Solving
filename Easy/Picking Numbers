from collections import Counter

def pickingNumbers(a):
    x = Counter(a)
    maxlen = 0
    for i in x:
        current_len = x[i] + x.get(i+1, 0)
        maxlen = max(current_len, maxlen)
        
    return maxlen
