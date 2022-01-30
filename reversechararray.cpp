#include <iostream>
using namespace std;
int palindrome(char arr[],int n){
   int s=0;
 int e=n-1;
 while(s<e){
 if(arr[s]!=arr[e]){
    return 0;
 }
 else {
    s++;
    e--;
 }
 }
 return 1;
}
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
	int p= palindrome( arr, n);
    if(p=0){
       cout<<"array is not palindrome";
    }else{
       cout<<"array is palindrome";
    }
	return 0;
}
