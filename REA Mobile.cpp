#include <iostream>
#include <fstream>
#include <iomanip>
#include "ck.h"
using namespace std;
void insertB17(){
char file[]="B17.csv";
system("cls");
color(6);
string plot,block,status,size,demand,name,number,corner; 
color(10);
cout<<"\n\n\t====================================";
color(6);
cout<<"\n\t\t\tB17 ";
color(10);
cout<<"\n\t====================================";
cout<<"\n\n\tPlot no: ";
cin.clear();
fflush(stdin);
getline(cin,plot);
cout<<"\n\tBlock: ";
cin.clear();
fflush(stdin);
getline(cin,block);
block=Upper(block);
cout<<"\n\tStatus: ";
cin.clear();
fflush(stdin);
getline(cin,status);
status=Upper(status);
if(status=="A/O"){
	status="ADC/Open";
}
if(status=="A/C"){
	status="ADC/Closed";
}
if(status=="N/O"){
	status="NDC/Open";
}
if(status=="N/C"){
	status="NDC/Closed";
}
cout<<"\n\tSize: ";
cin.clear();
fflush(stdin);
getline(cin,size);
cout<<"\n\tDemand: ";
cin.clear();
fflush(stdin);
getline(cin,demand);
cout<<"\n\tName: ";
cin.clear();
fflush(stdin);
getline(cin,name);
name=CamelCase(name);
cout<<"\n\tPhone Number: ";
cin.clear();
fflush(stdin);
getline(cin,number);
cout<<"\n\tCorner: ";
cin.clear();
fflush(stdin);
getline(cin,corner);
corner=Upper(corner);
int nf=ExistOrNot(file);
ofstream input;
input.open("B17.csv");
if(nf==0){
	input<<"Plot no.,Block,Status,Size,Demand,Name,Phone Number,Corner";
}
input<<"\n"<<plot<<","<<block<<","<<status<<","<<size<<","<<demand<<","<<name<<","<<number<<","<<corner;
input.close();
system("cls");
color(10);
cout<<"\n\n\t\tData Saved!\n\n\t";
system("pause");
}
void insertFH(){
system("cls");
color(6);
string plot,block,status,size,demand,name,number,corner; 
char file[]="Faisal Hills.csv";
color(10);
cout<<"\n\n\t====================================";
color(6);
cout<<"\n\t\t    Faisal Hills";
color(10);
cout<<"\n\t====================================";
cout<<"\n\n\tPlot no: ";
cin.clear();
fflush(stdin);
getline(cin,plot);
cout<<"\n\tBlock: ";
cin.clear();
fflush(stdin);
getline(cin,block);
block=Upper(block);
cout<<"\n\tStatus: ";
cin.clear();
fflush(stdin);
getline(cin,status);
status=Upper(status);
if(status=="A/O"){
	status="ADC/Open";
}
if(status=="A/C"){
	status="ADC/Closed";
}
if(status=="N/O"){
	status="NDC/Open";
}
if(status=="N/C"){
	status="NDC/Closed";
}
cout<<"\n\tSize: ";
cin.clear();
fflush(stdin);
getline(cin,size);
cout<<"\n\tDemand: ";
cin.clear();
fflush(stdin);
getline(cin,demand);
cout<<"\n\tName: ";
cin.clear();
fflush(stdin);
getline(cin,name);
name=CamelCase(name);
cout<<"\n\tPhone Number: ";
cin.clear();
fflush(stdin);
getline(cin,number);
cout<<"\n\tCorner: ";
cin.clear();
fflush(stdin);
getline(cin,corner);
corner=Upper(corner);
int nf=ExistOrNot(file);
ofstream input;
input.open("Faisal Hills.csv",ios::app);
if(nf==0){
	input<<"Plot no.,Block,Status,Size,Demand,Name,Phone Number,Corner";
}
input<<"\n"<<plot<<","<<block<<","<<status<<","<<size<<","<<demand<<","<<name<<","<<number<<","<<corner;
input.close();
system("cls");
color(10);
cout<<"\n\n\t\tData Saved!\n\n\t";
system("pause");
}
void search(){
	system("cls");
	string Size,Block;
	color(10);
	cout<<"\n\n\t====================================";
	color(6);
	cout<<"\n\t\t       Search";
	color(10);
	cout<<"\n\t====================================";
	cout<<"\n\n\tPlot Size: ";
	cin.clear();
	fflush(stdin);
	getline(cin,Size);
	cout<<"\n\n\tBlock: ";
	cin.clear();
	fflush(stdin);
	getline(cin,Block);
	system("cls");
	Block=Upper(Block);
	int count1=0,count2=0;
	ifstream file;
	char file1[]="B17.csv";
	char file2[]="Faisal Hills.csv";
	int nf1=ExistOrNot(file1);
	if(nf1==1){
		string plot,block,status,size,demand,name,number,corner; 
		file.open("B17.csv");
		file.ignore(1000,'\n');
		while(file.good()){
			getline(file,plot,',');
			getline(file,block,',');
			getline(file,status,',');
			getline(file,size,',');
			getline(file,demand,',');
			getline(file,name,',');
			getline(file,number,',');
			getline(file,corner);
			if(size==Size && block==Block){
				if(count1==0){
					color(10);
					cout<<"\n\n\t====================================\xcd\xcd";
					color(6);
					cout<<"\n\t\t\tB17 ";
					color(10);
					cout<<"\n\t====================================\xcd\xcd";
				}
				color(6);
				cout<<"\n\n\t"<<left<<setw(12)<<"Plot no: "<<plot;
				cout<<"\n\t"<<left<<setw(12)<<"Block: "<<block;
				cout<<"\n\t"<<left<<setw(12)<<"Status: "<<status;
				cout<<"\n\t"<<left<<setw(12)<<"Size: "<<size;
				cout<<"\n\t"<<left<<setw(12)<<"Demand: "<<demand;
				cout<<"\n\t"<<left<<setw(12)<<"Name: "<<name;
				cout<<"\n\t"<<left<<setw(12)<<"Cell#: "<<number;
				cout<<"\n\t"<<left<<setw(12)<<"Corner: "<<corner;
				color(10);
				cout<<"\n\t------------------------------------";
				count1++;
			}
		}
		if(count1!=0){
			color(3);
			cout<<"\n\n\tTotal Plots available: "<<count1<<"\n\n\t";
		}
	}
	file.close();
	int nf2=ExistOrNot(file2);
	if(nf2==1){
		string plot,block,status,size,demand,name,number,corner;
		file.open("Faisal Hills.csv");
		file.ignore(1000,'\n');
		while(file.good()){
			getline(file,plot,',');
			getline(file,block,',');
			getline(file,status,',');
			getline(file,size,',');
			getline(file,demand,',');
			getline(file,name,',');
			getline(file,number,',');
			getline(file,corner);
			if(size==Size && block==Block){
				if(count2==0){
					color(10);
					cout<<"\n\n\t====================================\xcd\xcd";
					color(6);
					cout<<"\n\t\t    Faisal Hills";
					color(10);
					cout<<"\n\t====================================\xcd\xcd";
				}
				color(6);
				cout<<"\n\n\t"<<left<<setw(12)<<"Plot no: "<<plot;
				cout<<"\n\t"<<left<<setw(12)<<"Block: "<<block;
				cout<<"\n\t"<<left<<setw(12)<<"Status: "<<status;
				cout<<"\n\t"<<left<<setw(12)<<"Size: "<<size;
				cout<<"\n\t"<<left<<setw(12)<<"Demand: "<<demand;
				cout<<"\n\t"<<left<<setw(12)<<"Name: "<<name;
				cout<<"\n\t"<<left<<setw(12)<<"Cell#: "<<number;
				cout<<"\n\t"<<left<<setw(12)<<"Corner: "<<corner;
				color(10);
				cout<<"\n\t------------------------------------";
				count2++;
			}
		}
		if(count2!=0){
			color(3);
			cout<<"\n\n\tTotal Plots available: "<<count2<<"\n\n\t";
		}
	}
	file.close();
	if(count1==0 && count2==0){
		color(4);
		cout<<"\n\n\n\tNo Plot available!\n\n\n\t";
	}
	color(7);
	system("pause");
}
void search1(){
	system("cls");
	string Size;
	color(10);
	cout<<"\n\n\t====================================";
	color(6);
	cout<<"\n\t\t       Search";
	color(10);
	cout<<"\n\t====================================";
	cout<<"\n\n\tPlot Size: ";
	cin.clear();
	fflush(stdin);
	getline(cin,Size);
	system("cls");
	int count1=0,count2=0;
	ifstream file;
	char file1[]="B17.csv";
	char file2[]="Faisal Hills.csv";
	int nf1=ExistOrNot(file1);
	if(nf1==1){
		string plot,block,status,size,demand,name,number,corner; 
		file.open("B17.csv");
		file.ignore(1000,'\n');
		while(file.good()){
			getline(file,plot,',');
			getline(file,block,',');
			getline(file,status,',');
			getline(file,size,',');
			getline(file,demand,',');
			getline(file,name,',');
			getline(file,number,',');
			getline(file,corner);
			if(size==Size){
				if(count1==0){
					color(10);
					cout<<"\n\n\t====================================";
					color(6);
					cout<<"\n\t\t\tB17 ";
					color(10);
					cout<<"\n\t====================================";
				}
				color(6);
				cout<<"\n\n\t"<<left<<setw(12)<<"Plot no: "<<plot;
				cout<<"\n\t"<<left<<setw(12)<<"Block: "<<block;
				cout<<"\n\t"<<left<<setw(12)<<"Status: "<<status;
				cout<<"\n\t"<<left<<setw(12)<<"Size: "<<size;
				cout<<"\n\t"<<left<<setw(12)<<"Demand: "<<demand;
				cout<<"\n\t"<<left<<setw(12)<<"Name: "<<name;
				cout<<"\n\t"<<left<<setw(12)<<"Cell#: "<<number;
				cout<<"\n\t"<<left<<setw(12)<<"Corner: "<<corner;
				color(10);
				cout<<"\n\t------------------------------------";
				count1++;
			}
		}
		if(count1!=0){
			color(3);
			cout<<"\n\n\tTotal Plots available: "<<count1<<"\n\n\t";
		}
	}
	file.close();
	int nf2=ExistOrNot(file2);
	if(nf2==1){
		string plot,block,status,size,demand,name,number,corner;
		file.open("Faisal Hills.csv");
		file.ignore(1000,'\n');
		while(file.good()){
			getline(file,plot,',');
			getline(file,block,',');
			getline(file,status,',');
			getline(file,size,',');
			getline(file,demand,',');
			getline(file,name,',');
			getline(file,number,',');
			getline(file,corner);
			if(size==Size){
				if(count2==0){
					color(10);
					cout<<"\n\n\t====================================";
					color(6);
					cout<<"\n\t\t    Faisal Hills";
					color(10);
					cout<<"\n\t====================================";
				}
				color(6);
				cout<<"\n\n\t"<<left<<setw(12)<<"Plot no: "<<plot;
				cout<<"\n\t"<<left<<setw(12)<<"Block: "<<block;
				cout<<"\n\t"<<left<<setw(12)<<"Status: "<<status;
				cout<<"\n\t"<<left<<setw(12)<<"Size: "<<size;
				cout<<"\n\t"<<left<<setw(12)<<"Demand: "<<demand;
				cout<<"\n\t"<<left<<setw(12)<<"Name: "<<name;
				cout<<"\n\t"<<left<<setw(12)<<"Cell#: "<<number;
				cout<<"\n\t"<<left<<setw(12)<<"Corner: "<<corner;
				color(10);
				cout<<"\n\t------------------------------------";
				count2++;
			}
		}
		if(count2!=0){
			color(3);
			cout<<"\n\n\tTotal Plots available: "<<count2<<"\n\n\t";
		}
	}
	file.close();
	if(count1==0 && count2==0){
		color(4);
		cout<<"\n\n\n\tNo Plot available!\n\n\n\t";
	}
	color(7);
	system("pause");
}
int main(){
while(true){
	system("cls");
	color(10);
	cout<<"\n\n\t====================================";
	color(6);
	cout<<"\n\t\t\tMENU";
	color(10);
	cout<<"\n\t====================================";
	color(1);
	cout<<"\n\n\t1: B17 Record"<<endl;
	cout<<"\t2: Faisal Hills Record"<<endl;
	cout<<"\t3: Search by Size & Block"<<endl;
	cout<<"\t4: Search by Size"<<endl;
	cout<<"\t5: Exit"<<endl;
	char choice;
	color(6);
	cout<<"\n\tEnter your Choice: ";
	cin.clear();
	fflush(stdin);
	cin>>choice;
	switch(choice){
		case '1':
			insertB17();
			break;
		case '2':
			insertFH();
			break;
		case '3':
			search();
			break;
		case '4':
			search1();
			break;
		case '5':
			exit(1);
		default:
			system("cls");
			color(4);
			cout<<"\n\n\n\tInvalid Choice!\n\n\n\t";
			system("pause");
	}
}
return 0;
}
