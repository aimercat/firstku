#include<iostream>
#include<cmath>
const int N=100;
using namespace std;

void  itoa( int i,char b[]) {
	int j=0,k=0;
	char a[N]="";
	if(i<0)
	b[j++]='-';
	i=abs(i);//取绝对值 
	while(i){
			a[k]=i%10+'0';
		    i=i/10;
		    k++; 
		
		
	}
	k--;//while结束后k比实际需要值大1，需减一 
	while(k>=0)
		b[j++]=a[k--];//倒序赋值 
	
	
}
int main(){
	
	int n;
	char b[10]="";//初始化字符串为空，否则多余位会产生乱码 
	cin>>n;
	itoa(n,b);
	cout<<b;
	return 0;
	
	
} 
