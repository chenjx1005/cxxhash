#ifndef BASE_HASH_HPP_
#define BASE_HASH_HPP_

#include "common.hpp"

namespace cxxhash {
  class BaseHash {
  public:
  	BaseHash() {};
  	virtual ~BaseHash() {};
  	virtual void fit() = 0;
  };
}

#endif