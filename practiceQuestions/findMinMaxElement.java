
//User function Template for Java

/*
 class pair  
{  
    long first, second;  
    public pair(long first, long second)  
    {  
        this.first = first;  
        this.second = second;  
    }  
} */

class Compute 
{
    static pair getMinMax(long a[], long n)  
    {
         
        int min_index=0;
        int max_index=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<a[min_index]) min_index=i;
            if(a[i]>a[max_index]) max_index=i;
        }
        pair p=new pair(a[min_index],a[max_index]);
        return p;
    }
}
