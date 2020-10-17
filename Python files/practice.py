##To run this program perfectly, remove the first character(#) from each and every line




## here is an example of a comment in python.
##  // this is not a way to comment
## /* even this does not work */



##using if...else

#num=-1
#if num>6:
#    print("Number is greater than 6");
#elif num<6:
#    print("Number is smaller than 6");
#else :
#    print("Number is 6");



##using strings

#string="Hey there! Love me? ";
#print(string);
#newString="Yeah very true...";
#print("The new string is: " , newString);
#combinedString=string+newString;
#print("The combined string is: " , combinedString);



##using the in[] operator

#animal="dog";
#if animal in["lion","cat","Akshay"]:
#    print("'dog' is there in the list provided");
#if animal not in["lion","cat","Akshay"]:
#    print("'dog' is NOT there in the list provided");



##using input() function

#hello=input("Say 'Hi': ");
#if hello == "Hi":
#    print("Hey there! How may I help you?");



##using int() as a data type

#x=int(input("Enter an integer value to be assigned to x: "));



##using lower() and upper() functions

#char=input("Enter the string you want to display: ");
#print("In uppercase: " , char.upper() , "; in lowercase: " , char.lower() , ';');



##using newLine command

#print("My name is\nAkshay");



## for typecasting to a string data-type from integer data-type, use str() function

#print(" My age is : " + str(18));



## Using title() for title casing a string

#a="Akshay is god!";
#print(a.title());



## List in python is same as a 2D char array; In [] brackets;
#a=["Hello","hELLO","HELLO","hello"];
#b=not False;
#c=input("Type a varient of 'hello' and press enter: ")
#if c in a:
#    print(b, ", we have it in here.\nThe list: " , a);
#else: print("The option name you wrote is not in the list.\nThe list: ", a);
#print("All the elements seperately in the list are:",a[0],a[1],a[2],a[3]);



##deleting an element from a list
#me=["Akshay", "Harsh", "Akku"];
#del me[2];
#print(me);



##sorting lists and other functions
#animal=["Lion","Tiger","Elephant","Deer"];
#animal.sort();
#print(animal);
#animal.sort(reverse=True);    #for decending order
#print(animal);
#animal.reverse();    #command used to reverse the order
#print(len(animal));    #using len() function as in strlen()'s in python



##uisng for loop with lists
##to run this, remove the first '#' in line 104 
#for animal in animal:
#    print(animal);
#    print("hello");
#print("hello");



#for anyName in range(1,5):
#    print(anyName);    #printing numbers from 1 and less than 5



##using some mathematical functions
#numbers=[1,2,3,4,5,6,7,8,9,10];
#print(min(numbers),max(numbers),sum(numbers));



##using slices in list
##enable line 129
#print(numbers[0:4]);



##copying a list and putting a new element in it...
#os=["macos","windows","linus","andriod","ios"];
#mobileOS=os[3:5];
#desktopOS=os[0:3];
#print "os: ",os;
#print "mobileOS: ",mobileOS;
#print "desktopOS: ",desktopOS;
#os.append("iPadOS");
#print "os: ",os;



##creating and using tuples
#thisTuple=(9,76);
#print(thisTuple);
#print(thisTuple[0]);
#print(thisTuple[1]);



##for loop with tuples
##enable l153 for this
#for thisTuple in thisTuple:
#    print(thisTuple);



##overwriting a tuple
#thisTuple=(100,99,69);
#print(thisTuple);



##using dictionaries in python
#dic={"hello":"hi ","Akshay":"Harsh "};
#print(dic["hello"]+dic["Akshay"]);
#dic["dic"]="dictionary";    #adding a new element in dictionary
#print(dic["dic"]);
#print(dic);



