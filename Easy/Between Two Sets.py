def getTotalX(a, b):
    num = max(a)
    count = 0
    i = 1
    while i*num<min(b):
        if len(list(filter(lambda x: i*num%x==0, a))) == len(a):
            num = i*num
            break
        i+=1
    
    i = 1
    while i*num<= min(b):
        if len(list(filter(lambda x: x%(i*num)==0, b))) == len(b):
            count+=1
        i+=1
    return count
