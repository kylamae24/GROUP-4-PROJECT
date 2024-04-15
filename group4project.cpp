#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<climits>


using namespace std;

//Introduction

//class register
class Uregister
{
	public:

	    string NuserName,Nemail, Ausername, Aemail;
	    int Npassword,Apassword;





};



void showdata()
{

	char arrshow[]={'S','T','U','D','E','N','T',' ','M','A','N','A','G','E','M','E','N','T',' ','S','Y','S','T','E','M'};
	cout<<"\n\n\n\n\n\n\t\t\t";
	for(int i=0;i<25;i++)
	{
		cout<<arrshow[i];
		Sleep(100);

	}
	system("CLS");

}

//variables
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20],arr6[20],arr7[20];

int total=0;

//Enter function
//Function where you can enter a students
void enter()

{

		int ch=0;
		cout<<"Elpidio Quirino\n\n";

			cout<<"How many students do u want to enter??"<<endl;

			cin>>ch;
            cin.ignore(INT_MAX, '\n');

			//condition
			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

			{


				cout<<"\nEnter the Data of student "<<i+1<<endl;
				cout<<"Enter to start\n";
				cin.ignore(INT_MAX, '\n');
				cout<<"\n";


				cout<<"Enter name: ";

				getline(cin,arr1[i]);

				cout<<"Enter Roll no: ";

				cin>>arr2[i];

				cout<<"Enter course: ";

				cin>>arr3[i];

				cout<<"Enter class: ";

				cin>>arr4[i];

				cout<<"Enter contact: ";

				cin>>arr5[i];

				cout<<"Enter Gender: ";

				cin>>arr6[i];

				cout<<"Email Address: ";

				cin>>arr7[i];
				system("cls");



			}

	    	}

	    	else

	    	{



	    		for(int i=total;i<ch+total;i++)

			{

				cout<<"\nEnter the Data of student: "<<i+1<<endl;
				cout<<"Enter to start\n";
				cin.ignore(INT_MAX, '\n');
				cout<<"\n";

				cout<<"Enter name: ";

				getline(cin, arr1[i]);

				cout<<"Enter Roll no: ";

				cin>>arr2[i];

				cout<<"Enter course: ";

				cin>>arr3[i];

				cout<<"Enter class: ";

				cin>>arr4[i];

				cout<<"Enter contact: ";

				cin>>arr5[i];

				cout<<"Enter Gender: ";

				cin>>arr6[i];

				cout<<"Email Address: ";
				cin>>arr7[i];
				system("cls");

			}

			total=ch+total;

			}



}

//show function
//function for showing stored students data
void show()

{
    //if total is equal to 0
	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	//Condition
	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\nData of Student "<<i+1<<endl;

	    		cout<<arr1[i]<<endl<<endl;

	    		cout<<"Name: "<<arr1[i]<<endl;

	    		cout<<"Roll no: "<<arr2[i]<<endl;

	    		cout<<"Course: "<<arr3[i]<<endl;

	    		cout<<"Class: "<<arr4[i]<<endl;

	    		cout<<"Contact: "<<arr5[i]<<endl;

	    		cout<<"Enter Gender: " <<arr6[i]<<endl;

	    		cout<<"Email Address: "<<arr7[i]<<endl;

	    	    }

	    	}

}

//search function
//this function is for searching students
void search()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

	string rollno;

				cout<<"Enter the roll no of student"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						cout<<"Name "<<arr1[i]<<endl;

						cout<<"Roll no "<<arr2[i]<<endl;

	    		        cout<<"Course "<<arr3[i]<<endl;

	    		        cout<<"Class "<<arr4[i]<<endl;

	    	        	cout<<"Contact "<<arr5[i]<<endl;

	    	        	cout<<"Gender: " <<arr6[i]<<endl;

	    	        	cout<<"Email Address: "<<arr7[i]<<endl;

					}

				}

			}

}

//update function
//this function is for updating or changing the data of a students
void update()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		string rollno;

				cout<<"Enter the roll no of student which you want to update"<<endl;

				cin>>rollno;

					for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						cout<<"\nPrevious data"<<endl<<endl;

						cout<<"Data of Student "<<i+1<<endl;

						cout<<"Name "<<arr1[i]<<endl;

	    	        	cout<<"Roll no "<<arr2[i]<<endl;

	    		        cout<<"Course "<<arr3[i]<<endl;

	    		        cout<<"Class "<<arr4[i]<<endl;

	    	        	cout<<"Contact "<<arr5[i]<<endl;

	    	        	cout<<"Gender: " <<arr6[i]<<endl;

	    	        	cout<<"Enter Email Address: "<<arr7[i]<<endl;

	    	        	cout<<"\nEnter new data"<<endl<<endl;

							cout<<"Enter name ";

				            cin>>arr1[i];

				            cout<<"Enter Roll no ";

				            cin>>arr2[i];

			             	cout<<"Enter course ";

				            cin>>arr3[i];

				            cout<<"Enter class ";

				            cin>>arr4[i];

				            cout<<"Enter contact ";

				            cin>>arr5[i];

				            cout<<"Enter Gender: " ;

				            cin>>arr6[i];

				            cout<<"Enter Email Adress: ";

				            cin>>arr7[i];

					}

				}

			}

		}



//delete function
//function for deleting datarecord of a student
void deleterecord()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string rollno;

				cout<<"Enter the roll no of student which you wanted to delete"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						for(int j=i;j<total;j++)

						{

						arr1[j]=arr1[j+1];

						arr2[j]=arr2[j+1];

					    arr3[j]=arr3[j+1];

						arr4[j]=arr4[j+1];

						arr5[j]=arr5[j+1];

				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}





			else

			{

				cout<<"Invalid input";

			}

}

}

//main function
main()

{

    showdata();


	Uregister newUser;

	//register
    cout<<"\tRegister\n\n";
	cout<<"Email Address: ";
	cin>>newUser.Nemail;
	cout<<"Username: ";
	cin>>newUser.NuserName;
	cout<<"Password: ";
	cin>>newUser.Npassword;
	cout<<"Please wait...\n";
	Sleep(500);
	system("cls");

	//log in
	cout<<"\tLog In\n\n";
	cout<<"Username: ";
	cin>>newUser.Ausername;
	cout<<"Password: ";
	cin>>newUser.Apassword;

	//condition security
	if(newUser.NuserName == newUser.Ausername && newUser.Npassword == newUser.Apassword){
	    cout<<"\nPlease wait...";
            Sleep(500);
            system("cls");









	int value;

	cout<<"Student Management System\n\n";

	while(true)

	{

	cout<<"\nPress 1 to Add Student"<<endl;

	cout<<"Press 2 to Show Students"<<endl;

	cout<<"Press 3 to Search Student"<<endl;

	cout<<"Press 4 to update Student"<<endl;

	cout<<"Press 5 to delete Student"<<endl;

	cout<<"Press 6 to exit"<<endl;



	cout<<"Press: ";
	cin>>value;

	system("CLS");

	switch(value)

	{

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			update();

			break;

		case 5:

			deleterecord();

			break;

		case 6:

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}


}

	}else{
	    cout<<"Erorro, Please try again";


	}



}
