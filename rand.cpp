#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("file.txt");
  for(int i=0; i<20; i++){
    float a=3.0;
    myfile << "glVertex3f("<<(((float)rand()/(float)(RAND_MAX)) * a)<<", "<<(((float)rand()/(float)(RAND_MAX)) * a)<<", 0.0);"<<endl;
    myfile << "glVertex3f(-"<<(((float)rand()/(float)(RAND_MAX)) * a)<<", "<<(((float)rand()/(float)(RAND_MAX)) * a)<<", 0.0);"<<endl;
    myfile << "glVertex3f("<<(((float)rand()/(float)(RAND_MAX)) * a)<<", -"<<(((float)rand()/(float)(RAND_MAX)) * a)<<", 0.0);"<<endl;
    myfile << "glVertex3f(-"<<(((float)rand()/(float)(RAND_MAX)) * a)<<", -"<<(((float)rand()/(float)(RAND_MAX)) * a)<<", 0.0);"<<endl;
  }
  myfile.close();
  return 0;
}
