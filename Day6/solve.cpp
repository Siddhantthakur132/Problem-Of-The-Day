class Solution {
public:
bool count(char &ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        return true;
    }
    return false;
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int N=words.size();
        int Q=queries.size();

        vector<int>cumsum(N);
        vector<int>result(Q);
        
        int sum=0;
        for(int i=0;i<N;i++)
        {
            if(count(words[i][0]) && count(words[i].back()))
            {
                sum++;
            }
            cumsum[i]=sum;
        }

        for(int i=0;i<Q;i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];

            result[i]=cumsum[r]- ((l>0) ? cumsum[l-1] :0);
        }
        return result;
    }
};