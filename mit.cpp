#include<iostream>

using namespace std;



template <typename T>
T mayor(T a,T b){
    if(a>b){
        return a;
    }
    return b;
}
template <typename T>

T menor(T a,T b){
    if(a<b){
        return a;
    }
    return b;

}
int main(){
cout<<mayor<char>('a','A')<<endl;

cout<<menor<int>(1,2)<<endl;
return 0;
}
