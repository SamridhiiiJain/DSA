int climbStairs(int n) {
    int nextToNext=0;
    int next=1;
    int current;
    for(int i=n-1;i>=0;i--)
    {
        current=next+nextToNext;
        nextToNext=next;
        next=current;
    }
    return current;
}