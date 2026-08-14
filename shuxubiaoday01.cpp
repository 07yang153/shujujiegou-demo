#include <iostream>
using namespace std;
const int N = 1e6 +10;
int  arr [N];
int n;
//顺序表尾插
void push_back(int x){
    arr[++n]= x;
}
//顺序表头插
void push_front(int x){
   for(int i = n ;i >= 1; i--){  
    arr[i +1 ] = arr[i];
}
arr[1] = x;
n++;
}
//任意位置插入
void insert(int dex,int x){
    for(int i = n ;i >= dex;i--){
       arr[i + 1] = arr[i];
    }
    arr[dex] = x;
    n++;
}


int main (){
 push_back(1);
 push_back(6);
push_back(10);
insert(2,3);
for(int i = 1; i <= n ;i++){
    cout << arr[i] << endl;
}
cout << n << endl;
return 0;
}