//
// Created by wizard on 18.12.2019.
//

#include "CString.h"
const char *CString::COMMENTS[] = {
//        "//",
//        "/*",
//        "*",
//        "*/"
    "/",
    "*"
};

const char *CString::WHITE_CHARS[] = {
        "\r",
        "\n",
        "\t"
};



CString::CString(const char *source) : source(source) {

}


const char *CString::findBetween(char start, char stop) {
    return nullptr; //?
}

const char *CString::stripComments() {
    return nullptr;
}

const char *CString::iterate() {
    while (*source) {
        current = *source;
        //one after another
        *source++;
    }
    return nullptr;
}

bool CString::isWhite() {
    return false;
}
