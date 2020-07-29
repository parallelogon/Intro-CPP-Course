/*Create a vector of floats called vFloat. 
* vFloat should have an iterator. 
*/

//TODO: include the necessary libraries
#include<iostream>
#include<vector>


template <typename T>
void sizer(std::vector<T>& avector)
{
  avector.resize(5);
  typename std::vector<T>::iterator it;

  for(it = avector.begin(); it != avector.end(); ++it)
	*it = *it + 1;
}

template <typename T>
void vectprinter(std::vector<T>& avector)
{
	typename std::vector<T>::iterator it;

	for(it = avector.begin(); it != avector.end(); ++it)
		std::cout << *it;
}


int main ()
{
  //TODO: instantiate vFloat vector
  std::vector<float> vFloat;
  
  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";
  
  //Changing the size of vectorInts to 6
  //TODO: Change the size of vFloat to 10 elements
  std::cout<< "They are: ";
  vectprinter(vFloat);
  std::cout << "\n";

  vFloat.resize(10);

  std::cout<<"\n\n vFloat now has "<<vFloat.size()<<" elements\n";
 
  sizer(vFloat);

  std::cout<<"\n\n vFloat now has "<<vFloat.size()<<" elements\n";
  vectprinter(vFloat);
  std::cout << "\n";
  sizer(vFloat);
  vectprinter(vFloat);
  return 0;
}
