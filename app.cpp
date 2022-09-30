/*******************************************************

 * Program Name: Lab2 Project

 * Author: Lian Elsa Linton

 * Date: September 23, 2022

 * Description: Main class which is run and is used as the user's starting position.
 *******************************************************/
#include <iostream>
#include <string>
#include "myCanvas.cpp"

using namespace std;

//Main Class: User's entrypoint 
int main(){
	string i = "10";
	int num = stoi(i);
	cout << num;
	MyCanvas myCanvas;
	if (myCanvas.doLogin()){
		myCanvas.doMenu();
	}
	myCanvas.~MyCanvas();
	return 0;
}