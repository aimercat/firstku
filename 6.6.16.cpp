//6.6.16 
//默认c++中八进制以0开头，十六进制以0x开头 
#include<iostream>
#include<string>
#include<math.h>
const int N=100;
const int NU=0;
const int FALSE=-1;
using namespace std;
int atoi(const char* a){
	int i,k,s=0;
	if(strlen(a)==0) 
	return  NU;
	if((a[0]!='-'&&a[0]!='0')||strlen(a)==1)//十进制 
	{     for(i=0;i<strlen(a);i++)
	    {     k=a[i]-'0';
	          s+=k*pow(10,strlen(a)-i-1);
	    	
	    	
	    	
	    	
	    }
	    return s;
	}
	else if(a[0]!='-'&&a[0]=='0'&&a[1]!='x')//八进制 
	    {    for(i=0;i<strlen(a);i++)
		    {  k=a[i]-'0';
		       s+=k*pow(8,strlen(a)-i-1);
		       
		    	
		    	
		    	
		    	
		    	
		    } 
	    	
	    	return s;
	    	
	    }
	  else  if(a[0]!='-'&&a[0]=='0'&&a[1]=='x')
	   {     for(i=strlen(a)-1;a[i]!='x';i--)
	         {     if(a[i]>='A')
	              {k=a[i]-'A'+10;
	              }
	              else k=a[i]-'0';
	              s+=k*pow(16,strlen(a)-i-1);
	         
	         
	         
	         }
	   	
	   	
	   	return  s;
	   	
	   }
	   else if(a[0]=='-'&&a[1]!='0')
	   {     for(i=1;i<strlen(a);i++)
	    {     k=a[i]-'0';
	          s+=k*pow(10,strlen(a)-i-1);
	    	
	    	
	    	
	    	
	    }
	    return -s;
	   }
	   else if(a[0]=='-'&&a[1]=='0'&&a[2]!='x'){
	   	 for(i=2;i<strlen(a);i++)
		    {  k=a[i]-'0';
		       s+=k*pow(8,strlen(a)-i-1);
		       
		    	
		    	
		    	
		    	
		    	
		    } 
	    	
	    	return -s;
	    	
	   	
	   	
	   	
	   	
	   	
	   }
	else if(a[0]=='-'&&a[1]=='0'&&a[2]=='x'){
		
		
		for(i=strlen(a)-1;a[i]!='x';i--)
	         {     if(a[i]>='A')
	              {k=a[i]-'A'+10;
	              }
	              else k=a[i]-'0';
	              s+=k*pow(16,strlen(a)-i-1);
	         
	         
	         
	         }
	         return -s;
		
		
	}
	else  return FALSE;
	
	
}
int main()
{char str1[N],str2[N],str3[N];
int t;
cin>>str1;
t=atoi(str1);
cout<<t<<endl;
cin>>str2;
t=atoi(str2);
cout<<t<<endl;
cin>>str3;
t=atoi(str3);
cout<<t<<endl;
	
	
	
	
	
}
