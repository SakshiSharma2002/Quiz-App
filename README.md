# Quiz-App
This application is designed using C++. 

In this application user can appear for a quiz, one question at a time. Each question will have 4 answers, user has to choose the correct one. When user submits the answer, the program will evaluate it against stored answer for the specific questions. All the questions will be evaluated in the similar manner and marks will be assigned to the correctly chosen answers. At the end program will display the marks that the user has secured in the quiz. 

## TOTAL SCREENS IN THE PROJECT
Overall, the project "QUIZ APPLICATION”, will have following screens:
1. Main Screen
2. Login Screen
         
       A. Admin Screen
          1) Add Question
          2) Add Student
          3) Show Questions
          4) Show Student
          5) Remove Question
          6) Remove Student
          7) Exit
    
       B. Student Screen
           1) Start Quiz
           2) View Performance
           3) Exit
           
## THE "MAIN SCREEN" AND "OPTION SCREEN"
![Main_Screen](https://user-images.githubusercontent.com/77681258/153747946-0bd3ab04-70da-49b6-9c87-6d9d7a37a532.jpg)

![Option Screen](https://user-images.githubusercontent.com/77681258/153747950-0052e679-79f2-4cae-ba08-f94a7a76d77a.jpg)

## STEPS TO BE DONE BEFORE DESIGNING THE "Main Screen"

Before designing the Main Screen , we need to do the following:
1. Add support of conio2.h in the project.
2. Create a header file called "quiz.h" which contains class declarations and member function declarations
3. Create a source code file called "quiz.cpp" which contains definitions of the member functions declared in the file "quiz.h". 

## ADDING "conio2.h" SUPPORT
1. Create the project "QUIZ APPLICATION" in CODEBLOCKS.
2. Download the file conio21.zip from the url https://sourceforge.net/projects/conio/.
3. Unzip the file and copy 2 files "conio.c" and "conio2.h" from it into your project folder.
4. Now we can call all BORLAND style functions like clrscr(),getch(), textcolor(),gotoxy() etc in the project.

## CLASS DECLARATIONS
The project have 5 classes called "User", "Student", "Admin", "Question" and  "StudentPerformance".

**A. User Class**

The class User have following data members :
1. userid :- char[] (for storing userid)
2. pwd :- char[] (for storing password)
3. type :- char[] (for storing user type)
4. uname :- char[](for storing name)

Member Functions of class "User" :
1) setUserDetails()
2) getName()
3) getUserID()
4) checkUserExists()
5) show()
6) input()

**B. Student Class**

The class Student inherits the class User in public mode and have following member functions:

7) add()
8) Remove()
9) showStudentDetails()
10) quiz()
11) viewPerformance()

**C. The Admin Class**

The class Admin inherits the class User in public mode and have the following member functions:

12) createAdmin()
13) addStudent()
14) removeStudent()
15) viewStudent()
16) addQuestion()
17) removeQuestion()
18) viewQuestion()

**D. The Question Class**

The class Question have following data members:
1. quesid :- int (for storing questionid)
2. tot_marks :- int (for storing total marks)
3. ques :- char[] (for storing user type)
4. op1 :- char[] (for storing option 1)
5. op2 :- char[] (for storing option 2)
6. op3 :- char[](for storing option 3)
7. op4 :- char[] (for storing option 4)
8. ans :- char (for storing correct option)

The class Question have following member functions:

19) add()
20) Remove()
21) setQuestionDetails()
22) show()
23) viewQuestion()
24) startQuiz()
25) ques_count()

**E. The StudemtPerformance Class**

The class StudentPerformance have following data members:
1. studid :- char[] (for storing student id)
2. marks:- int (for storing marks obtained)
3. tot_marks:- int (for storing total marks)
		
The class StudentPerformance have following member functions:

26) setMarksDetails()
27) saveMarksDetails()
28) viewDetails()
29) show()

## PROJECT VIDEO

https://user-images.githubusercontent.com/77681258/153749368-20997c4c-83ec-42bc-a9a5-fdd0d7022f1d.mp4



