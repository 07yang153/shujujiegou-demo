#include <iostream>
using namespace std;
//利用结构体,类
const int N = 50;

class sqlist{
  int arr [N];
  int n;
  
    public :
     sqlist(){
      n =0;
     }
void push_back(int x){
    arr[++n]= x;
}
void print(){
    for(int i = 1 ;i <= n ;i++){
       cout << arr[i] << " ";
    }
       cout << endl;
 }
};
int main(){
   sqlist s1,s2;
   s1.push_back(1); 
   s1.push_back(2);
   s1.push_back(3);
   s1.print();
 return 0;
}