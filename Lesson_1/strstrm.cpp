/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

 #include <iostream>
 #include <sstream>
 
 int main()
 {
     std::string inside;
     float length = 0;
     float width = 0;
     
     std::cout << "What is the length of the room?\n";
     std::getline(std::cin,inside);
     std::stringstream(inside) >> length;
     std::cout << "What is the width of the room?\n";
     std::getline(std::cin,inside);
     std::stringstream(inside) >> width;
     
     std::cout << "The area of the room is: " << length*width << "\n";
     return 0;
 }
