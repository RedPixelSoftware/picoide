#include <iostream>		//TODO:: Config from file - Done
#include <string>		//TODO:: Notifications - Done
#include <fstream>		//TODO:: Installer - Done
#include <cstdlib>		//TODO:: Autostructure +- 

using namespace std;
int main()
{
	float ver = 0.2;
	int build = 141;

//	V A R I A B L E S

	string editor;	
	string compiler;
	string file;
	string filee;
    string f;
	string wtf = "y";
	string ftw;
	int exit;
	fstream ftest;
	fstream str (".structure.pide");
	ofstream run (".executer.pide");
	ofstream com (".compile.pide");
	ifstream noty (".notify");
	ifstream comp (".compiler");
	ifstream edit (".editor");
	string project;

	comp >> compiler;
	edit >> editor;

	run << "clear" << endl;
	com << "clear" << endl;

	system("clear");
	cout << "╞══ Developed for easy development in linux console. See goo.gl/Czp9Hs for some  " << endl;
	cout << "╞══ details and documentation. Licensed under GNU GPL2. Uses some external tools." << endl;
	cout << "╞══        PicoIDE " << ver << ":" << build << " (C) Red_Pixel Software 2015     " << endl;
	cout << "╞════════════════════════════════════════════════════════════════════════════════"
	cout << "╞══ Enter your project name: ";
	cin >> project;
	cout << " " << endl;
	file = editor + " " + project;
	filee = compiler + " " + project + " -o built";
	run << file;
	com << filee;
	
	system("chmod +x .executer.pide");
	system("chmod +x .compile.pide");
	run.close();
	com.close();
	do{
	system("./.executer.pide");
	cout << "Compile?(Y/N) ";
	cin >> wtf;
	if(wtf=="Y"){
		system("./.compile.pide");
		system("./.notify");
	}else if(wtf=="y"){
		system("./.compile.pide");
		system("./.notify");
	}else{
		cout << "Exit from IDE?(Y/N) ";
		cin >> ftw;
		if(ftw=="y"){
		exit = 228;
		}else if(ftw=="Y"){
		exit = 228;
		}else if(ftw!="y"){
		exit = 0;
		}
	}
	cout << "" << endl;
	if(wtf=="y"){
	    cout << "Execute?(Y/N) ";
	    cin >> wtf;
	if(wtf=="Y"){
		system("./built");
		cin >> f;
	}else if(wtf=="y"){
		system("./built");
		cin >> f;
	    }else system("./.executer.pide");
	    }else if(wtf=="y"){
		    cout << "Execute?(Y/N) ";
	        cin >> wtf;
	if(wtf=="Y"){
		system("./picoide.co");
	}else if(wtf=="y"){
		system("./picoide.co");
	}else system("./.executer.pide");
	}
	}while(exit != 228);
	system("rm .executer.pide");
	

	return 0;
}

