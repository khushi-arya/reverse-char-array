#include <iostream>
using namespace std;
void reverse(char arr[],int n)
{
 int s=0;
 int e=n-1;
  while(s<e){
     swap(arr[s++],arr[e--]);
  }
}
int length(char arr[])
{
   int i;
   int count=0;
   for(i=0;arr[i]!='\0';i++){
      count++;
   }
   return count;
}
int main() {
char arr[]="khushi";
 cout<<" u r name is :  "<<arr<<endl;
   cout<<"length=   "<<length(arr);
   int n=length(arr);
   reverse(arr,n);
    cout<<"\nreverse array is :  "<<arr;
	return 0;
}
