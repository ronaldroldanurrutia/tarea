#include<iostream>
#include<vector>

using namespace std;


int main(){
int n,k,elemento1,elemento2,suma=0;
cin>>n;
cin>>k;
cin>>elemento1;
vector<int>v;
elemento2=elemento1;
v.push_back(elemento2);
n--;
for(int i=0;i<n;i++){
    cin>>elemento1;
    if((elemento2+elemento1)<k){
        suma+=(k-elemento2-elemento1);
        elemento1=k-elemento2;
    }
    elemento2=elemento1;
    v.push_back(elemento1);
}
cout<<suma<<endl;
n++;
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
return 0;
}
