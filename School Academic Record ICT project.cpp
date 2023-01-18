#include <iostream>
#include <iomanip>
using namespace std;

class Record{
	
	int   *roll_no;
	float *mid_term_marks;
	float *final_term_marks;
	int   *class_student;
	char  *grade_student;
	int    size_of_array;
	int    top;
	int   *sort_indexes;
	int    top_sort;
	
	// Assign grade to the student according to the finnal marks
    char grade(int marks){
    	
			if(marks>=0&&marks<=49) {
				return 'F';
			}
			if(marks>=50&&marks<=59) {
				return 'D';
			}
			if(marks>=60&&marks<=72) {
				return 'C';
			}
			if(marks>=73&&marks<=86) {
				return 'B';
			}
			if(marks>=86&&marks<=100) {
				return 'A';
			}
	}	
	// Find the student in existing record
	int find_student(int rn){
		for(int i=0;i<=top;i++){
			if(roll_no[i]==rn){
				return i;
			}
		}
		return -1;
	}
	// sort according to rollno
	void sort_roll_no(char c){
		
		top_sort = -1;
		int temp;
		for(int i=0;i<=top;i++){
			sort_indexes[i] = i;
			top_sort++;
		}
		
		for(int i=0;i<top_sort;i++){
			for(int j=0;j<top_sort;j++){
				
				switch(c){
			
			case 'A':{
				
				if(roll_no[sort_indexes[j]]>roll_no[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}	
				break; }
			
			case 'D':{
				
				if(roll_no[sort_indexes[j]]<roll_no[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}
				break; }
			 }      
			}
		}
	}
	// Sort according to mid term marks
	void sort_mid_term(char c){
		
		top_sort = -1;
		int temp;
		for(int i=0;i<=top;i++){
			sort_indexes[i] = i;
			top_sort++;
		}
		
		for(int i=0;i<top_sort;i++){
			for(int j=0;j<top_sort;j++){
				
				switch(c){
			
			case 'A':{
				
				if(mid_term_marks[sort_indexes[j]]>mid_term_marks[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}	
				break; }
			
			case 'D':{
				
				if(mid_term_marks[sort_indexes[j]]<mid_term_marks[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}
				break; }
			 }      
			}
		}
	}
	// Sort according to finnal term marks	
	void sort_final_term(char c){
		
		top_sort = -1;
		int temp;
		for(int i=0;i<=top;i++){
			sort_indexes[i] = i;
			top_sort++;
		}
		
		for(int i=0;i<top_sort;i++){
			for(int j=0;j<top_sort;j++){
				
				switch(c){
			
			case 'A':{
				
				if(final_term_marks[sort_indexes[j]]>final_term_marks[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}	
				break; }
			
			case 'D':{
				
				if(final_term_marks[sort_indexes[j]]<final_term_marks[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}
				break; }
			 }      
			}
		}
	}
	// Sort according to grades
	void sort_grade(char c){
		
		top_sort = -1;
		int temp;
		for(int i=0;i<=top;i++){
			sort_indexes[i] = i;
			top_sort++;
		}
		
		for(int i=0;i<top_sort;i++){
			for(int j=0;j<top_sort;j++){
				
				switch(c){
			
			case 'A':{
				
				if(grade_student[sort_indexes[j]]>grade_student[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}	
				break; }
			
			case 'D':{
				
				if(grade_student[sort_indexes[j]]<grade_student[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}
				break; }
			 }      
			}
		}
	}
	// Sort according to finnal and greater than or less than number
	void sort_final_X(char c,char select_type){
		
		top_sort = -1;
		int temp;
		int x_value;cout<<"Enter the X final Marks : ";cin>>x_value;
		
		switch(select_type){
		case 'G':{
		for(int i=0;i<=top;i++){
			if(final_term_marks[i]>x_value){
			top_sort++;
			sort_indexes[top_sort] = i;
		}
		}
			break;
	    }
	    case 'L':{
	    for(int i=0;i<=top;i++){
			if(final_term_marks[i]<=x_value){
			top_sort++;
			sort_indexes[top_sort] = i;
		}
	    }
			break;
		}
		default:
			cout<<"Invalid Select Type"<<endl;
	    }
		
		for(int i=0;i<top_sort;i++){
			for(int j=0;j<top_sort;j++){
				
				switch(c){
			
			case 'A':{
				
				if(final_term_marks[sort_indexes[j]]>final_term_marks[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}	
				break; }
			
			case 'D':{
				
				if(final_term_marks[sort_indexes[j]]<final_term_marks[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}
				break; }
			 }      
			}
		}
	}		
		
	// Sort according to Grade and greater than or less than number
	void sort_grade_X(char c,char select_type){
		
		top_sort = -1;
		int temp;
		char x_value;cout<<"Enter the X Grade (A-F) : ";cin>>x_value;
		
		switch(select_type){
		case 'G':{
		for(int i=0;i<=top;i++){
			if(grade_student[i]>x_value){
			top_sort++;
			sort_indexes[top_sort] = i;
		}
		}
			break;
	    }
	    case 'L':{
	    for(int i=0;i<=top;i++){
			if(grade_student[i]<=x_value){
			top_sort++;
			sort_indexes[top_sort] = i;
		}
	    }
			break;
		}
		default:
			cout<<"Invalid Select Type"<<endl;
	    }
		
		for(int i=0;i<top_sort;i++){
			for(int j=0;j<top_sort;j++){
				
				switch(c){
			
			case 'A':{
				
				if(grade_student[sort_indexes[j]]>grade_student[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}	
				break; }
			
			case 'D':{
				
				if(grade_student[sort_indexes[j]]<grade_student[sort_indexes[j+1]]){
					temp = sort_indexes[j];
					sort_indexes[j]=sort_indexes[j+1];
					sort_indexes[j+1]=temp;
				}
				break; }
			 }      
			}
		}
	}			
	public:
	// Constructor for assigning the value to the class variables
	Record(int size){
		size_of_array = size;
		top = -1;
		roll_no          =  new int   [size_of_array];
		mid_term_marks   =  new float [size_of_array];
	    final_term_marks =  new float [size_of_array];
	    class_student    =  new int   [size_of_array];
	    grade_student    =  new char  [size_of_array];
	    top_sort = -1;
	    sort_indexes     =  new int   [size_of_array];
	}
	// insert the new student record
	void input_student(){
		if(top>=size_of_array-1){
			cout<<"Array Overflow"<<endl;
			return;
		}
		top++;
		cout<<"Enter the Roll no                    : ";cin>>roll_no[top];
		cout<<"Enter the Mid term Marks    (? /50 ) : ";cin>>mid_term_marks[top];
		cout<<"Enter the Final term Marks  (?/100 ) : ";cin>>final_term_marks[top];
		cout<<"Enter the Class             ( 1-12 ) : ";cin>>class_student[top];
		grade_student[top]=grade(final_term_marks[top]);
		
	}
	// display all the record as it is inserted
	void display_record(){
		if(top<0){
			cout<< "Empty Record"<<endl;
		return;
		}
		cout<<"Student Record !"<<endl<<endl;
		for(int i=0;i<=top;i++){
			cout<<i+1<<"   "<<"Roll No : "<<setiosflags(ios::left)<<setw(5)<<roll_no[i]<<"Midterm Marks : "<<setiosflags(ios::left)<<setw(8)<<mid_term_marks[i]
			<<"Final Marks : "<<setiosflags(ios::left)<<setw(8)<<final_term_marks[i]<<"Class : "<<setiosflags(ios::left)<<setw(5)<<class_student[i]
			<<"Grade : "<<setiosflags(ios::left)<<setw(5)<<grade_student[i]<<endl;
		}
		cout<<endl<<endl;
   }
   // Display the sorted order record
   // sort type only 'A' or 'D' 
   void display_sorted_record(char sort_type ,int dispalay_type){  
   	
	    if(top<0){
			cout<< "Empty Record"<<endl;
		return;
		}
		
		switch(dispalay_type){
			case 1:{
				sort_roll_no(sort_type);
				break;
			}
			case 2:{
				sort_mid_term(sort_type);
				break;
			}
			case 3:{
				sort_final_term(sort_type);
				break;
			}
			case 4:{
				sort_grade(sort_type);
				break;
			}
			case 5:{
				sort_final_X(sort_type,'G');
				break;
			}
			case 6:{
				sort_final_X(sort_type,'L');
				break;
			}
			case 7:{
				sort_grade_X(sort_type,'G');
				break;
			}
			case 8:{
				sort_grade_X(sort_type,'L');
				break;
			}
			default:
				cout<<"Invalid Display Type"<<endl;
		}
		cout<<"Student Record !"<<endl<<endl;
		
		for(int i=0;i<=top_sort;i++){
			cout<<i+1<<"   "
			<<"Roll No : "<<setiosflags(ios::left)<<setw(5)<<roll_no[sort_indexes[i]]
			<<"Midterm Marks : "<<setiosflags(ios::left)<<setw(8)<<mid_term_marks[sort_indexes[i]]
			<<"Final Marks : "<<setiosflags(ios::left)<<setw(8)<<final_term_marks[sort_indexes[i]]
			<<"Class : "<<setiosflags(ios::left)<<setw(5)<<class_student[sort_indexes[i]]
			<<"Grade : "<<setiosflags(ios::left)<<setw(5)<<grade_student[sort_indexes[i]]
			<<endl;
		}
		
		cout<<endl<<endl;
   }
   // Delete the student by serching it from the existing data
   void delete_student_record(){
      int rn;	
	   cout<< "Enter the Roll no : ";cin>>rn;
	   int index = find_student(rn);
	   if(index == -1){
	   	cout<< "Student not Found! "<<endl;
	   	return;
	   }
	   for(int i=index;i<top;i++){
	   	
		roll_no         [i] = roll_no          [i+1];
		mid_term_marks  [i] = mid_term_marks   [i+1];
		final_term_marks[i] = final_term_marks [i+1];
		class_student   [i] = class_student    [i+1];
	   	grade_student   [i] = grade_student    [i+1];
	   
	   }
	   top--;
	   cout<<"Student Record Deleted Successfully"<<endl;
   }

};

int main(){
	Record r = Record(100); // Giving the size of Array
	int c;                // variable for choice in switch
	char error;           // varable for taking 'e' for starting the program
	
	while(1){
		cout<<"Enter 'e' for the proper running of program : ";cin>>error;
		if(error=='e'||error=='E'){
			break;
		}
		else{
			cout<<"Wrong Input"<<endl;
		}
	}
	
	while(1){
		
		// Menu Display for the user
	cout<<endl<<endl;
	cout<< "01.EXIT"<<endl;
	cout<< "02.DISPLAY RECORD"<<endl;
	cout<< "03.INSERT STUDENT"<<endl;
	cout<< "04.DELETE STUDENT BY ITS ROLL NO"<<endl;
	cout<< "05.DISPLAY SORT BY ROLL NO (ASC)"<<endl;
	cout<< "06.DISPLAY SORT BY ROLL NO (DSC)"<<endl;
	cout<< "07.DISPLAY SORT BY MIDTERM (ASC)"<<endl;
	cout<< "08.DISPLAY SORT BY MIDTERM (DSC)"<<endl;
	cout<< "09.DISPLAY SORT BY FINAL   (ASC)"<<endl;
	cout<< "10.DISPLAY SORT BY FINAL   (DSC)"<<endl;
	cout<< "11.DISPLAY SORT BY GRADE   (ASC)"<<endl;
	cout<< "12.DISPLAY SORT BY GRADE   (DSC)"<<endl;
	cout<< "13.DISPLAY GREATER THAN 'X' SORT BY FINAL  (DSC)"<<endl;
	cout<< "14.DISPLAY GREATER THAN 'X' SORT BY FINAL  (ASC)"<<endl;
	cout<< "15.DISPLAY LESS OR EQUAL'X' SORT BY FINAL  (DSC)"<<endl;
	cout<< "16.DISPLAY LESS OR EQUAL'X' SORT BY FINAL  (ASC)"<<endl;
	cout<< "17.DISPLAY GREATER THAN 'X' SORT BY GRADE  (DSC)"<<endl;
	cout<< "18.DISPLAY GREATER THAN 'X' SORT BY GRADE  (ASC)"<<endl;
	cout<< "19.DISPLAY LESS OR EQUAL'X' SORT BY GRADE  (DSC)"<<endl;
	cout<< "20.DISPLAY LESS OR EQUAL'X' SORT BY GRADE  (ASC)"<<endl;
	cout<<"Enter the choice : ";cin>>c; // User enter its choice	
	
	switch(c){
		case 1:{
			return 0;
			break;
		}
		case 2:{
			r.display_record();
			break;
		}
		case 3:{
			r.input_student();
			break;
		}
		case 4:{
			r.delete_student_record();
			break;
		}
		case 5:{
			r.display_sorted_record('A',1);
			break;
		}
		case 6:{
			r.display_sorted_record('D',1);
			break;
		}
		case 7:{
			r.display_sorted_record('A',2);
			break;
		}
		case 8:{
			r.display_sorted_record('D',2);
			break;
		}
		case 9:{
			r.display_sorted_record('A',3);
			break;
		}
		case 10:{
			r.display_sorted_record('D',3);
			break;
		}
		case 11:{
			r.display_sorted_record('A',4);
			break;
		}
		case 12:{
			r.display_sorted_record('D',4);
			break;
		}
		case 13:{
			r.display_sorted_record('D',5);
			break;
		}
		case 14:{
			r.display_sorted_record('A',5);
			break;
		}
		case 15:{
			r.display_sorted_record('D',6);
			break;
		}
		case 16:{
			r.display_sorted_record('A',6);
			break;
		}
		case 17:{
			r.display_sorted_record('D',7);
			break;
		}
		case 18:{
			r.display_sorted_record('A',7);
			break;
		}
		case 19:{
			r.display_sorted_record('D',8);
			break;
		}
		case 20:{
			r.display_sorted_record('A',8);
			break;
		}
		default:
			cout<<"Wrong Input"<<endl;
	}
    
}
	return 0;
}
