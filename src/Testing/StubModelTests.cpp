// StubModelTests.cpp 
#include <gtest/gtest.h>

#include "StubModelTests.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
TEST_P(StubModelTests, Print) {
  int time = 1;
  EXPECT_NO_THROW(stub_model_->print());
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
TEST_P(StubModelTests, CopyFreshStub) {
  StubModel* new_stub = stub_model_;
  EXPECT_NO_THROW(new_stub->copyFreshModel(dynamic_cast<Model*>(stub_model_))); 
}

