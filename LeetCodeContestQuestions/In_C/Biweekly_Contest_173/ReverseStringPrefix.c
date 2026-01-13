char* reversePrefix(char* s, int k)
{
    int i=0,j=k-1;
    
    char temp;

    while(i< j)
    {
        temp=s[i];
        s[i]= s[j];
        s[j] = temp;
        
        i++;
        j--;
    }

    return s;
}
