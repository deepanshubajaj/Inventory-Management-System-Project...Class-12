# Project Description 
<p><h1 align="center">Inventory Management System Project</h1>
<br><h2 align="center">Class 12th Project based on OOPS & File Handling</h2>

<p><h2 align="center">INTRODUCTION  TO  PROJECT </h2>
<br>My project  Inventory  Management  System  basically provides a quick and efficient  registration of  a  particular  item ,  storing  their  details  into  the  system  and  perform  the  work  accordingly.  
The need of this project arose as there is a growing demand of inventory for resources and managing the record  of n items  is not an easy task. My project keeps the data more secure and provides  other  facilities and is very  fast. Someone working on this program for the first time doesn’t need any special training or course , only the basic knowledge about inventory is enough for someone to start working with my program. The  menu is  self  explanatory and provides all necessary access according  to  the  user  ,one can add ,  display , update , search  , delete  ,issue , purchase , deposit  item through a great ease. Also the  password  is  setup  in the program  to secure  data.

<br>The program can easily handle vast amount of data and the data stored is safe within the binary file which are readable only through the program itself . Inside the program also the object oriented programming  has been used to a great extent so data is safe while it is in use. Thus this Inventory management system is ideal for prolong use of  resources.

<p><h2 align="center">DATA  STRUCTURES USED </h2>
<br>My  program  has  the  following  class:
<br><br><h3>Inventory </h3>
<br>It  has  the  following  data  members:
<br>1)	char icode[5];
               <br>It  stores  the  code of  the  item  .
<br>2)	char iname[20];
                <br>It  stores  the  name  of  the  item . 
<br>3)	float price;
               <br>It  stores  the  price  of  the  item .
<br>4)	int stock;
               <br>It  stores  the  stock  of  the  item .


<br><br>It  has  the  following  functions :
<br>1)	 void getdata();
         <br>To get  the  details  of  item .
<br>2)	void showdata1();
         <br>For displaying item code and name .
<br>3)	void showdata2();
         <br>For displaying the item details  .
<br>4)	char* geticode();
         <br>It  returns  the  value  of  item  code  .
<br>5)	char* getiname();
         <br>It  returns  the  value  of  item  name.
<br>6)	float getprice();
         <br>It  returns  the  value  of  item  price .
<br>7)	int getstock();
         <br>It  returns  the   value  of  item  stock.
<br>8)	void setp(float a);
         <br>It  sets  the  value  of  price of  item.
<br>9)	void sets(int a);
        <br>It  sets  the  value  of  stock  of  item .

<p><h2 align="center">Module  Description</h2>
<br>1)	 To add item ...................
          <br>To  add  a new  record  of  item .

<br>2)	To display ......................
<br>(a)	To Display list of items....................
<br>(b)	To Display contents of particular item......
<br>(c)	To Display all items having PRICE>=50.......
<br>(d)  To Display all items having PRICE<=10.......
<br>(e)	To Display all items having STOCK>=100.....
<br>(f)	To Display all items having STOCK<=50.......
<br>(g)	To Display all items  in Tabular form.......


<br>3)	To Search item ...............
<br>(a)	Search  by  item  name ….
<br>(b)	Search  by  item  code…..




<br>4)	To update item ..............
<br>(a)	Update  item  price ….
<br>(b)	Update  item  stock…

<br>5)	To delete item ................
 <br>        To  delete  the  particular  item  from  inventory .

<br>6)	To issue.......................
  <br>        To  issue  some  item  from  inventory  for  some    days.

<br>7)	To deposit item...............
 <br> To  deposit  the issued  item  of  inventory  after  some  days.

<br>8)	To purchase item..............
 <br>         To  purchase  the  item  from  inventory .

<br>9)	To exit........................
<br>  To  exit  the  main  program.

<p><h2 align="center">HEADER  FILES  USED </h2>
<br>I  have  used  the  following  header  files  in  my  project  :
<br>1)	Conio.h  = For  getch() , textcolor() , textbackground(), gotoxy()
<br>2)	Fstream.h  = For  cin , cout  and  file  handling
<br>3)	Dos.h  = For  delay()
<br>4)	String.h  = For  strcmp()
<br>5)	Stdio.h  = For  gets () , remove() , rename()
<br>6)	Process.h = For  exit()
