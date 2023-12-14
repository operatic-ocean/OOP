#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//parent class
class Publication{
	
	public:
		string title;
		float price;
		
	void getData(){
		cout<<"Enter name of publication :-\n";
		cin>>title;
		cout<<"Enter price :-\n";
		cin>>price;
		
	}
	
};

//child class 1
class Book : public Publication{

	public:		
		int page_count;	
		
	void getdata(){
		//exception handling performed
		try{
			
			getData();
			cout<<"Enter page count of the book:-"<<endl;
			cin>>page_count;
			
			if(page_count <= 0){
				throw page_count;//exception thrown
			}
			
		}catch(...){//catch the exception and handle and display it.
			cout<<"\nInvalid Page Count"<<endl;
			page_count = 0;
		}
		
	}
	void putData(){
		cout<<"------------Book----------------"<<endl;
		cout<<"Name of publication is :="<<title<<endl;
		cout<<"Price of book is :="<<price<<endl;
		cout<<"Page count of book is :="<<page_count<<endl;
		cout<<"--------------------------------"<<endl;
	}
};

//child class 2
class Tape : public Publication{
	public:
		
		int play_time;	
		
		void getdata(){
			try{
				getData();
				cout<<"Enter play time of caset :"<<endl;
				cin>>play_time;	
				
				if(play_time <= 0){
					throw play_time;
					play_time = 0;
				}
			}catch(...){
				cout<<"\nWrong play time entered."<<endl;
			}
			
		}
		void putData(){
			cout<<"----------Caset-------------"<<endl;
			cout<<"Name of publication is :="<<title<<endl;
			cout<<"Price of caset is := "<<price<<endl;
			cout<<"Play time of caset is :="<<play_time<<" minutes"<<endl;
			cout<<"-----------------------------"<<endl;
		}
	
};

int main() {
	
	int n = 0;
	int m = 0;
	cout<<"\nEnter number of books :"<<endl;
	cin>>n;
	Book b[n];
	//book entry
	for(int i = 0; i< n ; i++){
		cout<<"Enter book :"<<i+1<<endl;
		b[i].getdata();
	}
	
	//book display
	
	for(int i = 0; i< n ; i++){
		cout<<"Book :"<<i+1<<endl;
		b[i].putData();
	}
	
	cout<<"\nEnter number of casets :"<<endl;
	cin>>m;
	Tape t[m];
	
	//caset entry
	for(int i = 0; i < m ; i++){
		cout<<"Enter caset :"<<i+1<<endl;
		t[i].getdata();
	}
	
	//caset display
	
	for(int i = 0; i< m ; i++){
		cout<<"Caset :"<<i+1<<endl;
		t[i].putData();
	}
	
	return 0;
}
