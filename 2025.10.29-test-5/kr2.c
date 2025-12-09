# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct {
    char name[50];
    int id;
}Student;

typedef struct {
    char name[50];
    char tname[50];
    int students_count;           // количество студентов
    int students_capacity;        // вместимость students
    Student* students;
}Course;

void init_students(Course* course){
    course->students = malloc(course->students_capacity * sizeof(Student));
}

void add_student(Course* course,char* name,int id){
    if (course->students_count >= course->students_capacity) {
        course->students_capacity *= 2;
        course->students = realloc(course->students,course->students_capacity * sizeof(Student));
    }
    strcpy(course->students[course->students_count].name,name);
    course->students[course->students_count].id = id;
    course->students_count++;
    
}

void print_all(Course* courses, int N){
    printf("\nВСЕ КУРСЫ:\n\n");
    for(int i = 0;i < N;i++){
        printf("%s\n",courses[i].name); 
        for(int j = 0;j < courses[i].students_count;j++){
            printf("     %s\n",courses[i].students[j].name);
        }   
    }
}

void largest_course(Course* courses, int N){
    int largest_course = 0;
    int largest_num = courses[0].students_count;

    for(int i = 0;i < N;i++){
        if(largest_num<courses[i].students_count){
            largest_num = courses[i].students_count;
            largest_course=i;
        }
    }

    printf("\Курс с наибольшим количеством студентов: ");
    printf("%s\n\n",courses[largest_course].name);
}

void free_all(Course* courses,int N){
    for(int i = 0;i < N;i++){
        free(courses[i].students);
    }

    free(courses);
}

void clear_input_buffer () {
    int c = 0;
    while (( c = getchar () ) != '\n' && c != EOF ) {}
}

void clear_last_linebreak (char* str){
    if ( str != NULL ){
        str[strcspn(str,"\n")]='\0';
    }
}

int main(int argc, char **argv){

    int N = 0;  
    printf("Введите количество курсов: ");
    scanf("%d",&N);

    Course* courses = malloc(N * sizeof(Course));

    for(int i = 0;i < N;i++){
        clear_input_buffer();

        courses[i].students_count = 0;
        courses[i].students_capacity = 5;    // значение по умолчанию для всех курсов

        printf("Курс %d:\n",i+1);
        printf("     Название курса: ");
        fgets(courses[i].name,sizeof(courses[i].name),stdin);
        clear_last_linebreak(courses[i].name);

        printf("     Преподаватель курса: ");
        fgets(courses[i].tname,sizeof(courses[i].tname),stdin);
        clear_last_linebreak(courses[i].tname);

        int students_count = 0;
        printf("     Введите количество студентов: ");
        scanf("%d",&students_count);
        init_students(&courses[i]);
        
        for(int j = 0;j < students_count;j++){
            clear_input_buffer();

            char name[50];
            int id = 0;

            printf("          Студент %d:\n",j+1);
            printf("               Имя студента: ");
            fgets(name,sizeof(name),stdin);
            clear_last_linebreak(name);

            printf("               Номер зачётки: ");
            scanf("%d",&id);

            add_student(&courses[i],name,id);
        }   
    }

    print_all(courses,N);
    largest_course(courses,N);

    free_all(courses,N);
    return 0;
}