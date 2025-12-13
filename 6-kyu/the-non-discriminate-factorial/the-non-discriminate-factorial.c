int factorial(int n) {
​
   int f= 1;
    int l =n;
    if (n<0)
    {
        n*=-1;
    }
    for (int c = 1;c<=n;c++)
    {
        f*=c;
    }
    if (l<0&&l%2!=0)
    {
        f*=-1;
    }
    else
    {
        
    }
    return f;
​
}