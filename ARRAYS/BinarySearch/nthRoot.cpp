int nthRoot(int n, int m) {
    if(m==0||m==1)
    return m;
    if(n==1)
    return m;
    if(n==0)
    return 1;
    int start = 1, end = m, ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        long long power = 1;
        for (int i = 0; i < n; ++i) {
            power *= mid;
          //  if (power > m) break; 
        }

        if (power == m) {
            return mid; 
        } else if (power < m) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans; 
}