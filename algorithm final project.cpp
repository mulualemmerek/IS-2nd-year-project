#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<malloc.h>
using namespace std;
	
struct node{
	char bokname[100];
	char aouter[100];
	char tittl[100];
	char year[100];
	node *nxt;
	node *prv;	
};
//the starting node set to NULL
struct node *head=NULL;
void adddboktop();
void adddbokbotom();
void removebookbotom();
void removebooktop();
void showlist();
//void sorting();
void grupmember();
void sort_book();	
void searchbok();
void Color(int color){

}	
int main(){
system("color 3f");
system("cls");
		cout<<"******************************************************************\n";
	cout<<"*****      WOLLO UNVERSTY KOMBOLCHA CAMBAS      *****\n";
cout<<"*******  IS DEPARTMENT ALGORITHM PROJECT  ******\n";
cout<<"***********   ABOUT LIBRARING SYSTEM   ************\n";
	cout<<"******************************************************************\n";
	cout<<"************************************************************************************\n";

	char option;
	char choic;
	cout<<"pressany key to continue.......\n";
	                        getch();
//system("cls");
do{
system("color 0e");
//ysystem("cls");
	cout<<"############### PLESE ENTER YOUR CHOIC FROM THE FOLLOWING MENU#############\n";
	cout<<" PRESS '1' TO ADD BOOKS TO begning THE LIST\n";
	cout<<" PRESS '2' TO ADD BOOKS FROM THE BOTOM\n";
	cout<<" PRESS '3'  TO REMOVE BOOKS FROM top LIST\n";
	cout<<" PRESS '4'  TOREMOVE BOOK FROM BOTOM\n";
	cout<<" PRESS '5'  TO SHOW THE LIST OF BOOK\n";	
	cout<<" PRESS '6'  TO SORTING BOOKS\n";	
	cout<<" PRESS '7'  TO SEARCH BOOKS\n";
	cout<<" PRESS '8'  ABOUT PROJECT DEVELOPERS\n";
	cin>>choic;
	switch(choic){
		case '1':
		
		adddboktop();
				break;
				case '2':
				 
				 adddbokbotom();
					break;
				case '3':
				removebooktop();
				break;
				case '4':
						removebookbotom();
						break;
			case '5':
				
			 showlist();
				break;
				case '6':
				
				  sort_book();
				 break;
				 case '7':
				  searchbok();
				  break;
				  case '8':
				   grupmember();
				  	break;
				}
	}while(option='y');
	return 0;
	getch();
}
//asume there is ashelf the book set on the top of the shelf
void adddboktop()
{
node*temp=new node;
cout<<"enter the name of the book\n";
	cin>>temp->bokname;
	cout<<"what is the aouter of book\n";
	cin>>temp->aouter;
	cout<<"enter the tittl the book\n";
	cin>>temp->tittl;
	cout<<"enter the edition year of book\n";
	cin>>temp->year;
temp->nxt=NULL;
if(head==NULL)
{
head=temp;
}
else
{
temp->nxt=head;
head=temp;
}
cout<<"book successfully added from the beginning\n";
}
//the function to set books in the bootom of shelf
void adddbokbotom()
{
node *temp=new node;
node *temp2;
cout<<"enter the name of the book\n";
	cin>>temp->bokname;
	cout<<"what is the aouter of book\n";
	cin>>temp->aouter;
	cout<<"enter the tittl the book\n";
	cin>>temp->tittl;
	cout<<"enter the edition year of book\n";
	cin>>temp->year;
temp->nxt=NULL;
if(head==NULL)
{
head=temp;
}
else
{
temp2=head;
}
while(temp2->nxt!=NULL)
{
temp2=temp2->nxt;
}
temp2->nxt=temp;

cout<<"book added from the end\n";
}
	void removebookbotom()
{
node *temp;
node *temp2;
if(head==NULL)
{
cout<<"list is empty\n";
}
else
{
temp=head;
while(temp->nxt!=NULL)
{
temp=temp->nxt;
temp2=temp;
}
delete temp;
temp2->nxt=NULL;
cout<<" BOOK DELET SECSESFULLY FROM BOTOM\n";
}
}
//END OF FUNCTION REMOVE BOOOK BOTOM
	void removebooktop()
{
node *temp=head;
if(temp==NULL)
{
cout<<"unable to delete an empty list\n";
}
else
{
head=temp;
delete temp;
head=head->nxt;
cout<<" BOOK DELET SECSESFULLY FROM TOP\n";
}
}
//a function to desplay the books found in the shelf

void showlist()
{
node *temp=head;
("color 2f");


	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
			cout<<"@@@@@@@@@@@@@@@@@@@| WEII COME TO OUR LIBRARY |@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
			cout<<"%%%%%%%%%%%%%%%%%%%%%%| thise ARE LIST OF BOOKS WITH THER AOUTER,TITTLAND EDITION YEAR |%%%%%%%%%%%%%%\n";
				cout<<" BOOK NAME\t\tAOUTER\t\tTITTLE\t\tYEAR\n";
do{
if (temp==NULL)
{
cout<<"there is nothing to display\n";
}
else
{		
cout<<" "<<temp->bokname<<"\t\t"<<temp->aouter<<"\t\t"<<temp->tittl<<"\t\t"<<temp->year<<"\n";
cout<<endl;
temp=temp->nxt;
}
}while(temp!=NULL);
}

void sort_book()
{
	system("color 4a");
 if(head==NULL)
 {
  cout<<"\n\t\t   THERE IS NO ANY BOOK !!\n";
  getch();
 }
 else
 {
  node*first=head,*second,*temp;
	while(first!=NULL)
	{
	  second=first->nxt;
	 while(second!=NULL)
	 {
  if(strcmp(first->bokname,second->bokname>0))//if start or first are last ptr
	{
	 temp=new node();
	 strcpy(temp->bokname,first->bokname);
	 strcpy(temp->tittl,first->tittl);
	 //strcpy(temp->adress,first->adress);
	 //strcpy(temp->type_of_job,first->type_of_job);
	 
	 strcpy(first->bokname,second->bokname);
	 strcpy(first->bokname,second->bokname);
	 //strcpy(first->adress,second->adress);
	 //strcpy(first->type_of_job,second->type_of_job);
	 															 //first 2 next
	 strcpy(second->bokname,temp->bokname);
	 strcpy(second->tittl,temp->tittl);
	 //trcpy(second->adress,temp->adress);
	 //strcpy(second->type_of_job,temp->type_of_job);
	  //delete temp;
	}
	  second=second->nxt;
  }
		first=first->nxt;
 }
}
getch();
}
//function used to srarch abook you want
void searchbok(){
	
	node *temp;
	
if(head==NULL){
	cout<<"LIST EMPTY TO SEARCH\n";
}
			
else
{
string value;
	cout<<"enter the name of book you want to search\n";
	cin>>value;
	node *temp=head;
	bool flage=false;
	while(temp!=NULL){
	
	if(temp->bokname==value)
	{
      system("color 3e");	
		cout<<" information of book is\n";
		cout<<"book name :"<<temp->bokname;
		cout<<"\nbook aouter :"<<temp->aouter;
		cout<<"\nbook title :"<<temp->tittl;
		cout<<"\nEDITION YEAR :"<<temp->year;
	}
	else {
	cout<<"THRE IS NO MUCH  ITEM FOUND YOU ENTER";
	}

		temp=temp->nxt;
}
}}
void grupmember(){
	system("cls");
	system("color 4a");
	cout<<"****************GROUP MEMBERS WHO DO THIS PROJECT ARE:-*************************\n";
cout<<"**********NAME                                              ID**********\n";

cout<<"******|| LIDIYA MEKONNEN                                0576/10 ||******\n";
cout<<"******|| MULUALEM GELAW                                 0594/10 ||******\n";
cout<<"******|| HIRUT WAGNAW                                   0569/10 ||******\n";
cout<<"******|| AZMERA TESFAYE                                 0532/10 ||******\n";
cout<<"******|| ZEBIDER GASHAW                                 1260/09 ||******\n";
cout<<"******|| YOHANIS TEGAY                                  2289/10 ||******\n";
cout<<"******|| BELANEH ASEFA                                  0535/10 ||******\n";
cout<<"******|| SEHALADIN NURU                                 3838/10 ||******\n";
cout<<"******|| BANCHAYEHU AMARE                               0533/10 ||******\n";
cout<<"******|| BITEW TADEGE                                   1010/10 ||******\n";
cout<<"*************************************************************************************\n";
getch();
	
}

	
