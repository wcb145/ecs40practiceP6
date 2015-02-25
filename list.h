#ifndef List_H
#define	List_H


class Directory;
//template <typename T> class List;

template <typename T> class List;
template <typename T>
class ListNode
{
  T *data;
  ListNode<T> *next;
  ListNode<T>(T *dat, ListNode<T> *nex);
  ~ListNode<T>();
  friend class List<T>; 
};  // class ListNode<T>

template <typename T>
class List
{
  ListNode<T> *head;
public:
  List<T>();
  List<T>(const List<T> &rhs);
  ~List<T>();
  T* operator[] (int index);
  const T* operator[] (int index) const;
  List<T>& operator+= (T *data);
};  // class List<T>


#include "list.cpp"

#endif	// List_H 


