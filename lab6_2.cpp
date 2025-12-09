#include <iostream>
#include <cmath>

using namespace std;

double deg2rad(double deg){
    double rad;
    rad = (M_PI*deg)/180;
    return rad;
}

double rad2deg(double rad){
    double deg;
    deg = (180*rad)/M_PI;
    return deg;
}

double findXComponent(double lx1,double lx2,double radx1,double radx2){
    double x;
    x = (lx1*cos(radx1))+(lx2*cos(radx2));
    return x;
}

double findYComponent(double ly1,double ly2,double rady1,double rady2){
    double y;
    y = (ly1*sin(rady1))+(ly2*sin(rady2));
    return y;
}

double pythagoras(double x,double y){
    double xy = pow((pow(x,2)+pow(y,2)),0.5);
    return xy;
}

void showResult(double result,double radfinal){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << result << endl;
    cout << "Direction of the resultant vector (deg) = " << radfinal << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
