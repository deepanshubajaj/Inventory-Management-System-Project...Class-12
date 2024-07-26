# Project Description 
<p><h1 align="center">Inventory Management System Project</h1>
<br><h2 align="center">Class 12th Project based on OOPS & File Handling</h2>

<p><h2 align="center">INTRODUCTION  TO  PROJECT </h2>
<br>My project  Inventory  Management  System  basically provides a quick and efficient  registration of  a  particular  item ,  storing  their  details  into  the  system  and  perform  the  work  accordingly.  
The need of this project arose as there is a growing demand of inventory for resources and managing the record  of n items  is not an easy task. My project keeps the data more secure and provides  other  facilities and is very  fast. Someone working on this program for the first time doesn’t need any special training or course , only the basic knowledge about inventory is enough for someone to start working with my program. The  menu is  self  explanatory and provides all necessary access according  to  the  user  ,one can add ,  display , update , search  , delete  ,issue , purchase , deposit  item through a great ease. Also the  password  is  setup  in the program  to secure  data.

The program can easily handle vast amount of data and the data stored is safe within the binary file which are readable only through the program itself . Inside the program also the object oriented programming  has been used to a great extent so data is safe while it is in use. Thus this Inventory management system is ideal for prolong use of  resources.

<p><h2 align="center">DATA  STRUCTURES USED </h2>
<br>My  program  has  the  following  class:
<br><br><h3>Inventory </h3>
<br>It  has  the  following  data  members:
1)	char icode[5];
               It  stores  the  code of  the  item  .
2)	char iname[20];
                It  stores  the  name  of  the  item . 
3)	float price;
               It  stores  the  price  of  the  item .
4)	int stock;
               It  stores  the  stock  of  the  item .






It  has  the  following  functions :
1)	 void getdata();
         To get  the  details  of  item .
2)	void showdata1();
         For displaying item code and name .
3)	void showdata2();
         For displaying the item details  .
4)	char* geticode();
         It  returns  the  value  of  item  code  .
5)	char* getiname();
         It  returns  the  value  of  item  name.
6)	float getprice();
         It  returns  the  value  of  item  price .
7)	int getstock();
         It  returns  the   value  of  item  stock.
8)	void setp(float a);
         It  sets  the  value  of  price of  item.
9)	void sets(int a);
        It  sets  the  value  of  stock  of  item .

<p><h2 align="center">Module  Description</h2>
<br>1)	 To add item ...................
          To  add  a new  record  of  item .

2)	To display ......................
(a)	To Display list of items....................
(b)	To Display contents of particular item......
(c)	To Display all items having PRICE>=50.......
(d)  To Display all items having PRICE<=10.......
(e)	To Display all items having STOCK>=100.....
(f)	To Display all items having STOCK<=50.......
(g)	To Display all items  in Tabular form.......


3)	To Search item ...............
(a)	Search  by  item  name ….
(b)	Search  by  item  code…..




4)	To update item ..............
(a)	Update  item  price ….
(b)	Update  item  stock…

5)	To delete item ................
         To  delete  the  particular  item  from  inventory .

6)	To issue.......................
          To  issue  some  item  from  inventory  for  some    days.

7)	To deposit item...............
  To  deposit  the issued  item  of  inventory  after  some  days.

8)	To purchase item..............
          To  purchase  the  item  from  inventory .

9)	To exit........................
  To  exit  the  main  program.

<p><h2 align="center">HEADER  FILES  USED </h2>
<br>I  have  used  the  following  header  files  in  my  project  :
1)	Conio.h  = For  getch() , textcolor() , textbackground(), gotoxy()
2)	Fstream.h  = For  cin , cout  and  file  handling
3)	Dos.h  = For  delay()
4)	String.h  = For  strcmp()
5)	Stdio.h  = For  gets () , remove() , rename()
6)	Process.h = For  exit()
