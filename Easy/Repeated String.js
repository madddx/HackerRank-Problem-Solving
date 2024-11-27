function repeatedString(s, n) {
    // Write your code here
    const len = s.length;
    const rem = n % len;
    let totalA = 0;
    let remA = 0;
    for(var i=0; i < len; i++)
    {
        if(s[i]=='a')
        {
            totalA++;
            if(i<rem) remA++;
        }
    }
    return Math.floor(n/len) * totalA + remA;
}
