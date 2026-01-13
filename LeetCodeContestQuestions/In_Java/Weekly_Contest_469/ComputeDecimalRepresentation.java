class Solution {
    public int[] decimalRepresentation(int n) 
    {
      int count=0;

      int num=n;
        while(num>0)
            {
              num=num/10;
              count++;  
            }

        int []ar=new int[count];

        num=n;
        int i=count,index=count;
        int p=0;
        
        while(i>0)
            {

            int power=1;
            for(int k=0;k<p;k++)
                {
                 power =power * 10;
               }


                
              ar[index-1]=(num%10)*power; 
               num=num/10; 
               i--;  
               index--; 
                p++;
            }

        int nonZero=0;
        for (i=0;i<count;i++)
            {
            if(ar[i]!=0) 
            nonZero++;
        }

        int[] result = new int[nonZero];
        int pos=0;
        for (i=0;i<count;i++) 
        {
          if(ar[i]!=0)
            result[pos++]=ar[i];
        }


        return result;
        
    }
}
