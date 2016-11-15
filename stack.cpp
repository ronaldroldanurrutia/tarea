#include<iostream>
#include<vector>


using namespace std;


template<typename T>
class Stack{
    private:
        vector<T> v;
    public:
        Stack(){
            v=NULL;
        }
        void push(int n){
            v.push_back(n);
        }
        void cantidad(){
            return v.size();
        }
        void get(int n){
            return v[n-1];
        }
        bool empy(){
            if(v.size==0){
                return true;
            }
            return false;
        }
        void push(const T &item){
            v.push_back(item);
        }
        T &top(){
            int n;
            n=v.size();
            return v[n-1];
        }
        T pop(){
            vector<T>x;
            int n;
            n=v.size();
            n--;
            for(int i=0;i<n;i++){
                x.push_back(v[i]);
            }
            delete v;
            v=x;
        }
};

template<typename T>
Stack<T> operator+(const Stack<T> &o,const Stack<T> &u){
    Stack<T> c;
    for(int i=0;i<o.cantidad();i++){
        c.push(o.get(i+1));
    }
    for(int i=0;i<u.cantidad();i++){
        c.push(u.get(i+1));
    }
    return c;
}


int main(){


return 0;
}
