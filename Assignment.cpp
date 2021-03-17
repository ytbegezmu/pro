#include<iostream>
#include <cstdlib>//to use colour and clear screen
#include<cmath> //to use sqrt function
using namespace std;
void menu();
int main(){
	//area of circle require radius
	//area if trinagle require base and height
	//area of square require length
	//area of rectangle require width and length
	//area of cylinder require 
	//float radius,base,height,width,Acircle,Atriangle,Asquare;
	int choice,again=0;
	float area;
	do{
	system("cls");//for clear screen
	 menu();
	cin>>choice;
	switch(choice){
		case 1:
	    	float a,b,c,s; //taking input of the three sides from the user
		    cout << "Enter the First sides of the triangle\n";
		    cin>>a;
		    cout << "Enter the Socond sides of the triangle\n";
            cin>>b;
            cout << "Enter the Third sides of the triangle\n";
            cin>>c;
            if(a<0||b<0||c<0){
            	cout<<"length can not be negative";
			}else{
		     s=(float)(a+b+c)/2; //calculating s
		     area=sqrt(s*(s-a)*(s-b)*(s-c)); //calculating area
		    cout<<"Area Of Triangle is ="<<area; //printing the area
		}
			break;
			case 2:
			float radius;
			cout << "Enter the radius of circle : ";
		    cin >> radius;
		    if(radius<0){
		    	cout<<"radius can not be negatice"<<endl;
			}else{
		    area = 3.14 * radius * radius;
		    cout << "Area of circle with radius "
		              << radius << " is " << area;
		          }
				break;
				
				case 3:
		    	   float square_area, square_side;
				
				   cout << "Enter the side of square:";
				   cin >> square_side;
				
				   square_area = square_side * square_side;
				
				   cout << "Area of Square: " << square_area << endl;
					break;
					case 4:
						float length, width;

					   cout << "\nEnter the Length of Rectangle : ";
					   cin>>length;
					
					   cout << "\nEnter the Width of Rectangle : ";
					   cin>>width;
					
					   area = length * width;
					   cout << "\nArea of Rectangle : " << area;

						break;
						case 5:
							float rad1,hgt,volcy;
   		                    cout << "\n\n Calculate the volume of a cylinder :\n";
		                    cout << "-----------------------------------------\n";		
                            cout<<" Input the radius of the cylinder : ";
    	                    cin>>rad1;
		                    cout<<" Input the height of the cylinder : ";
							cin>>hgt;
							volcy=(3.14*rad1*rad1*hgt);
							cout<<" The volume of a cylinder is : "<< volcy << endl;
							cout << endl;
							break;
							default:
								cout<<"incorect choice";
								
				
	}
	cout<<endl;
	cout<<"Do You Want to continue Press 0 or other to exit";
	cin>>again;
	}while(again==0);
	cout<<"you are permited to exit";
}
void menu(){
	    system("Color 0A"); 
		cout<<"welcome To Geometrical calculator"<<endl;
		cout<<"Press 1 for area Trianle"<<endl;
		cout<<"Press 2 for area of circle"<<endl;
		cout<<"Press 3 for area of  Square"<<endl;
		cout<<"Press 4 for area of Rectangle"<<endl;
		cout<<"press 5 for area of cylinder"<<endl;
	}
