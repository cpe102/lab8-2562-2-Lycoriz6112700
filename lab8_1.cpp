#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int i=0,N=0;
	float PB , Inter , Total , payment , New = 1 , percent;
	cout << "Enter initial loan: ";
	cin >> PB;
	cout << "Enter interest rate per year (%): ";
	cin >> percent;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
		
	while (i < New){
		N++;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << N;
		cout << setw(13) << left << PB;
		Inter = (PB*percent)/100;
		cout << setw(13) << left << Inter;
		Total = PB + Inter;
		cout << setw(13) << left << Total;
		if(payment <= Total){
		cout << setw(13) << left << payment;
		}else{
		payment = Total;
		cout << setw(13) << left << payment;
		}
		New = Total - payment;
		cout << setw(13) << left << New;
		PB = New;
		cout << "\n";
		i++;	
	}
	
	return 0;
}
