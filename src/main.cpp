#include <iostream>
#include <cstdlib>

#include <zmq.hpp>

#include "version.hpp"


using namespace zeromq_test;

int main()
{
  const auto [major, minor, patch] = zmq::version();
 
  std::cout << "ZeroMQ v" << major
    << "." << minor
    << "." << patch
    <<"\n";

  return EXIT_SUCCESS;
}
