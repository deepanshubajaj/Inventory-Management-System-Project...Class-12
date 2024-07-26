/*

   Subject : C++
   Subject Faculty : Rajkumar Pal
   Developed By : Deepanshu Bajaj
   Class   : 12th - 'A'
   School  : Mira Model School, Janakpuri, New Delhi-110058
   Board : CBSE Board

*/

/*....................C++ Project (including OOPS & File Handling).......................*/

/*................Required Header Files.................*/

# include <conio.h>
# include <stdio.h>
# include <fstream.h>
# include <process.h>
# include <string.h>
# include <dos.h>
# include <stdio.h>

//Only these Header Files are required

/*...............class for inventory.....................*/

class inventory
{
     char icode[5];
     char iname[20];
     float price;
     int stock;

     public:

     void getdata();
     void showdata1();//for displaying item code and name
     void showdata2();//for displaying the item details

     char* geticode()
     {
	 return icode;

     }

     char* getiname()
     {
	 return iname;

     }

     float getprice()
     {
	 return price;

     }

     int getstock()
     {
	 return stock;

     }

     void setp(float a)
     {
	 price=a;

     }

     void sets(int a)
     {
	 stock=a;

     }


};

void inventory :: getdata()
{
      cout<<"\nEnter item code : ";
      gets(icode);
      cout<<"\nEnter item name : ";
      gets(iname);
      cout<<"\nEnter price : ";
      cin>>price;
      cout<<"Enter stock : ";
      cin>>stock;

}

void inventory :: showdata1()
{

      cout<<"\nItem code : "<<icode<<' '<<"  Item name : "<<iname;

}

void inventory :: showdata2()
{

      cout<<"\nItem code : "<<icode<<' '<<"   Item name : "<<iname;
      cout<<"\nPrice : "<<price;
      cout<<"\nStock : "<<stock;

}

//Class Inventory closed

/*..................Function prototypes...............*/

void create();
void display1();
void display2();
void display3();
void display4();
void display5();
void menu();
void purchase();
void searchcode();
void searchname();
void updateprice();
void updatestock();
void ddelete();
void append();
void password();
void issue();
void deposit();
void passin();
void intro();
void loading();

/*.....................void main....................*/

void main()
{
     intro();
     getch();
     clrscr();
     textcolor(14);//14 = Yellow
     textbackground(4);//4 = Red
     char ans;
     gotoxy(30,8);
     cout<<" TYPE  CRAFT  ";
     gotoxy(24,10);
     cout<<" (Speaker Parts Inventory) ";
     gotoxy(24,11);
     cout<<"___________________________ ";
     getch();
     clrscr();
     password();

     do
     {
	  gotoxy(29,2);
	  cout<<" MAIN MENU";
	  gotoxy(21,5);
	  cout<<"To add item ...................1";
	  gotoxy(21,7);
	  cout<<"To display ....................2";
	  gotoxy(21,9);
	  cout<<"To Search item ................3";
	  gotoxy(21,11);
	  cout<<"To update item ................4";
	  gotoxy(21,13);
	  cout<<"To delete item ................5";
	  gotoxy(21,15);
	  cout<<"To issue.......................6";
	  gotoxy(21,17);
	  cout<<"To deposit item................7";
	  gotoxy(21,19);
	  cout<<"To purchase item...............8";
	  gotoxy(21,21);
	  cout<<"To exit........................9";
	  int ch;
	  cout<<"\n\n\tENTER YOUR CHOICE : " ;
	  cin>>ch;
	  clrscr();
	  switch(ch)
	  {
		case 1:append();
		       break;

		case 2:{
			   char ans;
			   do
			   {
			       gotoxy(21,2);
			       cout<<"To Display list of items....................1";
			       gotoxy(21,4);
			       cout<<"To Display contents of particular item......2";
			       gotoxy(21,6);
			       cout<<"To Display all items having PRICE>=50.......3";
			       gotoxy(21,8);
			       cout<<"To Display all items having PRICE<=10.......4";
			       gotoxy(21,10);
			       cout<<"To Display all items having STOCK>=100......5";
			       gotoxy(21,12);
			       cout<<"To Display all items having STOCK<=50.......6";
			       gotoxy(21,14);
			       cout<<"To Display all items  in Tabular form.......7";
			       int a;
			       cout<<"\n\n\nEnter Your Choice :";
			       cin>>a;
			       clrscr();

			       switch(a)
			       {
				   case 1:display1();
					  break;
				   case 2:searchcode();
					  break;
				   case 3:display2();
					  break;
				   case 4:display3();
					  break;
				   case 5:display4();
					  break;
				   case 6:display5();
					  break;
				   case 7:menu();
					  break;

				   default:cout<<"\n\nINVALID ENTERY ";
			       }
			       cout<<"\n\n\nWant To Go Back To Sub Menu (y/Y or n/N) :";
			       cin>>ans;
			       clrscr();
			   }while( ans == 'y' || ans == 'Y' );

		       }
		       break;


		case 3:{
			   char ans;

			   do
			   {
			       gotoxy(21,2);
			       cout<<"Search item by item code..........1";
			       gotoxy(21,4);
			       cout<<"Search item by item name..........2";

			       int a;
			       cout<<"\n\n\nEnter Your Choice :";
			       cin>>a;
			       clrscr();

			       switch(a)
			       {
				   case 1:searchcode();
					  break;
				   case 2:searchname();
					  break;
				   default:cout<<"\n\nINVALID ENTERY ";
			       }
			       cout<<"\n\n\nWant To Go Back To Sub Menu (y/Y) :";
			       cin>>ans;
			       clrscr();
			   }while( ans == 'y' || ans == 'Y' );

		       }
		       break;


		case 4:{
			   char ans;

			   do
			   {
			       gotoxy(21,2);
			       cout<<"Update item price...............1";
			       gotoxy(21,4);
			       cout<<"Update item stock...............2";

			       int a;
			       cout<<"\n\n\nEnter Your Choice :";
			       cin>>a;
			       clrscr();

			       switch(a)
			       {
				   case 1:updateprice();
					  break;
				   case 2:updatestock();
					  break;
				   default:cout<<"\n\nINVALID ENTERY";
			       }
			       cout<<"\n\n\nWant To Go Back To Sub Menu (y/Y) :";
			       cin>>ans;
			       clrscr();
			   }while( ans == 'y' || ans == 'Y' );

		       }
		       break;

		case 5:ddelete();
		       break;

		case 6:issue();
		       break;

		case 7:deposit();
		       break;

		case 8:purchase();
		       break;

		case 9:{

			    gotoxy(24,9);
			    cout<<" THANK YOU FOR USING INVENTORY ";
			    gotoxy(23,10);
			    cout<<"________________________________";
			    getch();
			    exit(0);
		       }

		default:cout<<"\n\n\nINVALID ENTERY ";

	  }
	  cout<<"\n\n\nWant To Return To Main Menu (Press Y/y) : ";
	  cin>>ans;
	  clrscr();
     }while( ans == 'Y' || ans == 'y' );

     getch();

}

/*....................main closed...................*/

/*...................creating file.............*/

void create()
{
     ofstream mf;
     mf.open("item.dat",ios::binary);

     if(!mf)
     {
	 cout<<"stream not created";
	 getch();
	 exit(0);
     }

     inventory in;
     char ch;

     do
     {
	 in.getdata();
	 mf.write((char*) & in,sizeof(in));

	 cout<<"\nWant to enter more data : ";
	 cin>>ch;
     }while( ch == 'Y' || ch == 'y');

     mf.close();

}

//create closed.

/*.......Display items in Tabular form.......*/

void menu()
{
     clrscr();
     ifstream mf;
     inventory in;
     mf.open("item.dat",ios::in);
     if(!mf)
     {
	 cout<<"  STREAM NOT CREATED " ;
	 getch();
	 exit(0);
     }
     gotoxy(30,1);
     cout<<"ITEM  MENU";
     gotoxy(10,3);
     cout<<"==============================================";
     gotoxy(10,4);
     cout<<"I.CODE      NAME         PRICE      STOCK";
     gotoxy(10,5);
     cout<<"==============================================";
     int i=7;
     while(mf.read((char*)&in,sizeof(in)))
     {
	 gotoxy(10,i);
	 cout<<in.geticode();
	 gotoxy(20,i);
	 cout<<in.getiname();
	 gotoxy(37,i);
	 cout<<in.getprice();
	 gotoxy(47,i);
	 cout<<in.getstock();
	 i+=2;
     }
     mf.close();
}

//Display in Tabular for closed

/*............For displaying list of items...........*/

void display1()
{
     ifstream mf;
     mf.open("item.dat",ios::binary);

     if(!mf)
     {
	cout<<"stream not created";
	getch();
	exit(0);
     }

     inventory in;

     mf.read((char*) & in,sizeof(in));

     while(mf)
     {
	in.showdata1();
	mf.read((char*) & in,sizeof(in));
     }
     mf.close();

}

//display closed.

/*............For displaying list of items having PRICE>=50...........*/

void display2()
{
     ifstream mf;
     clrscr();
     mf.open("item.dat",ios::binary);

     if(!mf)
     {
	cout<<"stream not created";
	getch();
	exit(0);
     }

     inventory in;

     mf.read((char*) & in,sizeof(in));

     while(mf)
     {

	if(in.getprice() >= 50)
	in.showdata1();
	mf.read((char*) & in,sizeof(in));
     }
     mf.close();

}

//display2 closed.

/*............For displaying list of items having PRICE<=10...........*/

void display3()
{
     ifstream mf;
     mf.open("item.dat",ios::binary);

     if(!mf)
     {
	cout<<"stream not created";
	getch();
	exit(0);
     }

     inventory in;

     mf.read((char*) & in,sizeof(in));

     while(mf)
     {

	 if(in.getprice() <= 10)
	 in.showdata1();
	 mf.read((char*) & in,sizeof(in));
     }
     mf.close();

}

//display3 closed.

/*............For displaying list of items having STOCK>=100...........*/

void display4()
{
     ifstream mf;
     mf.open("item.dat",ios::binary);

     if(!mf)
     {
	 cout<<"stream not created";
	 getch();
	 exit(0);
     }

     inventory in;
     mf.read((char*) & in,sizeof(in));

     while(mf)
     {
	 if(in.getstock() >= 100)
	 in.showdata1();
	 mf.read((char*) & in,sizeof(in));
     }
     mf.close();

}

//display4 closed.

/*............For displaying list of items having STOCK<=50...........*/

void display5()
{
     ifstream mf;
     mf.open("item.dat",ios::binary);

     if(!mf)
     {
	 cout<<"stream not created";
	 getch();
	 exit(0);
     }

     inventory in;
     mf.read((char*) & in,sizeof(in));

     while(mf)
     {
	 if(in.getstock() <= 50)
	 in.showdata1();
	 mf.read((char*) & in,sizeof(in));
     }
     mf.close();

}

//display5 closed.

/*..................search by item code............*/

void searchcode()
{
     ifstream mf;
     mf.open("item.dat",ios::binary);

     char num[5];
     cout<<"\n\nEnter Item no. to be searched : ";
     gets(num);

     inventory in;
     int f=0;

     mf.read((char*) & in,sizeof(in));

     while(mf)
     {
	 if( strcmpi(num,in.geticode())==0 )
	 {
	     f=1;
	     in.showdata2();
	 }

	 mf.read((char*) & in,sizeof(in));
     }
     if(f==0)
     cout<<"Record not found ";
     mf.close();

}

//search by code closed.

/*...................searching by name...............*/

void searchname()
{
     ifstream mf;
     mf.open("item.dat",ios::binary);

     inventory in;
     int f=0;
     char n[20];

     cout<<"\n\nEnter item name to be searched : ";
     gets(n);

     mf.read((char*) & in,sizeof(in));

     while(mf && f==0)
     {

	  if( strcmpi(n,in.getiname()) == 0 )
	  {
		f=1;
		in.showdata2();
	  }
	  mf.read((char*) & in,sizeof(in));
     }
     if(f==0)
     cout<<"Record not found ";
     mf.close();

}

//search by name closed.

/*....................updating item price ................*/

void updateprice()
{

     fstream mf;
     mf.open("item.dat",ios::binary | ios::in | ios::out);

     if(!mf)
     {
	 cout<<"\nStream not created ";
	 getch();
	 exit(0);
     }

     inventory in;
     int f=0;
     char num[5];

     cout<<"Enter item code to be updated : ";
     gets(num);

     mf.read((char*) &in,sizeof(in));

     while( mf && f==0)
     {
	 if( strcmpi(num,in.geticode() ) == 0 )
	 {
	       f=1;
	       long pos=mf.tellg();
	       pos-=sizeof(in);
	       mf.seekg(pos,ios::beg);

	       int size;
	       cout<<"\nEnter item size to be updated :";
	       cin>>size;

	       float p;
	       cout<<"Enter new price : ";
	       cin>>p;

	       in.setp(p);

	       mf.write((char*)&in , sizeof(in));
	 }
	 mf.read((char*)&in , sizeof(in));
     }

     if(f==0)
     cout<<"\nITEM NOT FOUND FOR UPDATION ";
     else
     cout<<"\nITEM UPDATED";
     mf.close();

}

//updation of price closed

/*....................updating item stock ................*/

void updatestock()
{

     fstream mf;
     mf.open("item.dat",ios::binary | ios::in | ios::out);

     if(!mf)
     {
	 cout<<"\nStream not created ";
	 getch();
	 exit(0);
     }

     inventory in;
     int f=0;
     char num[5];

     cout<<"\nEnter item code to be updated : ";
     gets(num);

     mf.read((char*) &in,sizeof(in));

     while( mf && f==0)
     {
	 if( strcmpi(num,in.geticode() ) == 0 )
	 {
	       f=1;
	       long pos=mf.tellg();
	       pos-=sizeof(in);
	       mf.seekg(pos,ios::beg);

	       int size;
	       cout<<"\nEnter item size to be updated :";
	       cin>>size;

	       float s;
	       cout<<"Enter new stock : ";
	       cin>>s;

	       in.sets(s);

	       mf.write((char*)&in , sizeof(in));
	 }
	     mf.read((char*)&in , sizeof(in));
     }

     if(f==0)
     cout<<"\nITEM NOT FOUND FOR UPDATION ";
     else
     cout<<"\nITEM UPDATED";
     mf.close();

}

//updation of stock closed

/*................Deletion of item.............*/

void ddelete()
{
     char ans;
     do
     {
	  ifstream mf;
	  menu();
	  mf.open("item.dat",ios::binary);

	  ofstream nf;
	  nf.open("new.dat",ios::binary);

	  if(!mf || !nf)
	  {
	      cout<<"\nSTREAM not CREATED";
	      getch();
	      exit(0);
	  }

	  inventory in;
	  int f=0;
	  char num[5];

	  cout<<"\n\nEnter item code for deletion :";
	  gets(num);

	  mf.read((char*) &in,sizeof(in));

	  while(mf)
	  {
	      if( strcmpi(num,in.geticode()) !=0 )
	      nf.write((char*) & in, sizeof(in));

	      f=1;

	      mf.read((char*) &in,sizeof(in));
	  }

	  mf.close();
	  nf.close();

	  remove("item.dat");
	  rename("new.dat","item.dat");
	  menu();
	  cout<<"\nWant to delete more (y/Y or n/N) : ";
	  cin>>ans;
	  if(f==1)
	  cout<<"\n\nITEM DELETED ";
	  else
	  cout<<"\n\nRECORD NOT FOUND FOR DELETION";
     }while( ans=='y' || ans=='Y' );

}

//deletion of item closed.

/*.................For addition of new item..............*/

void append()
{
     clrscr();
     char ans;
     do
     {
	 ofstream mf;
	 mf.open("item.dat",ios::binary | ios::app);

	 if(!mf)
	 {
	      cout<<"Stream not created";
	      getch();
	      exit(0);
	 }

	 inventory in;

	 menu();
	 in.getdata();
	 mf.write((char*) &in ,sizeof(in));
	 clrscr();
	 menu();
	 cout<<"\n want to add more (y/Y or n/N): ";
	 cin>>ans;

	 mf.close();
     }while( ans=='y' || ans=='Y' );
     menu();
     cout<<"\n\nRecord Added";
}

// append closed.

/*................function for loading....................*/

void loading()
{
     clrscr();
     int k=10,p=38;

     gotoxy(25,10);
     cout<<"L O A D I N G";
     for(int i=0;i<=100;i+=2)
     {

	if(p==45)
	{
	   p=38;
	   gotoxy(p,10);
	   clreol();
	}

	gotoxy(p++,10);
	cout<<".";
	gotoxy(10,15);
	cout<<i;
	gotoxy(14,15);
	cout<<"%";
	gotoxy(k++,17);
	cout<<char(178);
	delay(80);
     }


}

//Function loading closed

/*.................Function to purchase .................*/

void purchase()
{

     passin();
     loading();
     clrscr();
     char ans;
     do
     {
	clrscr();
	menu();
	fstream mf;
	int q,m;

	mf.open("item.dat",ios::binary | ios::in | ios::out);

	if(!mf)
	{
	    cout<<"\nStream not created ";getch();exit(0);}

	    inventory in;
	    int f=0;
	    char num[5];

	    cout<<"\nEnter item code to be puchased : ";
	    gets(num);

	    mf.read((char*) &in,sizeof(in));

	    while( mf && f==0)
	    {
		if( strcmpi(num,in.geticode() ) == 0 )
		{
		      f=1;
		      long pos=mf.tellg();
		      pos-=sizeof(in);
		      mf.seekg(pos,ios::beg);

		      float s;
		      cout<<"Enter the  stock you want to take : ";
		      cin>>s;
		      q=s*in.getprice();
		      s=in.getstock()-s;
		      m=s;
		      in.sets(s);

		      mf.write((char*)&in , sizeof(in));
		}
		mf.read((char*)&in , sizeof(in));
	    }
	    menu();
	    if(f==0)
	    cout<<"\nITEM NOT FOUND IN INVENTORY ";
	    else
	    {
		clrscr();
		menu();
		cout<<"\n********************* INVOICE ****************************";
		cout<<"\nITEM LEFT =  "<<m;
		cout<<"\n COST OF ITEMS = "<<q;
		cout<<"\n TOTAL PAYABLE AMOUNT AFTER 5% DISCOUNT ="<<q-(5*q/100.0);
	    }

	    cout<<"\nWant to enter more(y/Y or n/N) : ";
	    cin>>ans;
	    mf.close();
     }while( ans=='y' || ans=='Y' );
     cout<<"\n \t\tTHANK YOU !!!!!! AND SEE YOU SOON !!!!!";

}

//Function purchase item closed

/*.................Function for main password................*/

void password()
{
     char p[20] = "deepanshu1998";

     char pin[20];
     char ch;

     gotoxy(30,9);
     cout<<"Enter password : ";
     for(int i=0,j=50;;i++)
     {
	  gotoxy(j,9);
	  ch=getch();
	  if(ch==13)
	  break;
	  pin[i]=ch;
	  gotoxy(j++,9);
	  cout<<'*';
     }
     pin[i]='\0';
     if(strcmp(p,pin)==0)
     {
	  clrscr();
	  gotoxy(30,8);
	  cout<<"CORRECT PASSWORD";
	  gotoxy(31,10);
	  cout<<"ACCESS GRANTED";
	  loading();
	  gotoxy(25,20);
	  cout<<"Press any key to continue ...";
	  getch();
	  clrscr();
     }
    else
    {
	  clrscr();
	  gotoxy(30,8);cout<<"INCORRECT PASSWORD";
	  getch();
	  clrscr();
	  gotoxy(30,8);cout<<"TRY AGAIN";
	  password();
    }

}

//function main password closed

/*.............Function for issue items ...............*/

void issue()
{
    passin();
    loading();
    clrscr();
    menu();
    fstream mf;
    int m;
    mf.open("item.dat",ios::binary | ios::in | ios::out);

    if(!mf)
    {
	cout<<"\nStream not created ";
	getch();
	exit(0);
    }

    inventory in;
    int f=0;
    char num[5];
    cout<<"\nEnter item code to be taken : ";
    gets(num);

    mf.read((char*) &in,sizeof(in));

    while( mf && f==0)
    {
	  if( strcmpi(num,in.geticode() ) == 0 )
	  {
		 f=1;
		 long pos=mf.tellg();
		 pos-=sizeof(in);
		 mf.seekg(pos,ios::beg);


		 float s;
		 cout<<"Enter the  stock you want to take : ";
		 cin>>s;

		 s=in.getstock()-s;
		 m=s;
		 in.sets(s);


		 mf.write((char*)&in , sizeof(in));
	    }
	    mf.read((char*)&in , sizeof(in));
    }
    menu();
    if(f==0)
    cout<<"\nITEM NOT FOUND IN THE INVENTORY ";
    else
    cout<<"\nITEM LEFT =  "<<m;

    cout<<"\n \t\tTHANK YOU !!!!  AND SEE YOU SOON !!!!!";
    mf.close();

}

//Function issue item closed

/*............Function deposit items ..............*/

void deposit()
{

    passin();
    loading();
    clrscr();
    menu();
    fstream mf;
    int fine,q,n=10,m;
    mf.open("item.dat",ios::binary | ios::in | ios::out);

    if(!mf)
    {
	cout<<"\nStream not created ";
	getch();
	exit(0);
    }

    inventory in;
    int f=0;
    char num[5];

    cout<<"\nEnter item code to be returned : ";
    gets(num);

    mf.read((char*) &in,sizeof(in));
    while( mf && f==0)
    {
	 if( strcmpi(num,in.geticode() ) == 0 )
	 {
	     f=1;
	     long pos=mf.tellg();
	     pos-=sizeof(in);
	     mf.seekg(pos,ios::beg);

	     int days;
	     cout<<"\nEnter the returning days:";
	     cin>>days;

	     float s;
	     cout<<"Enter the  stock you want to return : ";
	     cin>>s;
	     q=s*in.getprice();
	     s=in.getstock()+s;
	     m=s;
	     in.sets(s);
	     if(days>15)
	     {
		fine=(days-15)*n;
	     }
	     else fine=0;

	     mf.write((char*)&in , sizeof(in));
	 }
	 mf.read((char*)&in , sizeof(in));
    }
    menu();
    if(f==0)
    cout<<"\nITEM NOT FOUND FOR ADDITION IN INVENTORY ";
    else
    {
	 cout<<"\nITEM AGAIN ADDED =  "<<m;
	 cout<<"\nYOUR FINE =  "<<fine;
	 cout<<"\n COST OF ITEMS = "<<q;
	 cout<<"\n TOTAL PAYABLE AMOUNT ="<<fine+q;
    }
    cout<<"\n \t\tTHANK YOU !!!!!! AND SEE YOU SOON !!!!!";
    mf.close();

}

//Function deposit item closed

/*..........Function for internal password..........*/

void passin()
{
    char p[20] = "inventory";

    char pin[20];
    char ch;

    gotoxy(30,9);
    cout<<"Enter password : ";
    for(int i=0,j=50;;i++)
    {
	 gotoxy(j,9);
	 ch=getch();
	 if(ch==13)
	 break;
	 pin[i]=ch;
	 gotoxy(j++,9);
	 cout<<'*';
    }
    pin[i]='\0';
    if(strcmp(p,pin)==0)
    {
	 clrscr();
	 gotoxy(30,8);
	 cout<<"CORRECT PASSWORD";
	 gotoxy(31,10);
	 cout<<"ACCESS GRANTED";
	 getch();
	 clrscr();
     }
     else
     {
	 clrscr();
	 gotoxy(30,8);
	 cout<<"INCORRECT PASSWORD";
	 getch();
	 clrscr();
	 gotoxy(30,8);
	 cout<<"TRY AGAIN";
	 passin();
     }

}

//Function internal password closed

/*............Function for Introduction .............*/

void intro()
{
     clrscr();
     gotoxy(21,5);
     cout<<"~~~~~~~~~~ INVENTORY MANAGEMENT SYSTEM ~~~~~~~~ ";
     gotoxy(23,6);
     cout<<"This program has the following features :";
     gotoxy(23,7);
     cout<<"1.Addition";
     gotoxy(23,8);
     cout<<"2.Display";
     gotoxy(23,9);
     cout<<"3.Searching";
     gotoxy(23,10);
     cout<<"4.Updation";
     gotoxy(23,11);
     cout<<"5.Deletion";
     gotoxy(23,12);
     cout<<"6.Issue";
     gotoxy(23,13);
     cout<<"7.Deposit";
     gotoxy(23,14);
     cout<<"8.Purchase";
     gotoxy(23,15);
     cout<<"9.Exit";
     gotoxy(21,17);
     cout<<"~~~~~~~~~~~~~~~ INTRODUCTION ~~~~~~~~~~~~~~~~";
     gotoxy(21,18);
     cout<<"C++ Faculty = Rajkumar Pal";
     gotoxy(21,19);
     cout<<"Developed By = Deepanshu Bajaj";
     gotoxy(21,20);
     cout<<"Class = 12th - A";
     gotoxy(21,21);
     cout<<"Roll No = 7";
     gotoxy(21,22);
     cout<<"School= Mira Model School, Janakpuri, New Delhi-110058";
     gotoxy(21,24);
     cout<<"~~~~~~~~~~~~~~~ WELCOME ~~~~~~~~~~~~~~~~~~~~~" ;


}

//Function for Introduction closed

//.......................C++ Project Closed...................

