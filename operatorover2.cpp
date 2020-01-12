#include <iostream>
using namespace std;
 
class Box {
   double length;      // Length of a box
   double breadth;     // Breadth of a box
   double height;      // Height of a box
   
   public:


	Box(){
	length=0;
	breadth=0;
	height=0;
	}

	Box(double x,double y,double z){
	
	length=x;
	breadth=y;
	height=z;	
	
	}
 
	void getData(){
	cin>>length;
	cin>>breadth;
	cin>>height;
	}
	
	double getVolume(void){
	return length*breadth*height;
	}
	
   
   // Overload + operator to add two Box objects.
   Box operator +(Box b) {
      Box box;
      box.length = length + b.length;
      box.breadth = breadth + b.breadth;
      box.height = height + b.height;
      return box;
   }
};

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
  cout<<"Enter the length breadth and height of 1st box"<<endl;
	Box1.getData();


  cout<<"Enter the length breadth and height of 2nd box"<<endl;
	Box2.getData();

 
   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
 
   // Add two object as follows:
   Box3 = Box1 + Box2;
 
   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
 
   return 0;
}
