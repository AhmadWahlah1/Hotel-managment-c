#include<iostream>
#include<string>
using namespace std;
 string book_id[100],book_name[100],author[100],price[100],pages[100],student[100],student_id[100];
 int total=0;
 string std_id[100],std_name[100],depart[100],dat[100];
 int choice;
 int sted;
 void lib_data(){
 	
 	cout<<"HOW MANY BOOKS YOU WANT TO WANT TO ADD  ";
 	cin>>choice;
 	if(total=0){
 	
 	
	  	for(int i=0;i<choice;i++){
 		cout<<" \nBOOKS DATA NUMBER "<<i+1<<endl<<endl;
 		
 					cout<<"Enter book id"<<endl;
			       cin>>book_id[i];
				cout<<"Enter Book name"<<endl;
				cin>>book_name[i];
				cout<<"Enter Book Author name"<<endl;
				cin>>author[i];
				cout<<"Enter published year"<<endl;
				cin>>student[i];
			
				cout<<"Enter Book price per week"<<endl;
				cin>>price[i];
				cout<<"Enter Book pages"<<endl;
				cin>>pages[i];
			
 		
	 }
  }
  else{
  	
	  	for(int i=total;i<total+choice;i++){
 		cout<<" \nBOOKS DATA NUMBER "<<i+1<<endl<<endl;
 		
 					cout<<"Enter book id"<<endl;
			       cin>>book_id[i];
				cout<<"Enter Book name"<<endl;
				cin>>book_name[i];
				cout<<"Enter Book Author name"<<endl;
				cin>>author[i];
				cout<<"Enter published year"<<endl;
				cin>>student[i];
				
				cout<<"Enter Book price per week"<<endl;
				cin>>price[i];
				cout<<"Enter Book pages"<<endl;
				cin>>pages[i];
  }
  total=total+choice;
 }
 
}
 
 void sutd(){
 			cout<<" \nEnter HOW MANY The  Data of Student You want ADD  "<<endl;
 		       cin>>sted;
 		       
			   

 		  	for(int i=0;i<sted;i++){
 
 					cout<<"Enter student id"<<endl;
			       cin>>std_id[i];
				cout<<"Enter Student name"<<endl;
				cin>>std_name[i];
				cout<<"Enter department "<<endl;
				cin>>depart[i];
				cout<<"Enter date of issue "<<endl;
				cin>>dat[i];
			   			
			
 		
	 }
 	
 }
 	void show(){
 		for(int i=0;i<total;i++){
 			    cout<<"DATA OF BOOK  "<<i+1<<endl<<endl;
 				cout<<" Book id"<<book_id[i]<<endl;
			      
				cout<<" Book name"<<book_name[i]<<endl;
			
				cout<<" Book Author name"<<author[i]<<endl;
				
				cout<<" Published year"<<student[i]<<endl;
				
				
				
				cout<<" Book price per week"<<price[i]<<endl;
			
				cout<<" Book pages"<<pages[i]<<endl;
			
			
 			
 			
		 }
	 }
	 void search(){
	 	string id;
	 	cout<<" ENTER BOOK ID TO GET INFORMATION ABOUT THE BOOK   "<<endl;
		  cin>>id;
		 
		  	
		  	for(int i=0;i<total;i++){
		  		 if(id==book_id[i]){
 			    cout<<"DATA OF BOOK  "<<i+1<<endl<<endl;
 			    
 				cout<<" Book id"<<book_id[i]<<endl;
			      
				cout<<" Book name"<<book_name[i]<<endl;
			
				cout<<" Book Author name"<<author[i]<<endl;
				
				cout<<" Published Year"<<student[i]<<endl;						
				
				cout<<" Book price per week"<<price[i]<<endl;
			
				cout<<" Book pages "<<pages[i]<<endl;
			
			
		  }
	 
	 }

 

}
void stdshow(){
 	
 		  	for(int i=0;i<sted;i++){
 		cout<<" \nEnter HOW MANY The  Data of Student who want ADD  "<<i+1<<endl<<endl;
 		
 				cout<<" student id	"<<std_id[i]<<endl;
				cout<<" Student name	"<<std_name[i]<<endl;
				cout<<"Enter department "<<depart[i]<<endl;
				
				cout<<"Enter date of issue "<<dat[i]<<endl;
							
			
			
 		
	 }
 	
 }
 void a(){
 	int  g,f;
 cout<<"for how many you want to issue a book ";
 cin>>g;
 cout<<"Enter price ";
 cin>>f;
 cout<<endl;
 cout << endl;
   cout<<"price per mounth   "<< g*f;
}

int main(){
	cout<<"   					 WELCOME TO     "<<endl;
	cout<<"    			ARIDIAN  SOFTWARE  FOR  LIBRARY  MANAGEMENT "<<endl;
	
	cout<<endl;	
	
	int input=0;
	int count;
	while(input!=3){
		
		
		cout<<"press 1 to input details like id,Name,Author,Student,Price, Book Pages"<<endl;
		
		cout<<"press 2 to search data of books "<<endl;
		cout<<"press 3  to enter the data of student  "<<endl;
		cout<<"press 4 to display  "<<endl;
		cout<<"pess 5 to display data of student"<<endl;
				cout<<"pess 6 to calculate price to issue a book"<<endl;
		cin>>input;
		
		switch(input){
			case 1:
				start: 
						lib_data();
				break;
				
				case 2:
				search();
											break;
				case 3:
				sutd();
				break;
				case 4:
					show();
					break;
				case 5:
				stdshow();
				break;	
				case 6:
					int typ;
					cout<<"type 'a' TO PAY PER WEEK AND 'b' TO PAY PER DAY AND 'c' TO PAY PER MONTH  ";
					cin>>typ;
					if(typ==1){
						cout<<"enter price per week "<<endl;
						a();
						
					}
					else if(typ==2){
						cout<<"enter price per Day "<<endl;
						a();
					}
					else if(typ==3){
						cout<<"enter price per Month "<<endl;
						a();
					} 
					break;
					case 7:
						exit(0);
				default:
				cout<<"you have entered wrong value // please try again";
				goto start;			
				
		}		
		
	}
}