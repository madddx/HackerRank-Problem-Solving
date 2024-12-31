def camelcase(s):
    cnt = 1;
    for x in s:
        if x.isupper():
            cnt = cnt + 1
    return cnt
