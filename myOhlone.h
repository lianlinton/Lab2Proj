/*******************************************************

 * Program Name: Lab2 Project

 * Author: Lian Elsa Linton

 * Date: September 23, 2022

 * Description: Uses dynamic memory allocation with an array of Course pointer objects
 *******************************************************/
#pragma once 
#include <vector>
#include <string>
#include "student.h"
#include "login.h"
#include "course.h"

class MyOhlone{
    public: 
        //Constructor
        MyOhlone();
        //Dynamic memory allocation: adds Course object pointers
        MyOhlone(Course* elem){
            list.push_back(elem);
        }
    private:
        vector<Course*> list;
        Student student;
        Login login;
};