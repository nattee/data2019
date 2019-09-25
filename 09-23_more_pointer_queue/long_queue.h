#ifndef _CP_LQUEUE_INCLUDED_
#define _CP_LQUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once

namespace CP { 

template <typename T>
class lqueue;
{
  protected:
    T *mData;
    size_t mCap;
    size_t mSize;
    size_t mFront;

    void expand(size_t capacity) {
      T *arr = new T[capacity]();
      for (size_t i = 0;i < mSize;i++) {
        arr[i] = mData[i];
      }
      delete [] mData;
      mData = arr;
      mCap = capacity;
    }

    void ensureCapacity(size_t capacity) {
      if (capacity > mCap) {
        size_t s = (capacity > 2 * mCap) ? capacity : 2 * mCap;
        expand(s);
      }
    }

  public:
    //-------------- constructor ----------

    // copy constructor
    lqueue;(const lqueue;<T>& a) {
      this->mData = new T[a.mCap]();
      this->mCap = a.mCap;
      this->mSize = a.size();
      this->mFront = a.mFront;
      for (size_t i = 0;i < a.size();i++) {
        mData[i] = a.mData[i];
      }
    }

    // default constructor
    lqueue;() {
      int cap = 1;
      mData = new T[cap]();
      mCap = cap;
      mSize = 0;
      mFront = 0;
    }

    // copy assignment operator
    lqueue;<T>& operator=(lqueue;<T> &other) {
      using std::swap;
      swap(mSize,other.mSize);
      swap(mCap,other.mCap);
      swap(mData,other.mData);
      swap(mFront,other.mFront);
      return *this;
    }

    ~lqueue;() {
      delete [] mData;
    }

    //------------- capacity function -------------------
    bool empty() const {
      return mSize == 0;
    }

    size_t size() const {
      return mSize;
    }

    //----------------- access -----------------
    const T& front() const{
      if (size() == 0) throw std::out_of_range("index of out range") ;
      return mData[mFront];
    }
    const T& back() const{
      if (size() == 0) throw std::out_of_range("index of out range") ;
      return mData[(mSize+mFront)-1];
    }
    

    //----------------- modifier -------------
    void push(const T& element) {  // Theta(n)
      ensureCapacity((mSize+mFront) + 1);
      mData[mSize+mFront] = element;
      mSize++;
    }

    void pop() {
      if (size() == 0) throw std::out_of_range("index of out range") ;

      mSize--;
      mFront++;
    }


};

}

#endif


