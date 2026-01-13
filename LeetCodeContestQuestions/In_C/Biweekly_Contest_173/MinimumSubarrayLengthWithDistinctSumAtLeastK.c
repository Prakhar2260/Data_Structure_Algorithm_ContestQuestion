int minLength(int* nums, int numsSize, int k) 
{
    int ans = 100001;

    int track[100001]= {0};   
    int sum=0;
    int i =0;               

    for(int j=0;j<numsSize;j++)  
    {
        if (track[nums[j]] == 0)
        {
            sum = sum+nums[j];
        }
        
        track[nums[j]]++;

        while(sum >= k)
        {
            int len=j-i+1;
            
            if (len<ans)
                ans=len;

            track[nums[i]]--;
            
            if(track[nums[i]]== 0)
            {
                sum =sum-nums[i];
            }
            
            i++;
        }
    }

    if (ans==100001)
        return -1;

    return ans;
}
