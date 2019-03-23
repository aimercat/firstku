#include<iostream>
#include<string>
 const int N=100;
 using namespace std;
 void input(string m[]){
 int i;
 for(i=0;i<N;i++)
 {  cin>>m[i];
 	if(m[i]=="Quit")
 	break;
 	
 	
 }
 }
 int same(string m,string s){
 	if(m==s)
 	return 1;
 	else 
	 return 0;
 	
 	
 	
 	
 }
 
 int main()
 {string m[N];
 int e,i,j,k=0;
 input(m);
 for(i=0;m[i]!="Quit";i++)
            {
 
 	for(j=0;j<i;j++)
   {k=same(m[i],m[j]);
   if(k==1)
   break; 
   
   } 
 if(k==1){
   	
   	k=0;
   	continue;
   }
   cout<<m[i]<<"\t";
            }
 
 	
 	
 return 0;	
 }
