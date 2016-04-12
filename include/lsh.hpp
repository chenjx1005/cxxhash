#ifndef LSH_HPP_
#define LSH_HPP_

#include "base_hash.hpp"

namespace cxxhash {
  class Lsh : public BaseHash {
  public:
  	Lsh();
  	~Lsh();
  	void fit();
  };
}

#endif