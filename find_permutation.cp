vector<int> Solution::findPerm(const string A, int B) {
    vector<int> res;
    int l=1,r=B,c;
    if (A[0]=='I')
    {
        res.push_back(l);
        l++;
        c=r;
    }
    else
    {
        res.push_back(r);
        r--;
        c=l;
    }
    
    for (int i=0;i<A.length();i++)
    {
        if(A[i]=='I')
        {
            if(A[i+1]=='D')
            {
                res.push_back(r);
                r--;   
            }
            else
            {
                res.push_back(l);
                l++;
            }
        }
        else
        {
            if(A[i+1]=='D')
            {
                res.push_back(r);
                r--;
            }
            else
            {
                res.push_back(l);
                l++;
            }
        }
    }
    
    return res;
}
