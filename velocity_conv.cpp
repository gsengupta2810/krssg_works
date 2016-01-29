#include<iostream>
using namespace std;

int main()
{
	float vel_eucX[3],vel_eucY[2];
	float vel_wheel[4];
	float R;

	vel_wheel[0]=-0.5*vel_eucX[0]+0.866*vel_eucY[0]+vel_eucX[3]*R;
	vel_wheel[1]=-0.5*vel_eucX[0]-0.866*vel_eucY[0]+vel_eucX[3]*R;
	vel_wheel[2]=0.707*vel_eucX[0]-0.707*vel_eucY[0]+vel_eucX[3]*R;
	vel_wheel[3]=0.707*vel_eucX[0]+0.707*vel_eucY[0]+vel_eucX[3]*R;
}