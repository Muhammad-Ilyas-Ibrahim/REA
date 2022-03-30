#include <iostream>
#include <string>
#include <sstream>
#include <sys/stat.h>
using namespace std;
int ExistOrNot(char* filename){
	FILE *file;
	if(file= fopen(filename,"r")){
		fclose(file);
		return 1;
	}
	return 0;
}
bool IsPathExist(const string &dir){
	struct stat buffer;
	return (stat (dir.c_str(),&buffer)==0);
}
void color(int color){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
string CtoS(char* a, int size){
	string s="";
	for(int i=0;i<size;i++){
		s+=a[i];
	}
	return s;
}
string Upper(string up){
char arr[up.size()];
strcpy(arr,up.c_str());
for(int i=0; i<strlen(arr); i++){
	if(arr[i]>=97 && arr[i]<=122){
		arr[i]=arr[i]-32;
	}
}
up=CtoS(arr,sizeof(arr));
return up;
}
string lower(string low){
char arr[low.size()];
strcpy(arr,low.c_str());
for(int i=0; i<strlen(arr); i++){
	if(arr[i]>=65 && arr[i]<=90){
		arr[i]=arr[i]+32;
	}
}
low=CtoS(arr,sizeof(arr));
return low;
}
string CamelCase(string a){
char arr[a.size()];
strcpy(arr,a.c_str());
int n=-1;
for(int i=0; i<strlen(arr); i++){
	if(n==-1){
		if(arr[i]>=97 && arr[i]<=122){
		arr[i]=arr[i]-32;
		}
		n++;
	}
	else{
	if(arr[i]>=65 && arr[i]<=90 || arr[i]>=97 && arr[i]<=122){
		if(arr[i]>=65 && arr[i]<=90){
		arr[i]=arr[i]+32;
		}
	}
	else{
		n--;
	}
	}
}
string final=CtoS(arr,sizeof(arr));
return final;
}
int StoI(string n){
int numb;
stringstream(n)>>numb;
return numb;
}
