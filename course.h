/*******************************************************

 * Program Name: Lab2 Project

 * Author: Lian Elsa Linton

 * Date: September 23, 2022

 * Description: The Course class represents a complete course in Canvas. 

 *******************************************************/
#pragma once
#include "faculty.h"
//#include "dateImp.cpp"

class Course {
	public: 
		//Constructor
		Course(){

		};
		//Destructor
		~Course(){
			delete this;
		};
		//Mutator Methods
		void setTerm(string term){
			this->term = term;
		};
		void setYear(int year){
			this->year=year;
		};
		void setStartDate(DateType startDate){
			this->startDate = startDate;
		};
		void setEndDate(DateType endDate){
			this->endDate = endDate;
		};
		void setName(string name){
			this->name = name;
		};
		void setSectionName(string sectionName){
			this->sectionName = sectionName;
		};
		void setSectionNumber(string sectionNumber){
			this->sectionNumber = sectionNumber;
		};
		void setLocation(string location){
			this->location = location;
		};
		void setFaculty(Faculty faculty){
			this->faculty = faculty;
		};
		void setCredit(int credit){
			this->credit = credit;
		};
		void setOccurrence(string occurrence){
			this->occurrence = occurrence;
		}
		void setPlatform(string platform){
			this->platform = platform;
		}
		//Accessor Methods
		string getTerm() const{
			return this->term;
		};
		int getYear() const{
			return this->year;
		};
		DateType getStartDate() const{
			return this->startDate;
		};
		DateType getEndDate() const{
			return this->endDate;
		};
		string getName() const{
			return this->name;
		};
		string getSectionName() const{
			return this->sectionName;
		};
		string getSectionNumber() const{
			return this->sectionNumber;
		};
		string getLocation() const{
			return this->location;
		};
		Faculty getFaculty() const{
			return this->faculty;
		};
		int getCredit() const{
			return this->credit;
		};
		string getPlatform() const{
			return this->platform;
		};
		string getOccurrence() const{
			return this->occurrence;
		};

		//Operators
		/*bool operator>= (const Course& other) const;
		bool operator<= (const Course& other) const;
		bool operator== (const Course& other) const;
		bool operator> (const Course& other) const;
		bool operator< (const Course& other) const;
		bool operator!= (const Course& other) const;*/
		//outstream operator<< (const Course& const) const;

	private: 
		string term;        // Fall
		int year;            // 2022
		DateType startDate;    // 8/24/2022
		DateType endDate;        // 12/20/2022
		string name;        // Programming W/ Data Structures
		string sectionName;     // CS-124-03
		string sectionNumber;     // T TH
		string location;         // Online or On-Campus
		Faculty faculty;         // JPHAM
		int credit;         // 3
		string occurrence;
		string platform;
};