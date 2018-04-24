//
// Created by sohail on 30/3/18.
//

#include <iostream>
#include "init.h"


using namespace std;

void Init:: init()
{

    User user1 ("user1","A16CS001","user.1@iitj.ac.in","Student");
    user1.set_pass_word("u1");
    Student student1("user1","A16CS001","user.1@iitj.ac.in","Student");
    student1.set_pass_word("u1");
    
    User user2 ("user2","A16CS002","user.2@iitj.ac.in","Student");
    user2.set_pass_word("u2");
    Student student2("user2","A16CS002","user.2@iitj.ac.in","Student");
    student2.set_pass_word("u2");
    
    User user3 ("user3","A16CS003","user.3@iitj.ac.in","Student");
    user3.set_pass_word("u3");
    Student student3("user3","A16CS003","user.3@iitj.ac.in","Student");
    student3.set_pass_word("u3");
    
    User user4 ("user4","A16CS004","user.4@iitj.ac.in","Student");
    user4.set_pass_word("u4");
    Student student4("user4","A16CS004","user.4@iitj.ac.in","Student");
    student4.set_pass_word("u4");
    
    User user5 ("user5","A16CS005","user.5@iitj.ac.in","Student");
    user5.set_pass_word("u5");
    Student student5("user5","A16CS005","user.5@iitj.ac.in","Student");
    student5.set_pass_word("u5");
    
    User user6 ("user6","A16CS006","user.6@iitj.ac.in","Student");
    user6.set_pass_word("u6");
    Student student6("user6","A16CS006","user.6@iitj.ac.in","Student");
    student6.set_pass_word("u6");
    
    User user7 ("user7","A16CS007","user.7@iitj.ac.in","Student");
    user7.set_pass_word("u7");
    Student student7("user7","A16CS007","user.7@iitj.ac.in","Student");
    student7.set_pass_word("u7");
    
    User user8 ("user8","A16CS008","user.8@iitj.ac.in","Student");
    user8.set_pass_word("u8");
    Student student8("user8","A16CS008","user.8@iitj.ac.in","Student");
    student8.set_pass_word("u8");
    
    User user9 ("user9","A16CS009","user.9@iitj.ac.in","Student");
    user9.set_pass_word("u9");
    Student student9("user9","A16CS009","user.9@iitj.ac.in","Student");
    student9.set_pass_word("u9");
    
    User user10 ("faculty1","F16CS001","faculty.1@iitj.ac.in","Faculty");
    user10.set_pass_word("f1");
    Faculty faculty1("faculty1","F16CS001","faculty.1@iitj.ac.in","Faculty");
    faculty1.set_pass_word("f1");

    Course c1 ("ComputerArchitecture");
    Course c2 ("PrincipalOfManagement");
    Course c3 ("Probability");
    Course c4 ("SoftwareEngineering");
    Course c5 ("TheoryOfComputation");


    Course course1f("SoftwareEngineering","faculty1");
    Course course1("SoftwareEngineering","user1", 90, 'E');
    Course course2("SoftwareEngineering","user2", 45, 'E');
    Course course3("SoftwareEngineering","user3", 60, 'E');
    Course course4("SoftwareEngineering","user4", 83, 'E');
    Course course5("SoftwareEngineering","user5", 49, 'E');
    Course course6("SoftwareEngineering","user6", 26, 'E');
    Course course7("SoftwareEngineering","user7", 12, 'E');
    Course course8("SoftwareEngineering","user8", 83, 'E');
    Course course9("SoftwareEngineering","user9", 33, 'E');

    Course course2f("TheoryOfComputation","faculty1");
    Course course10("TheoryOfComputation","user1", 45,'E');
    Course course11("TheoryOfComputation","user2", 60,'E');
    Course course12("TheoryOfComputation","user3", 83,'E');
    Course course13("TheoryOfComputation","user4", 49,'E');
    Course course14("TheoryOfComputation","user5", 26,'E');
    Course course15("TheoryOfComputation","user6", 12,'E');
    Course course16("TheoryOfComputation","user7", 83,'E');
    Course course17("TheoryOfComputation","user8", 33,'E');
    Course course18("TheoryOfComputation","user9", 90,'E');

    Course course3f("PrincipalOfManagement","faculty1");
    Course course19("PrincipalOfManagement","user1", 60,'E');
    Course course20("PrincipalOfManagement","user2", 83,'E');
    Course course21("PrincipalOfManagement","user3", 49,'E');
    Course course22("PrincipalOfManagement","user4", 26,'E');
    Course course23("PrincipalOfManagement","user5", 12,'E');
    Course course24("PrincipalOfManagement","user6", 83,'E');
    Course course25("PrincipalOfManagement","user7", 33,'E');
    Course course26("PrincipalOfManagement","user8", 90,'E');
    Course course27("PrincipalOfManagement","user9", 45,'E');

    Course course4f("ComputerArchitecture","faculty1");
    Course course28("ComputerArchitecture","user1", 83,'E');
    Course course29("ComputerArchitecture","user2", 49,'E');
    Course course30("ComputerArchitecture","user3", 26,'E');
    Course course31("ComputerArchitecture","user4", 12,'E');
    Course course32("ComputerArchitecture","user5", 83,'E');
    Course course33("ComputerArchitecture","user6", 33,'E');
    Course course34("ComputerArchitecture","user7", 90,'E');
    Course course35("ComputerArchitecture","user8", 45,'E');
    Course course36("ComputerArchitecture","user9", 60,'E');

    Course course5f("Probability", "faculty1");
    Course course37("Probability","user1", 49,'E');
    Course course38("Probability","user2", 26,'E');
    Course course39("Probability","user3", 12,'E');
    Course course40("Probability","user4", 83,'E');
    Course course41("Probability","user5", 33,'E');
    Course course42("Probability","user6", 90,'E');
    Course course43("Probability","user7", 45,'E');
    Course course44("Probability","user8", 60,'E');
    Course course45("Probability","user9", 83,'E');


    try {
        user1.save();
        student1.save_student();
        
        user2.save();
        student2.save_student();
        
        user3.save();
        student3.save_student();
        
        user4.save();
        student4.save_student();
        
        user5.save();
        student5.save_student();
        
        user6.save();
        student6.save_student();
        
        user7.save();
        student7.save_student();
        
        user8.save();
        student8.save_student();
        
        user9.save();
        student9.save_student();
        
        user10.save();
        faculty1.save_faculty();

        c1.add_courses();
        c2.add_courses();
        c3.add_courses();
        c4.add_courses();
        c5.add_courses();

        course1f.save_courses();
        course2f.save_courses();
        course3f.save_courses();
        course4f.save_courses();
        course5f.save_courses();

        course1.save_courses();
        course2.save_courses();
        course3.save_courses();
        course4.save_courses();
        course5.save_courses();
        course6.save_courses();
        course7.save_courses();
        course8.save_courses();
        course9.save_courses();
        course10.save_courses();
        course11.save_courses();
        course12.save_courses();
        course13.save_courses();
        course14.save_courses();
        course15.save_courses();
        course16.save_courses();
        course17.save_courses();
        course18.save_courses();
        course19.save_courses();
        course20.save_courses();
        course21.save_courses();
        course22.save_courses();
        course23.save_courses();
        course24.save_courses();
        course25.save_courses();
        course26.save_courses();
        course27.save_courses();
        course28.save_courses();
        course29.save_courses();
        course30.save_courses();
        course31.save_courses();
        course32.save_courses();
        course33.save_courses();
        course34.save_courses();
        course35.save_courses();
        course36.save_courses();
        course37.save_courses();
        course38.save_courses();
        course39.save_courses();
        course40.save_courses();
        course41.save_courses();
        course42.save_courses();
        course43.save_courses();
        course44.save_courses();
        course45.save_courses();




    }
    catch (string)
    {
        cout<<"saved failed";
    }
}