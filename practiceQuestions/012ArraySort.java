//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int newArr[n];
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0){
              newArr[k]=a[i];  
              k++;
            } 
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1){
              newArr[k]=a[i];  
              k++;
            } 
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==2){
              newArr[k]=a[i];  
              k++;
            } 
        }
      
        for(int i=0;i<n;i++) a[i]=newArr[i];
        }
    };