#include<iostream>
using namespace std;

int counter = 0;

struct student{
		char name[20];
		char id[13];
		char faculty[10];
				}students[100];
void view();
void add();
void delect();
int find(char* name);
void input(struct student &students );
int main(){

	while (1){
	int chose=0;

	cout<<"\t"<<"welcome to my home!"<<endl<<"According to the following tips,please chose one number!"<<endl;
	cout<<"(1):View the Information of students!"<<endl;
	cout<<"(2):Add one!"<<endl;
	cout<<"(3):Delect one!"<<endl;
	cout<<"(4):exit!"<<endl;
	cin>>chose;
	switch (chose)
	{
	case 1:

		view();break;
	case 2:
		add();break;
	case 3:
		delect();break;

	case 5:
		exit(1);break;
	default:
		cout<<"input erro!";
		break;
	}
	}
	return 0;
}
void view(){	
	cout<<"name\t"<<"id\t"<<"faculty"<<endl;
	for(int i=0;i<counter;i++)
	cout<<students[i].name <<"\t"<<students[i].id <<"\t"<<students[i].faculty <<endl;
}
 
void input(struct student &students ){
	cout<<"name:"<<endl;
	cin>>students.name ;
	cout<<"id:"<<endl;
	cin>>students .id ;
	cout<<"faulty:"<<endl;
	cin>>students .faculty ;
}

int find(char* name){

	int i;
	for(i=0;i<counter ;i++){
		if(strcmp(students [i].name,name) == 0){
			break;
		}
	}
	return i;

}

void add(){
	struct student stu;
	input (stu);
	int i = find(stu.name );
	if(i == counter ){
		strcpy(students [i].name , stu.name);
		strcpy(students [i].id , stu.id);
		strcpy(students [i].faculty , stu.faculty );
		counter ++;
	}else{
		cout<<"already !";
	}
}

void delect (){
	struct student stu;
	input (stu);
	int i=find(stu.name );
	if(i=counter )
		cout <<"not exist";
	else{
	counter --;
	}
}