#include<iostream>
#include<cmath>
const int N=100;
using namespace std;

void  itoa( int i,char b[]) {
	int j=0,k=0;
	char a[N]="";
	if(i<0)
	b[j++]='-';
	i=abs(i);//ȡ����ֵ 
	while(i){
			a[k]=i%10+'0';
		    i=i/10;
		    k++; 
		
		
	}
	k--;//while������k��ʵ����Ҫֵ��1�����һ 
	while(k>=0)
		b[j++]=a[k--];//����ֵ 
	
	
}
int main(){
	
	int n;
	char b[10]="";//��ʼ���ַ���Ϊ�գ��������λ��������� 
	cin>>n;
	itoa(n,b);
	cout<<b;
	return 0;
	
	
} 
