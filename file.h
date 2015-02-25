#ifndef FILE_H
  #define FILE_H

#include <iostream>
#include "permissions.h"
#include "Time.h" 
  using namespace std;
  
class File 
{
  protected:
    Permissions permissions;
    char *name;
    updateTime();
  
  private:
    Time time;
    
  public:
   // File(); 
  //  File(const char *nam, Permissions permissions); // Directory *paren, const char *owner); 
   // File(const File &rhs); // copy constructor
  //  virtual ~File();
  //  void ls(bool isLongFormat) const;
    void getPermissions();
    void touch();
    void read();
    void write(ostream &os);
    bool operator== (const File &rhs) const;
    bool operator< (const File &rhs) const;
    
    friend ostream& operator<< (ostream &os, const File &rhs);
    friend istream& operator>> (istream &is, File &rhs);
  
}; // class File


#endif // FILE_H