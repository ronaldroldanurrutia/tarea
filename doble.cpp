#include<iostream>

using namespace std;



class node{
public:
        int n;
        class node *next;

};




class pila{
    public:
        class node *head;
        pila(){
            head = NULL;


        }
        void insertar(int _n){
            if(head == NULL){
                head->n = _n;
                head->next = NULL;
            }
            class node *elemento;
            elemento = head;
            for(;elemento!=NULL;){
                elemento = elemento->next;
            }
            elemento->n = _n;
            elemento->next = head;

        }
        void pop(){
            if(head->next == NULL){
                head = NULL;
            }
            class node *elemento;
            elemento = head->next;
            for(;elemento->next!=NULL;){
                    elemento = elemento -> next ;
            }
            elemento = NULL;


        }
        void mostrar(){
            if(head == NULL){
                cout<<"NOHAY"<<endl;
            }
            class node *elemento;
            elemento = head;
            for(int i=1;elemento!=NULL;i++){
                cout<<"Elemento: "<<i<<": "<<elemento->n<<endl;
                elemento = elemento->next;

            }


        }

};
