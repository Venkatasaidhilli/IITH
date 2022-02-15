#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

int main()
{
//Defining the variables
int m,n, len ;//integers

double **P,**Q,**mat,**c,**temp,**O, **mat_inv,**V,**u,**T,**y1,**y2;
double **n_1,**n_2,**n_3,**n_4, **temp1,**theta;
double c_1,r;
//Generate line points
len = 100;

//mat = loadtxt("./data/mat.dat",2,2);
//c = loadtxt("./data/c.dat",2,1);

P = loadtxt("./data/P.dat",2,1);
//generate the parameters of parabola
V = loadtxt("./data/V.dat",2,2);
u = loadtxt("./data/u.dat",2,1);


//defining centre and radius of Circle
c = loadtxt("./data/c.dat",2,1);
r = sqrt(5);
//defining the tangent
T = loadtxt("./data/T.dat",2,1);
c_1 = 1;


//print(O,2,1);//printing the matrix O
//printf("\n %lf\n",r);//printing the radius r

//(i)
n_1 = loadtxt("./data/n_1.dat",2,1);


//(ii)
n_2 = loadtxt("./data/n_2.dat",2,1);


//(iii)
n_3 = loadtxt("./data/n_3.dat",2,1);


//(iv)
n_4 = loadtxt("./data/n_4.dat",2,1);


temp = matmul(transpose(T,2,1),n_1,1,2,1);


if ( temp[0][0]== c_1)
	printf("\n (i) will not pass through the tangent\n");
else
	printf("\n(i) will  pass through the tangent\n");

free(temp);

temp = matmul(transpose(T,2,1),n_2,1,2,1);


if ( temp[0][0]== c_1)
	printf("\n(ii) will   pass through the tangent\n");
else
	printf("\n(ii) will not pass through the tangent\n");

free(temp);

temp = matmul(transpose(T,2,1),n_3,1,2,1);


if ( temp[0][0]== c_1)
	printf("\n(iii) will  pass through the tangent\n");
else
	printf("\n(iii) will not pass through the tangent\n");

free(temp);

temp = matmul(transpose(T,2,1),n_4,1,2,1);


if ( temp[0][0]== c_1)
	printf("\n (iv) will not pass through the tangent\n");
else
	printf("\n(iv) will  pass through the tangent\n");

free(temp);

//Generating theta

theta = linspace(0,2*M_PI,len);
//print(theta,len,1);//printing theta
savetxt(theta,"theta.dat",len,1);





return 0;
}
