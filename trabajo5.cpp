#include<iostream>

using namespace std;


class Point{
    private:
        double x;
        double y;
    public:
        Point(const double _x,const double _y){
            this->x=_x;
            this->y=_y;
        }
        double getx() const {
            return this->x;
        }
        double gety() const {
            return this->y;
        }
        void ponerx(double _x){
            this->x=_x;
        }
        void ponery(double _Y){
            this->y=_Y;
        }

};

Point operator+(const Point o,const Point u){
            Point w(0,0);
            w.ponerx(o.getx()+u.getx());
            w.ponery(o.gety()+u.gety());
            return w;
}
ostream& operator<<(ostream &output,const Point &v){
    output << "X:" << v.getx() <<'\t'<< "Y:" << v.gety();
    return output;
}
int main(){
    Point hola(1,2);
    Point y(1,2);
    Point w=hola+y;
    cout<<w<<endl;
return 0;
}
