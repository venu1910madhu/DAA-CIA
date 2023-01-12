#include <stdio.h>  
int compareTwoString(char[],char[]);  
int main()  
{  
   char str1[50]; 
   char str2[50];
   
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   
   printf("Enter the second string : ");  
   scanf("%s",str2);  
   
   int c= compareTwoString(str1,str2); 
   if(c==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
  
   return 0;  
}  
  
 
int compareTwoString(char a[],char b[])  
{  
    int flag=0,i=0; 
    while(a[i]!='\0' &&b[i]!='\0')   
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    } 
    if(a[i]!='\0'||b[i]!='\0')
       return 1;
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  

