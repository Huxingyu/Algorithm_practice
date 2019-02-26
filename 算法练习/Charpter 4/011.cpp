#include <stdio.h>
#include <iostream>

using namespace std;

void Swap(char *x,char *y){
    char temp=*x;
    *x=*y;
    *y=temp;
}

void Perm( char *pszStr , int k , int m ) 
{
      if (k == m)  
      {  
           static int s_i = 1;  
           cout<<"第"<<s_i ++<<"个排列"<<pszStr<<endl;
     }  
     else
     {  
           for (int i = k; i <= m; i++) //第i个数分别与它后面的数字交换就能得到新的排列
           {  
                  Swap(pszStr + k, pszStr + i);  
                  Perm(pszStr, k + 1, m);  
                  Swap(pszStr + k, pszStr + i);  
           }  
      } 
}

int main(){
    char *word[]={"a","b","c"};
    Perm(*word,1,3);
    return 0;
}


// 递归式
// E．g：E = （a , b , c）
// prem（E）= a.perm（b,c）+ b.perm（a,c）+ c.perm（a,b）
// a.perm（b,c）= ab.perm（c）+ ac.perm（b）= abc + acb.
