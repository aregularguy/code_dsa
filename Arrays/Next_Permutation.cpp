string biggerIsGreater(string w) {
    int n = w.length();
    // Read this https://www.nayuki.io/page/next-lexicographical-permutation-algorithm
    int i=n-1;
    while(i>0 and w[i-1] >= w[i]){
        i--;
    }
    if(i<=0)
    return "no answer";
    int j = n-1;
    while(w[j]<= w[i-1]){
        j--;
    }
    char tmp  = w[i-1];
    w[i-1] = w[j];
    w[j] = tmp;
    j = n-1;
    while(i<j){
        char tmp = w[j];
        w[j] = w[i];
        w[i] = tmp;
        i++;
        j--;
    }
    return w;
}
