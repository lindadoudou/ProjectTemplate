//
// Created by xiaolu.lin on 2020/10/23.
//

#include <gtest/gtest.h>
#include "simple.h"

TEST(simple, getInfo){

   //! [Simple Constructor]
   Simple simple("hello world");
   //! [Simple Constructor]

   //! [Simple getInfo]
   const auto& info = simple.getInfo();
   //! [Simple getInfo]

   ASSERT_EQ(info, "hello world");
}

TEST(simple, setInfo){
    Simple simple("hello world");

    //! [Simple setInfo]
    simple.setInfo("Hello World!");
    //! [Simple setInfo]

    ASSERT_EQ(simple.getInfo(), "Hello World!");
}