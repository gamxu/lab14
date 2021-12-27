#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[],int n,double b[]){
    
    double sum,SDsum,geoProd=1,harDvds,max=a[0],min=a[0];
    for(int i=0; i<n; i++){
      sum += a[i];
    }
    b[0] = sum/n;

    for(int j=0;j<n;j++){
      SDsum += pow(a[j]-b[0],2);
    }
    b[1] = sqrt(SDsum/n);
   
    for(int k =0; k<n;k++){
      geoProd *= a[k];
    }
    b[2] = pow(geoProd,(double) 1/n);

    for(int l=0; l<n;l++){
    harDvds += 1/a[l];
    }
    b[3] = n/harDvds;

    for(int m=0; m<n; m++){
      if(a[m]>max) b[4]=a[m];
      if(a[m]<min) b[5]=a[m];
    }
}