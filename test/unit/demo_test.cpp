//
// Created by xiaolu.lin on 2020/10/23.
//

#include <gtest/gtest.h>
#include "demo.h"


TEST(demo, add){
    //! [add example.1]
    int c = add(1, 2);
    //! [add example.1]
    ASSERT_EQ(c, 3);
}
