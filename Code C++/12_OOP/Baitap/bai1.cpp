#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Rectange{
private:
    double width, height;
    static string color;
public:
    Rectange(){}
    Rectange(double width, double height, string color){
        this->width = width;
        this->height = height;
        this->color = color;
    }
    double getWidth(){
        return width;
    }
    void setWidth(double width){
        this->width = width;
    }
    double getHeight(){
        return height;
    }
    void setHeight(double height){
        this->height = height;
    }
    string getColor(){
        return color;
    }
    void setColor(string color){
        this->color  = color;
    }
    double findArea(){
        return width * height;
    }
    double findPerimeter(){
        return 2 * (width + height);
    }
    
};
string Rectange::color = "";
int main(){
    Rectange x;
    int h, w;
    string color;
    cin >> w >> h >> color;
    if(h <= 0 || w <= 0){
        cout << "INVALID" << endl;
    }
    else{
        x.setWidth(w);
        x.setHeight(h);
        x.setColor(color);
    }
    cout << fixed << setprecision(0) << x.findPerimeter() << " ";
    cout << fixed << setprecision(0) << x.findArea() << " ";
    cout << x.getColor() << endl;
}