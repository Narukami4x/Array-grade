#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	char menu;
	int num;
	int *Q = NULL , *M = NULL, *F = NULL;

	do{
		cout<< "="<< setw(35) <<setfill('=') << "" <<endl;
		cout<< " "<< setw(15) <<setfill(' ') << "" <<"MENU"<<endl;
		cout<< "="<< setw(35) <<setfill('=') << "" <<endl;
		cout<< " "<< setw(4) <<setfill(' ') << "" <<"1.Input student records"<<endl;
		cout<< " "<< setw(4) <<setfill(' ') << "" <<"2.View all student records"<<endl;
		cout<< " "<< setw(4) <<setfill(' ') << "" <<"3.Exit"<<endl;

		cout << "Select menu : ";
		cin >> menu;
		if(menu == '1'){
			
			cout << "Input Number of Student : ";
			cin >> num;
			Q = new int[num];
			M = new int[num];
			F = new int[num];

			for(int i = 1;i <= num;i++)
			{
				cout <<"Number "<< i << endl;
				cout << "Input Quiz : ";
				cin >> Q[num];
				cout << "Input Midterm : ";
				cin >> M[num];
				cout << "Input Final : ";
				cin >> F[num];
				cout << endl;
			}
		} else if(menu == '2'){
			cout << endl;
			cout << "Show all sudent records" << endl;
			cout <<	"-" <<setw(35)<<setfill('-') << "" <<endl;
			cout << "No." << setw(5)<<setfill(' ') << "" ;
			cout <<"Quiz" << setw(5) << setfill(' ') << "" ;
			cout << "Midterm" << "" << setw(5) << setfill(' ') << "";
			cout << "Final"<< endl;
			cout <<	"-" <<setw(35)<<setfill('-') << "" <<endl;
			for(int x = 0; x < num; x++)
			{
				cout << x+1 << setw(8) << setfill(' ') << "" ;
				cout << Q[num] << setw(8) << setfill(' ') << "" ;
				cout << M[num]<< setw(10) << setfill(' ') << "";
				cout << F[num];
				cout << endl;		
			}
			cout <<	"-" <<setw(35)<<setfill('-') << "" <<endl;
		}
		cout << endl;
	}while(menu != '3');

	system("pause");
	return 0 ;
}