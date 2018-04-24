# Grade Management System

## Instructions to compile
Either execute the bundled executable `CMS` file in directory `code/cmake-build-debug` or follow the following steps:
- Download `cmake` archive version 3.8+ from https://cmake.org/download/
- Extract .tar.gz file into a directory, say ``<root>``
- Now run configuration script by command `./configure`
- Then run command `make` to build
- Next `cd` to project director, say `<project>` (`code/src` here) and run command `<root>/bin/cmake build .` followed by `<root>/bin/cmake --build . --target SMS -- -j 4`
- Now run executable by running command `./CMS`


A software for management of students grades. This software can be accessed by

  - Students
  - Faculties
  

## Students

Student can select any options from the list :

  - View Profile
  - Modify Profile
  - Add Courses
  - View Courses
  - View Stats

## Faculties

Faculties can select any options from the list :

  - View Profile
  - Modify Profile
  - Add Courses
  - View Courses
  - View All Stats
  - Update Marks
  - Modify Grades
 
