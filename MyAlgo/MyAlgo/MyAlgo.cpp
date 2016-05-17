#include "MyAlgo.h"
#include <cstdlib>
#include <iostream>





bool __stdcall Algo1(int S, int L, int R, int Init, int& VL, int& VR)
{
	VL = 60;
	VR = 60;
	return true;
}
float formül(int S) {

	double cikis, integral, öncekihata, hata, türev;
	double referans = 922;
	double Kp = 1, Ki = 0, Kd = 0;

	öncekihata = 0;
	integral = 0;
	hata = S - referans; 
	integral = integral + (hata); 
	türev = (hata - öncekihata);
	cikis = (Kp*hata) + (Ki*integral) + (Kd*türev);
	öncekihata = hata;
	return cikis;

}





bool __stdcall  Algo2(int S, int L, int R, int Init, int& VL, int& VR)
{
	float Kp, Ki, Kd;
	Kp = 0.000001;
	Ki = 0.000001;
	Kd = 0.01;
	int referanshiz = 50;
	float pid = formül(S);
	if (S<992) {
		VR = referanshiz + pid * 10;
		VL = referanshiz - pid * 10;
	}
	else if (S >992) {
		VR = referanshiz + pid * 10;
		VL = referanshiz - pid * 10;
	}
	else {
		VR = referanshiz + pid * 10;
		VL = referanshiz + pid * 10;
	}
	if (VR > 127)
		VR = 40;
	else if (VR < 127)
		VR = 5;

	if (VL > 127)
		VL = 40;
	else if (VL < 127)
		VL = 5;

	return true;

	

}





bool __stdcall Algo3(int S, int L, int R, int Init, int& VL, int& VR)
{
	//pid kontrol olmadan
	double deltaL, deltaR;
	deltaL = R - L;
	deltaR = L - R;
	deltaL = deltaL / 255;
	deltaR = deltaR / 255;
	VL = 40 - deltaL * 10;
	VR = 40 - deltaR * 10;
	return true;
}

bool __stdcall Algo4(int S, int L, int R, int Init, int& VL, int& VR)
{
	VL = 60;
	VR = 60;
	return true;
}


bool __stdcall  Algo5(int S, int L, int R, int Init, int& VL, int& VR)
{
		VL = 60;
		VR = 60;
		return true;
	}


bool __stdcall  Algo6(int S, int L, int R, int Init, int& VL, int& VR)
{
	VL = 60;
	VR = 60;
	return true;
}


bool __stdcall  Algo7(int S, int L, int R, int Init, int& VL, int& VR)
{
	VL = 60;
	VR = 60;


	return true;
}

