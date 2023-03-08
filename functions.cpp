#include<vector>
#include<iostream>
#include<cmath>
class vector_var{
    public:
        double i[3] = {1.0, 0.0, 2.0};
        double j[3] = {1.0, 3.0, 4.0};
        double k[3] = {0,0,0};
        double l[3] = {2.0, 4.0, 1.5};
        vector_var(){}

    double mag(double j[], double f[]);
    double angle(double a[], double b[], double c[]);
    void c_product(double a[], double b[], double* p);



private:

};


double vector_var::mag(double a[], double b[]){
        
        return(sqrt(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2) + pow(a[2] - b[2], 2)));

}


double vector_var::angle(double a[], double b[], double c[]){

    return(acos(a[0]/mag(a, c) * b[0]/mag(b, c) + a[1]/mag(a, c) * b[1]/mag(b, c) + a[2]/mag(a, c) * b[2]/mag(b, c)));  

}

void vector_var::c_product(double a[], double b[], double* p ){

    p[0] = a[1] * b[2] - a[2] * b[1];
    p[1] = a[2] * b[0] - a[0] * b[2];
    p[2] = a[0] * b[1] - a[1] * b[0];

}