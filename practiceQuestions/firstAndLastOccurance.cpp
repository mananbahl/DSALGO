//Find first and last positions of an element in a sorted array
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x && arr[i-1]!=x) v.push_back(i);
        if(arr[i]==x && arr[i+1]!=x) v.push_back(i); 
    }
    if(v.empty()) 
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    return v;
}

//best Java Solution
JAVA solution ;-
ArrayList<Long> find(long arr[], int n, int x)
{
// code here
ArrayList<Long> al = new ArrayList<Long>();
int i=0;
int j=n-1;
while(i<=j)
{
if(arr[i]!=(long)x) i++;
if(arr[j]!=(long)x) j--;
if(arr[i]==(long)x && arr[j]==(long)x)
{
al.add((long)i);
al.add((long)j);
break;
}
}
if(i>j)
{
al.add((long)-1);
al.add((long)-1);
}
return al;  
}