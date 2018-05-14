/*************************************************************************
> File Name: 6.cpp
> Author:   Orange512
> Mail:     huiyi950512@gmail.com
> Created Time: 2018年03月24日 星期六 09时38分58秒
************************************************************************/

#include<iostream>
using namespace std;

int partion(int array[],int s,int e)  
 {  
     int temp = array[s];  
     while(s < e)  
     {  
         while(array[e] >= temp&& s<e )  
         e--;  
         if(s < e)  
         array[s] = array[e];  
         while(array[s] < temp && s<e)  
         s++;  
         if(s < e)  
         array[e] = array[s];  
     }  
     array[s] = temp;  
     return s;  
 }  
 int search_k(int array[],int s,int e,int k)  
 {  
     int p = partion(array,s,e);  
     int q = p+1;  
     if( q == k  )  
     return array[p];  
     if( q < k )  
     return search_k(array,p+1,e,k);  
     if( q > k )  
     return search_k(array,s,p-1,k);  
 }  
 int main()  
 {  
     int array[1000];  
     int n;  
     int k;  
     while( cin >> n >> k && n!=0 )  
     {  
         for(int i=0;i<n;i++)  
         cin >> array[i];  

         cout << search_k(array,0,n-1,k) << endl;  
     }  
 }  

