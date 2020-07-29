

//main.h 
using namespace std;

const int CLASS_SIZE = 6;

class Student
{
    
    int studentID;
    int grades[10];
    
    public:
    void setStudentID(int studentIDIn);
    void setGrade(int j, int gradeIn);
    int getStudentID();
    void printGrades();
    int getMin();
    int getMax();
    float getAverageGrade();
    int getGrade(int j);
};

void Student::setStudentID(int studentIDIn)
{
    studentID = studentIDIn;
}

void Student::setGrade(int j, int gradeIn)
{
    grades[j] = gradeIn;
}

int Student::getStudentID()
{
    return studentID;
}

void Student::printGrades()
{
    for(int i = 0; i < 10; i++)
    {
        cout << grades[i] << " ";
    }
}

int Student::getMin()
{
    int min = 100;
    for(int i = 0; i < 10; i++)
    {
        if(grades[i] < min)
            min = grades[i];
    }
    return min;
}

int Student::getMax()
{
    int max = 0;
    for(int i = 0; i < 10; i++)
    {
        if(grades[i] > max)
            max = grades[i];
    }
    return max;
}

int Student::getGrade(int j)
{
    return grades[j];
}

float Student::getAverageGrade()
{
    float avg;
    
    for(int i = 0; i < 10; i++)
        avg += grades[i];
        
    return avg/10;
}
//********************
class CourseEnrollment
{
    Student students[CLASS_SIZE];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[CLASS_SIZE*10];
    
    public:
    void addStudents(Student studentsIn[CLASS_SIZE]);
    int * getAllGrades();
    int * sortAllGrades();
    int getMinGrade();
    int getMaxGrade();
    float getAvgGrade();
};

void CourseEnrollment::addStudents(Student studentsIn[CLASS_SIZE])
{
    int min = 100;
    int max = 0;
    
    int mintmp, maxtmp;
    
    for(int stu = 0; stu < CLASS_SIZE; stu++)
    {
        students[stu] = studentsIn[stu];
        
        mintmp = studentsIn[stu].getMin();
        if(min > mintmp)
            min = mintmp;
            
        maxtmp = studentsIn[stu].getMax();
        if(max < maxtmp)
            max = maxtmp;
            
        for(int j = 0; j < 10; j++)
            grades[10*stu + j] = studentsIn[stu].getGrade(j);
    }
    
    courseMinGrade = min;
    courseMaxGrade = max;
    
    float avg = 0;
    for(int i = 0; i < CLASS_SIZE*10; i++)
        avg += grades[i];
    
    courseAvgGrade = avg;
}

int CourseEnrollment::getMinGrade()
{
    return courseMinGrade;
}

int CourseEnrollment::getMaxGrade()
{
    return courseMaxGrade;
}

float CourseEnrollment::getAvgGrade()
{
    return courseAvgGrade;
}

int * CourseEnrollment::getAllGrades()
{
    return &grades[0];
}

int * CourseEnrollment::sortAllGrades()
{
    int tmp;
    for(int i = 0; i < CLASS_SIZE*10; i ++)
    {
        for(int j = 0; j < CLASS_SIZE*10 -1 - i; j++)
        {
            if(grades[j] > grades[j+1])
            {
                tmp = grades[j];
                grades[j] = grades[j+1];
                grades[j+1] = tmp;
            }
        }
    }
    
    return &grades[0];
}
