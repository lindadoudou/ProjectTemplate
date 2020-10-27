//
// Created by xiaolu.lin on 2020/10/23.
//

#include "simple.h"

Simple::Simple(const std::string & info)
: _info(info)
{}

const std::string & Simple::getInfo() const {
    return _info;
}

void Simple::setInfo(const std::string &info) {
    _info = info;
}