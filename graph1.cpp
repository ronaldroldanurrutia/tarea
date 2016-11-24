#include<iostream>
#include<vector>


using namespace std;

class Graph{
    private:
        static int elemen;
        vector<int>elementos;
        vector<int>IDD;
    public:
        Graph(const vector<int> &start,const vector<int> &fin){
            int n;
            n=start.size();
            for(int i=0;i<n;i++){
                elementos.push_back(start[i]);
                elementos.push_back(fin[i]);
            }
            this->elemen=elementos.size();
        }
        int nodes(int ID){
            if(this->elemen==0){
                cout<<"No hay elementos"<<endl;
                return 0;
            }
            int contador=0;
            for(int i=0;i<this->elemen;i+=2){
                if((elementos[i]==ID or elementos[i+1]==ID) and (elementos[i]!=elementos[i])){
                    contador++;
                }
            }
            return contador;
        }
        int numberofnodes(){
            vector<int>v;
            int n=v.size();
            v.push_back(elementos[1]);
            v.push_back(1);
            for(int i=1;i<this->elemen;i++){
                bool h=true;
                for(int j=0;j<v.size();j+=2){
                    if(elementos[i]==v[j]){
                        v[j+1]++;
                        h=false;
                        break;
                    }
                }
                if(h){
                    v.push_back(elementos[i]);
                    v.push_back(1);
                }
            }
            return v.size();
        }
        const vector<int> &adjacet(const int ID){
            for(int i=0;i<this->elemen;i+=2){
                if(elementos[i]==ID or elementos[i+1]==ID){
                    IDD.push_back(elementos[i]);
                    IDD.push_back(elementos[i+1]);
                }
            }
            return IDD;
        }
};

int main(){


return 0;
}
