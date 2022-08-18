class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int count =0,temp=0;
        while(N){
            if(N & 1 ==1){
                temp++;
                count=max(count,temp);
            }
            else{
                temp=0;
            }
            N=N>>1;
        }
        return count;
    }
};
