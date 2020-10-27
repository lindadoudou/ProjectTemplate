//
// Created by xiaolu.lin on 2020/10/23.
//

#ifndef UNIT_TEST_DOC_SIMPLE_H
#define UNIT_TEST_DOC_SIMPLE_H

#include <iostream>

/**
 * @example test/unit/simple_test.cpp
 */
class Simple {
public:
    /**
     * @brief use a string to create a Simple object
     * @param info [std::string] required
     *
     * @section simple_constructor Example
     * @snippet test/unit/simple_test.cpp Simple Constructor
     */
    explicit Simple(const std::string & info);

    /**
     * @brief get info from Simple object
     * @return
     *
     * @section simple_getinfo Example
     * @snippet test/unit/simple_test.cpp Simple getInfo
     */
    const std::string &getInfo() const;

    /**
     * @brief set info to Simple object
     * @param info [std::string] required
     *
     * @section simple_setinfo Example
     * @snippet test/unit/simple_test.cpp Simple setInfo
     */
    void setInfo(const std::string & info);

private:
    std::string _info; //! < info
};


#endif //UNIT_TEST_DOC_SIMPLE_H
