#include<iostream>
#include<fstream>
#include<string>
using namespace std;


class Publication{
	string title;
	float price;

	public:
		void setData(){
			cout<<"Enter Title name : ";
			cin>>title;
			cout<<"Enter Price in floating numbers : ";
			cin>>price;
		}

		void getData(){
			cout<<"Title is : "<<title<<endl;
			cout<<"Price is : "<<price<<endl;
		}
		
};

class Book : public Publication{
	int page;
	public:
	void pageCnt(){
		cout<<"Enter number of pages in book : ";
		cin>>page;
	}
	void getPage(){
		cout<<"Number of pages in book are "<<page<<endl;
	}
};

class Tape : public Publication{
	int min;
	public:
	void minCnt(){
		cout<<"Enter the time for tape in minutes : ";
		cin>>min;
	}
	void getMin(){
		cout<<"Playtime of tape in minutes is "<<min<<endl;
	}
};

int main(){
	int ch;
	bool flag = true;
	Book b;
	Tape t;

	while(flag){
		cout<<"Publication Menu"<<endl;
		cout<<"1.Book Publication"<<endl;
		cout<<"2.Tape Publication"<<endl;
		cout<<"3.Exit"<<endl;
		cout<<"Enter your choice : ";
		cin>>ch;
		
		switch(ch){
			
			case 1:
				cout<<"Write Book Info"<<endl;
				b.setData();
				b.pageCnt();
				cout<<"Printing Book Info"<<endl;
				b.getData();
				b.getPage();

				break;
			
			case 2:
				cout<<"Write Tape Info"<<endl;
				t.setData();
				t.minCnt();
				cout<<"Printing Book Info"<<endl;
				t.getData();
				t.getMin();

				break;

			case 3:
				flag =false;
				cout<<"Exitting Program !!"<<endl;
				break;

			default:
				cout<<"Enter valid choice !!"<<endl;
				break;

		}
	}

	return 0;
}