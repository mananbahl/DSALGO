import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
	 Scanner sc=new Scanner(System.in);
	 int t=sc.nextInt();
     if(t>=100 || t<=1) return;
	 int req=0;
	 int arr[]=null;
     while(t>=1 && t<=100)
	 {
	   req=sc.nextInt();
	   arr=new int[req];  
	   for(int i=0;i<req;i++) arr[i]=sc.nextInt();
	   for(int i=req-1;i>=0;i--)
	   {
	       System.out.print(arr[i]+" ");   
	   }
	  
	   t--;
	 }
	  System.out.println("1");
	}
}