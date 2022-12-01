//Given an array, rotate the array by one position in 
//clock-wise direction.
// simple logic while traversing from start to end by manan bahl
void rotate(int arr[], int n)
{
   int previous_element=arr[0];
   int k=0;
   int element_replaced=0;
   for(int i=0;i<n;i++)
   {
       k=i+1;
       if(k==n) k=0;
       element_replaced=arr[k];
       arr[k]=previous_element;
       previous_element=element_replaced;
   }