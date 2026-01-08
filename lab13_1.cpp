#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double x = 0;
    double y = 0;
    double z = 1;
    double c = 0;
    double Max = A[0],Min = A[0];

    for(int i=0; i < N; i++){
      x = x + A[i];
    }

    B[0] = x /N;

    for (int i=0; i < N; i++){
        y = y+pow(A[i]-B[0],2);  
    }
        B[1]=sqrt(y/N);
    
    for (int i=0; i < N; i++){
        z = z*A[i];
    }
        B[2]= pow(z,(1.0/N));

    for (int i=0; i < N; i++){
         c= (1/A[i])+c;  
    }
        B[3]=N/c;
    
    for( int i=1; i< N;i++){
       if(A[i]>Max) Max=A[i];
       if(A[i]<Min) Min=A[i];
    }
       B[4]= Max;
       B[5]= Min;
   
}