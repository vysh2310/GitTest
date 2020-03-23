#include <stdio.h>
#include <string.h>
 
int array[3];
 struct student 
{
     int id;
     char name[5];
     float percentage;
};
struct student record,*ptr; 

struct student_p 
{
     int age;     
     struct student record;
};
struct student_p record_p[3]; 
int fun( const struct student*);
int fun( const struct student* ptr){ /* polyspace DEFECT:VAR_SHADOWING [Not a defect:Low] "no need to ix" */
    int f;
    int pol[8];
    ptr->id = 3;
    f = ptr->id;
    pol[record.id] = 9;
    pol[record.id] = 9;
    ptr->id = 3;
    
    return 0;
}
int main_1() 
{
    int i,k;
    //const struct student* ptr;
    // k = fun(&record);
    
   // i = fun(&record );
     
     ptr = &record;
     array[0] = 1;
     // 1st student's record
     record_p[0].age=1;
     strcpy(record_p[0].record.name, "Raju");
     record_p[0].record.percentage = 66.5;
     
      record_p[1].age=1;
     strcpy(record_p[1].record.name, "Raju");
     record_p[1].record.percentage = 76.5;
     
     /*record_p[2].age=1;
     strcpy(record_p[2].record.name, "Rajumar");
     record_p[2].record.percentage = 66.5;
     
     record_p[3].age=1;
     strcpy(record_p[3].record.name, "Raju");
     record_p[3].record.percentage = 86.5;*/
    
     
     
 
 
     // 2nd student's record         
     /*record[1].id=2;
     strcpy(record[1].name, "Surendren");
     record[1].percentage = 90.5;
 
     // 3rd student's record
     record[2].id=3;
     strcpy(record[2].name, "Thiyagu");
     record[2].percentage = 81.5;
 
     
     
       
       //  printf(" Id is: %d \n", record[0].id);
        // printf(" Name is: %s \n", record[0].name);
        // printf(" Percentage is: %f\n\n",record[0].percentage);*/
     
     return 0;
}
