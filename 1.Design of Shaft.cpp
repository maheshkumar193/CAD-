// Designing a shaft
// GROUP 3 
// BT18MEC089(MAHESH KUMAR)
// BT18MEC095(SRINIVAS)
// BT18MEC099(PRUTHVI RAJ)
#include <bits/stdc++.h>
using namespace std;
int main()
{
	// assuming general purpose shaft i.e made up of mild steel
	
	double P; //Power to be transmitted in watts
	cout<<"Power to be transmitted in watts\n";
	cin>>P;
	
	double safeStress = 60; // units N/mm^2 
	double l ;//total length of shaft , units in m
	cout<<"total length of shaft , units in m\n";
	cin>>l;
	
	double N;//Speed of shaft in rotations per minute
	cout<<"Speed of shaft in rotations per minute\n";
	cin>>N;
	
	//assuming 2 pullies on shaft 
	double leftDist; // left pulley distance from left end
	cout<<"left pulley distance from left end\n";
	cin>>leftDist;
	
	double rightDist;// Right pulley distance from left end
	cout<<"Right pulley distance from right end\n";
	cin>>rightDist;
	
	double wLeft;//weight of left pulley 
	cout<<"weight of left pulley in N\n";
	cin>>wLeft;
	
	double wRight;//weight of right pulley 
	cout<<"weight of right pulley in N\n";
	cin>>wRight;
	
	//here shaft is subjected to bending and twisting (torsion)
	
	// shaft is designed based on bending and torsion
	
	// p = 2*PI*N*T/60 
	
	double T = P*60.0/(2*M_PI*N*1.0); 
	
	double Rleft , Rright ; //reactions at left and right respectively 
	
	Rright = (wLeft*leftDist + wRight*(l - rightDist))/(l);
	
	Rleft = wLeft + wRight - Rright;
	
	double M = leftDist * Rleft; // bending moment
	
	double Teq = sqrt(T*T + M*M); // Equivalent twisting moment 
	
	double Dia ; // Diameter of shaft 
	
	// Teq = (PI * Dia^3 *Tou)/16 
	
	Dia = pow(Teq * 1000 * 16 /(M_PI* safeStress),0.333); 
	
	cout<<"Diameter of the shaft could be "<<Dia<<" mm"<<"\n";
	
	return 0;
}

