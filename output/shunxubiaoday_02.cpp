#include <iostream>
using namespace std;    
const int N = 1e6 +10;
int  arr [N];       
int n;
void push_back(int x){
    arr[++n]= x;
}
//删除尾元素
void pop_back(){
    n--;
}
//删除头元素
void pop_front(){
    for(int i = 2; i <= n ; i++ ){
     arr[i -1] =arr[i];
    }
    n--;
}
//删除任意位置元素
void erase(int dex){
  for(int i = dex +1 ;i <= n; i++){
    arr[i -1] =arr[i];
  }
  n--;
}
//按值查询
int find (int x){
   for(int i = 1;i <=n ; i++){
      if(arr[i] == x)return i;
  } 
  return 0;



}


//按位查询
int find1 (int i){
 return arr[i];
}
//修改
void change (int dex,int x){
    arr[dex] = x;
}
int main(){
   push_back(1);
   push_back(2);
   push_back(3);
   pop_back();
   push_back(4);
   pop_front();
   push_back(5);
   erase(2);
   for(int i = 1; i <= n ;i++){
       cout << arr[i] << endl;  
   }





    return 0;

}