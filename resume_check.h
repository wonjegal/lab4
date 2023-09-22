//
// Created by joonhyeok on 9/18/23.
//

#ifndef SYSTEM_SW3_RESUME_CHECK_H
#define SYSTEM_SW3_RESUME_CHECK_H

#endif //SYSTEM_SW3_RESUME_CHECK_H
#include <iostream>
#include <fstream>
#include <stdlib.h>  // abort() - header
#include <string.h>  // strcmp() - header

void compare_resume(int argc, char * argv[], int &accept_id, float &accept_score);

void print_result(char * output_file, int &accept_id, float &accept_score);