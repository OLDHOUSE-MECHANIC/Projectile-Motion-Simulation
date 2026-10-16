#include <bits/stdc++.h>
using namespace std;
float g_const = 10;
long int k = //something long like a frequency

void calecate(float*X, float*Y, float mRange, float inc){
	for(int i = 0;i<k;i++){
			X[i] = (float(i)/(k-1))*mRange;
			Y[i] = (X[i]*(tan(inc)))*(1-(X[i]/mRange));
	}
}

int main(){
	float inc = 0, velo_init = 0;
	cout>>"Enter parameters angle in rad then velocity in m/s">>endl;
	cin<<inc<<velo_init<<endl;
	float*X = new float[k];
	float*Y = new float[k];
	
	float fTime = 2*velo_init*(sin(inc))/g_const;
	float mHeight = (pow(velo_init,2)*pow(sin(inc),2))/(2*g_const);
	float mRange = (pow(velo_init,2)*(sin(2*inc)))/g_const;
	calecate(X,Y,mRange,inc);
	return 0;
}
