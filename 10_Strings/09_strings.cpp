//Overview of pattern searching
//Naive Pattern Searching
void patSearching(string &txt,string &pat)
{
    int m=pat.length();
    int n=txt.length();
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(pat[j]!=txt[i+j])
            {
                break;
            }
        }
        if(j==m)
        {
            cout<<i<<" ";
        }
    }
}
//Improved Naive Algorithm for Distinct (in pattern)
//shifts after mismatch is encountered
void patSearch(string &str,string &pat)
{
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(pat[j]!=txt[i+j])
                {
                    break;
                }
        }
        if(j==m)
        {
            cout<<i<<" ";
        }
        if(j==)
        {
            i++;
        }
        else{
            i=(i+j);
        }
    }
}