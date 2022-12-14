/*******************************************************

 * Program Name: Lab2 Project

 * Author: Lian Elsa Linton

 * Date: September 23, 2022

 * Description: Handles managing the menu functions that are executed based on the user's choice. 
 *******************************************************/
#include "myCanvas.h"
#include "loginMenu.cpp"
#include "mainMenu.cpp"
#include <typeinfo>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

MyCanvas::MyCanvas() {
	//Course *pCourse = new Course;
	//MyOhlone page(pCourse);
	//courseList = new vector<Course*>();

}

bool MyCanvas::doLogin() const {
	LoginMenu login;
	bool success = false;
	char i;
	enum MENU_OPTION { LOGIN='1', CREATE='2', RESET='3', EXIT='x' };
	do {
		i = login.getInput();
		switch (i) {
			case LOGIN: // todo enum
				return login.doLogin();
				break;
			case CREATE:
				return login.createLogin();
				break;
			case RESET:
				return login.resetPassword();
				break;
			case EXIT:
				cout << "Logged Out." << endl;
				break;
			default: {
			}
		} 
	} while (i < 4);

	return false;
}

/*void MyCanvas::initFacultyData() {
	ifstream inFile;
	inFile.open("faculty_data.csv");
    string id;
	string department;
	string firstName; 
	string lastName; 
	string address; 
	string city; 
	string state; 
	string zip; 
	string phone;
	string email;
	//2,Yong,Gao,CS,43600 Mission Blvd.,Fremont,CA,94538,ygao@ohlone.edu,510-659-6000
	string line = "";
	while (getline(inFile, line)) {
		stringstream ss(line);
		getline(ss, id, ',');
		getline(ss, firstName, ',');
		getline(ss, lastName, ',');
		getline(ss, department, ',');
		getline(ss, address, ',');
		getline(ss, city, ',');
		getline(ss, state, ',');
		getline(ss, zip, ',');
		getline(ss, email, ',');
		getline(ss, phone, ',');
		cout << phone << endl;
		Faculty* _faculty = new Faculty();
		//int num = stoi(id);
		_faculty->setID(id);
		_faculty->setFirstName(firstName);
		_faculty->setLastName(lastName);
		_faculty->setDepartment(department);
		_faculty->setAddress(address);
		_faculty->setCity(city);
		_faculty->setState(state);
		//num = stoi(zip);
		_faculty->setZip(zip);
		_faculty->setEmail(email);
		_faculty->setPhoneNumber(phone);
		faculty->push_back(_faculty);
	}

	inFile.close();
}*/

void MyCanvas::initCourseData(){
	ifstream inFile;
	inFile.open("course_data.csv");
    //Fall,2022,8/24/2022,12/20/2022,Programming W/ Data Structures,CS-124-03,085698,T TH,Online,Newark,Pham,3
	string term;        // Fall
	string year;            // 2022
	string startDate;    // 8/24/2022
	string endDate;        // 12/20/2022
	string name;        // Programming W/ Data Structures
	string sectionName;     // CS-124-03
	string sectionNumber;     //Number
	string occurrence; //T TH
	string platform;         // Online or On-Campus
	string location; //Newark
	string faculty;         // JPHAM
	string credit;         // 3

	int counter = 0;
	string line = "";
	while (getline(inFile, line)) {
		stringstream ss(line);
		getline(ss, term, ',');
		getline(ss, year, ',');
		getline(ss, startDate, ',');
		getline(ss, endDate, ',');
		getline(ss, name, ',');
		getline(ss, sectionName, ',');
		getline(ss, sectionNumber, ',');
		getline(ss, occurrence, ',');
		getline(ss, platform, ',');
		getline(ss, location, ',');
		getline(ss, faculty, ',');
		getline(ss, credit, ',');
		Course* _course = new Course();
		_course->setTerm(term);
		cout << "Before Convert" << endl;
		int num = stoi(year);
		cout << "Successfully Converted" << endl;
		_course->setYear(num);
		//_course->setStartDate(startDate);
		//_course->setEndDate(endDate);
		_course->setName(name);
		_course->setSectionName(sectionName);
		_course->setSectionNumber(sectionNumber);
		_course->setLocation(location);
		//_course->setFaculty(faculty);
		_course->setOccurrence(occurrence);
		_course->setPlatform(platform);
		num = stoi(credit);
		cout << num << endl;
		_course->setCredit(num);
		cout << "Course: " << sizeof(_course) << endl;
		courseList->push_back(_course);
		cout << "Counter:" << counter << endl;
		counter++;
	}
	inFile.close();
}

/*void MyCanvas::initCourseData() {
	ifstream inFile;
	inFile.open("course_data.csv");
    //Fall,2022,8/24/2022,12/20/2022,Programming W/ Data Structures,CS-124-03,085698,T TH,Online,Newark,Pham,3
	string term;        // Fall
	string year;            // 2022
	string startDate;    // 8/24/2022
	string endDate;        // 12/20/2022
	string name;        // Programming W/ Data Structures
	string sectionName;     // CS-124-03
	string sectionNumber;     // T TH
	string location;         // Online or On-Campus
	string faculty;         // JPHAM
	string credit;         // 3

	string line = "";
	while (getline(inFile, line)) {
		stringstream ss(line);
		getline(ss, term, ',');
		getline(ss, year, ',');
		getline(ss, startDate, ',');
		getline(ss, endDate, ',');
		getline(ss, name, ',');
		getline(ss, sectionName, ',');
		getline(ss, sectionNumber, ',');
		getline(ss, location, ',');
		getline(ss, faculty, ',');
		getline(ss, credit, ',');
		cout << credit << endl;
		Course _course;
		_course.setTerm(term);
		courseList->push_back(_course);
	}
	inFile.close();
}

void MyCanvas::initFacultyData() {
	ifstream inFile;
	inFile.open("faculty_data.csv");
    string id;
	string department;
	string firstName; 
	string lastName; 
	string address; 
	string city; 
	string state; 
	string zip; 
	string phone;
	string email;
	//2,Yong,Gao,CS,43600 Mission Blvd.,Fremont,CA,94538,ygao@ohlone.edu,510-659-6000
	string line = "";
	while (getline(inFile, line)) {
		stringstream ss(line);
		getline(ss, id, ',');
		getline(ss, firstName, ',');
		getline(ss, lastName, ',');
		getline(ss, department, ',');
		getline(ss, address, ',');
		getline(ss, city, ',');
		getline(ss, state, ',');
		getline(ss, zip, ',');
		getline(ss, email, ',');
		getline(ss, phone, ',');
		cout << phone << endl;
		Faculty _faculty;
		int num = stoi(id);
		_faculty.setID(num);
		_faculty.setFirstName(firstName);
		_faculty.setLastName(lastName);
		_faculty.setDepartment(department);
		_faculty.setAddress(address);
		_faculty.setCity(city);
		_faculty.setState(state);
		num = stoi(zip);
		_faculty.setZip(num);
		_faculty.setEmail(email);
		_faculty.setPhoneNumber(phone);
		faculty->push_back(_faculty);
	}

	inFile.close();
}

void MyCanvas::initStudentData(){
	ifstream inFile;
	inFile.open("faculty_data.csv");
    string id;
	string firstName; 
	string lastName; 
	string address; 
	string city; 
	string state; 
	string zip; 
	string phone;
	string email;
	//2,Yong,Gao,CS,43600 Mission Blvd.,Fremont,CA,94538,ygao@ohlone.edu,510-659-6000
	string line = "";
	while (getline(inFile, line)) {
		stringstream ss(line);
		getline(ss, id, ',');
		getline(ss, firstName, ',');
		getline(ss, lastName, ',');
		getline(ss, address, ',');
		getline(ss, city, ',');
		getline(ss, state, ',');
		getline(ss, zip, ',');
		getline(ss, email, ',');
		getline(ss, phone, ',');
		cout << phone << endl;
		Student _student;
		_student.setID(stoi(id));
		_student.setFirstName(firstName);
		_student.setLastName(lastName);
		_student.setAddress(address);
		_student.setCity(city);
		_student.setState(state);
		_student.setZip(stoi(zip));
		_student.setEmail(email);
		_student.setPhoneNumber(phone);
		//studentList->push_back(_student);
	}
}
*/


void MyCanvas::doMenu() {
	// todo
	MainMenu mainMenu;

	char i;
	initCourseData();
	//initFacultyData();
	//initStudentData();

	enum MENU_OPTION { HOME='1', ANNOUNCE='2', ASSIGN='3',  DISCUSS='4', GRADES='5', QUIZ='6', PEOPLE='7', EXIT='x' };
	do {
		i = mainMenu.getInput();
		//cout << i << endl;
		switch (i) {
			case HOME: // todo enum
				//mainMenu.doHome();
				cout << "Home " << endl;
				break;
			case ANNOUNCE:
				//mainMenu.doAnnounce();
				cout << "Announcements " << endl;
				break;
			case ASSIGN:
				//mainMenu.doAssign();
				cout << "Assignments " << endl;
				break;
			case DISCUSS:
				//mainMenu.doDiscuss();
				cout << "Discussions " << endl;
				break;
			case GRADES:
				//mainMenu.doGrades();
				cout << "Grades " << endl;
				break;
			case QUIZ:
				//mainMenu.doQuiz();
				cout << "Quizzes " << endl;
				break;
			case PEOPLE:
				//mainMenu.doPeople();
				cout << "People " << endl;
				break;
			case EXIT:
				cout << "Logged out." << endl;
				break;
			default: {
			}
		} 
	} while (i < 4);
}

