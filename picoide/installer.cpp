#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
int main()
{
    int inn;
	float ver;
	string file;
	string space = " ";
	string editor;	
	string compiler;
	string player;
	string sound;
	ofstream com (".compile.pide");
	ofstream str (".structure.pide");
	ofstream confA (".compiler");
	ofstream confB (".editor");
	ofstream confC (".notify");
	
    ver = 0.2;
	system("clear");
	cout << "╞══ PicoIDE Installer " << ver << " (C) Red_Pixel Software 2015 ══╡" << endl;
	cout << "Welcome to PicoIDE installer! " << endl;
	cout << "Compile PicoIDE? (1-Yes/0-No): ";
    cin >> inn;
    if(inn==1){
        cout << "Type your compiler or its location and press Enter: ";
        cin >> compiler;
        file = compiler + " do_not_rename_me.cpp -o picoide";
	    com << file;
	    com.close();
	    system("chmod +x .compile.pide");
	    system("./.compile.pide");
	    cout << " " << endl;
	    if(inn == 1){
	    confA << compiler + space;
	    confA.close();
	    cout << "Type your text editor or its location and press Enter: ";
	    cin >> editor;
	    cout << " " << endl;
 	    confB << editor + space;
	    confB.close();
	    cout << "Type your player or its location and press Enter: ";
	    cin >> player;
	    cout << " " << endl;
	    cout << "Type your notificaton sound and press Enter: ";
	    cin >> sound;
	    cout << " " << endl;
	    confC << player + " -q " + sound;
	    confC.close();
	    system("chmod +x .notify");
	    if(ver==255){
	    cout << "Create or use internal C++ structure file?(1-Create/0-Internal)" << endl;
	    cin >> inn;
	    if(inn==1){
		system("rm .structure.pide");
	    system("nano .structure.pide");
	    }else{
	    }
	    system("chmod +x .notify");
		}else{
		}
	    cout << "That's all! Have a nice day <3" << endl;
	    }else ver++;
    }else{
        if(inn!=1){
        	cout << "Type your compiler or its location and press Enter: ";
        	cin >> compiler;
	        confA << compiler + space;
	        confA.close();
        }else cout << "Compiler already selected." << endl;
        cout << "Type your text editor or its location and press Enter: ";
        cin >> editor;
        cout << " " << endl;
        confB << editor + space;
	confB.close();
	cout << "Type your player or its location and press Enter: ";
        cin >> player;
        cout << " " << endl;
        cout << "Type your notificaton sound and press Enter: ";
        cin >> sound;
        cout << " " << endl;
        confC << player + " -q " + sound;
	confC.close();
	system("chmod +x .notify");
	cout << "That's all! Have a nice day <3" << endl;
	    }	 
}
