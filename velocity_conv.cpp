#include<iostream>
using namespace std;

int main()
{
	float vel_euc[3];
	float vel_wheel[4];
	float R;

	vel_wheel[0]=-0.5*vel_euc[0]+0.866*vel_euc[1]+vel_euc[2]*R;
	vel_wheel[1]=-0.5*vel_euc[0]-0.866*vel_euc[1]+vel_euc[2]*R;
	vel_wheel[2]=0.707*vel_euc[0]-0.707*vel_euc[1]+vel_euc[2]*R;
	vel_wheel[3]=0.707*vel_euc[0]+0.707*vel_euc[1]+vel_euc[2]*R;
}