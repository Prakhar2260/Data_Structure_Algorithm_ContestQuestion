class Solution {
    public String majorityFrequencyGroup(String s) 
    {
      int []ar=new int[26];
       char[] alpha={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 

        int k=0;
      for(char i='a';i<='z';i++,k++)
          {   
           int freq=0;
           for(int j=0;j<s.length();j++)
            {    
              char ch=s.charAt(j);   
                if(ch==i)
                  freq++;
            }
            ar[k]=freq;  
          }

        int maxgr=0;
        int choosegr=0;    
        int grsize=0;

        
        for(int i=0;i<26;i++)
            {
             if(ar[i]>0)
             {
               grsize=0;
                for(int j=0;j<26;j++)
                    {
                     if(ar[i]==ar[j])
                         grsize++;
                    }

                 if(grsize>maxgr||(grsize==maxgr&&ar[i]>choosegr))
                 {
                   maxgr=grsize;
                   choosegr=ar[i];  
                 } 
             } 
            }

        String output="";

        for(int i=0;i<26;i++)
            {
              if(ar[i]==choosegr)
               {
                 output=output+alpha[i];  
               }
            }

        return output;
     
    }
}
